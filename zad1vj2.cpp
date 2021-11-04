#include<iostream>
using namespace std;

void sort(int (&arr)[5])
{

    int i, j, k, min, max;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < (5 - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
    min = arr[0];
    max = arr[4];
    cout << "min je: " << min << "\nmax je: " << max<<endl;

}
int main()
{
    int i;
    int arr[5] = { 5,34,2,1,3 };
    sort(arr);
    system("pause");
}