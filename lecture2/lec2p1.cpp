#include <bits/stdc++.h>
using namespace std;

// replace a particular character with given string
void replaceChar(char *, char, char *);
int main()
{
    char arr[10000];
    char replacement[100];
    char ch;
    cout << "Enter a string: " << endl;
    cin >> arr;
    cout << "Enter character to be replaced: " << endl;
    cin >> ch;
    cout << "Enter string to be replaced with: " << endl;
    cin >> replacement;
    replaceChar(arr, ch, replacement);
    cout << arr;
    return 0;
}

void replaceChar(char *arr, char ch, char *replacement)
{
    int l = strlen(arr);
    int len = strlen(replacement);
    if (l == 0)
        return;

    if (arr[0] == ch)
    {
        for (int i = l; i >= 1; i--)
        {
            arr[i + len - 1] = arr[i];
        }
        for (int i = 0; i < len; i++)
        {
            arr[i] = replacement[i];
        }
        return replaceChar(arr + len, ch, replacement);
    }
    replaceChar(arr + 1, ch, replacement);
}