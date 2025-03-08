#include <bits/stdc++.h>
using namespace std;

// Approach 2 of printing subsequences
void printSubseq(string input, string tillNow)
{
    if (input.size() == 0)
    {
        cout << tillNow << endl;
        return;
    }
    printSubseq(input.substr(1), tillNow + input[0]);
    printSubseq(input.substr(1), tillNow);
}

int main()
{
    string s;
    cout << "Enter the string: " << endl;
    cin >> s;
    printSubseq(s, "");

    cout << s;
    return 0;
}