#include "header.hpp"
void rev_sort(vector<string>& v)
{
	vector<string>::iterator it;
	string x;
	while (cin >> x)
	{
		v.push_back(x);
	}
	it = v.begin();
	for (it; it != v.end(); it++)
	{
		reverse((*it).begin(), (*it).end());
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << endl;

}
int main()
{
	vector<string> v;
	rev_sort(v);
	system("pause");
}