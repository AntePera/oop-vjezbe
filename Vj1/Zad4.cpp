#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    sort(arr, n - 1);
}
void swap(int m, int n)
{
    int temp;
    if (m > n)
    {
        temp = m;
        m = n;
        n = temp;
    }
}
void min_max(int *arr,int n)
{
    sort(arr, n);
    int min, max;
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<endl;
    }
    min = arr[0];
    max = arr[n - 1];
    cout << "min je:" << min << "\nmax je:" <<max<<endl;
}
int main()
{
    int i,n;
    int arr[] = { 5,34,2,1,3 };
    n = sizeof(arr) / sizeof(arr[0]);
    int* p = arr;
    min_max(p, n);
    system("pause");
}
