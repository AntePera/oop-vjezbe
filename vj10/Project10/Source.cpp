#include"Templat.hpp"
int main()
{
	char arr1[] = { 'M', 'a', 'x','S','u','p','e','r','M','a','x'};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	sort<char>(arr1, n);
	for (int i = 0; i < n; ++i)
	{
		std::cout << arr1[i] << " ";
	}
	return 0;
}