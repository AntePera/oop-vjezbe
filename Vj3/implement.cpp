#include"Header.hpp"
void input(vector<int> &v)
{
	int x;
	while (cin >> x)
		v.push_back(x);

}
void input2(vector<int>& v, int a, int b)
{
	int m;
	while (1)
	{
		cout << "unesi m:";
		cin >> m;
		if (m<a || m>b)
			break;
		else
			v.push_back(m);
	}
}
void print(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << ' ';
}
