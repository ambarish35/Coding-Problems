#include <bits/stdc++.h>
using namespace std;
// delete consecutive duplicates

void deleteConsecutiveDuplicates(char input[])
{
    int l = strlen(input);
    if (l == 0 || l == 1)
        return;
    if (input[0] == input[1])
    {
        for (int i = 1; i < l; i++)
        {
            input[i] = input[i + 1];
        }
        return deleteConsecutiveDuplicates(input);
    }
    else
    {
        return deleteConsecutiveDuplicates(input + 1);
    }
}

int main()
{
    char input[1000];
    cout << "Enter the string: ";
    cin >> input;
    deleteConsecutiveDuplicates(input);
    cout << input;
    return 0;
}