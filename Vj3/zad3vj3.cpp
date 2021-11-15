#include "header.hpp" 
int main()
{
	vector<int> v;
	int x=0;
	input(v);
	sort(v.begin(), v.end());
	v.insert(v.begin(), 0);
	for (int i = 0; i < v.size(); i++)
	{
		x += v[i];
	}
	v.push_back(x);
	print(v);
	system("pause");
}