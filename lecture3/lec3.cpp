#include <bits/stdc++.h>
using namespace std;
// genrating subsequences of a string Method 1

int subseq(string s, string output[])
{
    if (s.size() == 0)
    {
        output[0] = "";
        return 1;
    }
    int count = subseq(s.substr(1), output);
    for (int i = 0; i < count; i++)
    {
        output[i + count] = s[0] + output[i];
    }
    return count = count * 2;
}

int main()
{
    // get input from user
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    // make an array of strings and take the address of the first element(string) in output
    string output[100]; // string *output = new string[100]; OR vector<string> output; Vector approach is best
    // I used stack allocation, which can cause stack overflow, new string[100] is allocated in heap and will need to free the allocated memory
    // vector is also allocated in heap, but doesn't need to be freed. It is done automatically. Both heap approaches can be dynamically allocated memory.
    int count = subseq(s, output);
    cout << "The subsequences are: " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}