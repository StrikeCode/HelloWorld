#include <iostream>

using namespace std;

void qsort(int arr[], int i, int j)
{
    int val = arr[i];
    int l = i;
    int r = j;
    while (l < r)
    {
        while (l < r && arr[r] >= val)
        {
            r--;
        }
        if (l < r)
        {
            arr[l++] = arr[r];
        }
        while (l < r && arr[l] <= val)
        {
            l++;
        }
        if (l < r)
        {
            arr[r--] = arr[l];
        }
    }
    arr[l] = val;
    qsort(arr, i, l - 1);
    qsort(arr, l + 1, j);
}
// win添加的注释
void sort(int arr[], int size)
{
    qsort(arr, 0, size);
}

int main()
{
    // ubuntu添加的注释
    int arr[] = {11, 29, 8, 99, 2, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}