#include <iostream>

using namespace std;

void sort(int* arr,int n)
{

	int min, max;
	min = arr[0];
	max = arr[n - 1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	
	cout << "min je: " << min << "\nmax je: " << max<<endl;

}
int main()
{
	int i,n;
	int arr[5] = { 5,34,2,1,3 };
	n = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	sort(p,n);
	system("pause");
}
