#include<iostream>
int rand_num(int* arr,int &n,int &s, int& z)
{
	
	for (int j = 0; j < n; j++)
	{
		if (j==s)
		{
			z = arr[j] +1;
			return z;
		}
	}
}
int main()
{
	int n;
	std::cout << "Unesite velicinu polja:" << std::endl;
	std::cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cout << "unesite " << i+1 << ". element polja" << std::endl;
		std::cin >> arr[i];
	}
	int  s,x;
	int* p = arr;
	int z;
	std::cout <<"Unesite poziciju broja 0-"<< n-1 << std::endl;
	std::cin >> s;
	rand_num(p,n, s, z);
	std::cout<<"uvecan element"<<std::endl <<z<<std::endl;
	delete[] arr;
	system("pause");
}