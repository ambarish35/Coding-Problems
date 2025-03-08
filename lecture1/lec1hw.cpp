#include <bits/stdc++.h>
using namespace std;

// replace a particular character with 'abc'
void replaceChar(char *, char);
int main()
{
    char arr[10000];
    char ch;
    cout << "Enter a string: " << endl;
    cin >> arr;
    cout << "Enter character to be replaced: " << endl;
    cin >> ch;
    replaceChar(arr, ch);
    cout << arr;
    return 0;
}

void replaceChar(char *arr, char ch)
{
    int l = strlen(arr);
    if (l == 0)
        return;

    if (arr[0] == ch)
    {
        for (int i = l; i >= 1; i--)
        {
            arr[i + 2] = arr[i]; // shift the NULL character too, because only one element at the end of string is guarranted to be NULL, others can be garbage values depending upon the compiler
        }
        arr[0] = 'a';
        arr[1] = 'b';
        arr[2] = 'c';
        return replaceChar(arr + 3, ch);
    }
    replaceChar(arr + 1, ch);
}