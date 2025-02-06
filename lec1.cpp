#include <iostream>
#include <string.h>
using namespace std;

// Recursion AND some basic problem solving using recursion
int sumOfArray(int *arr, int size)
{
    if (size == 0)
        return 0;
    else
        return arr[0] + sumOfArray(arr + 1, size - 1);
}
bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return isSorted(arr + 1, size - 1);
}
void reverseArray(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return;
    }
    else
    {
        swap(arr[0], arr[size - 1]);
    }
    return reverseArray(arr + 1, size - 2);
}
void printArray(int arr[], int size)
{
    if (size == 0)
        return;
    cout << arr[0] << " ";
    printArray(arr + 1, size - 1);
}
void moveArr(char arr[], int size)
{
    if (size == 0)
        return;
    arr[0] = arr[1];
    return moveArr(arr + 1, size - 1);
}
void removeChar(char arr[], int size, char ch)
{
    if (size == 0)
        return;
    if (arr[0] == ch)
    {
        arr[0] = arr[1];
        if (size == 1)
            return;
        moveArr(arr + 1, size - 1);
        return removeChar(arr + 1, size - 2, ch);
    }
    else
    {
        return removeChar(arr + 1, size - 1, ch);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    // cout << sumOfArray(arr, 6);

    // if (isSorted(arr, 6))
    //     cout << "The array is sorted" << endl;
    // else
    //     cout << "The array is not sorted" << endl;

    // reverseArray(arr, 6);
    // printArray(arr, 6);
    char crr[1000];
    char ch;
    cout << "Enter a string: " << endl;
    cin >> crr;
    cout << "Enter character to be removed: " << endl;
    cin >> ch;
    int size = strlen(crr);
    removeChar(crr, 6, ch);
    printf(crr);

    return 0;
}
