#include "header.hpp"
int main()
{
	vector<int> v, v1;
	int a, b;
	cout << "unesi interval:" << endl;
	cin >> a >> b;
	cout << "------------------" << endl;
	input(v);
	input2(v1, a, b);
	print(v);
	print(v1);
	system("pause");
}