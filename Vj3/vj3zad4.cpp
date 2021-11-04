#include "header.hpp"
void erased(vector<int> &v, vector<int>::iterator it)
{
	
		v.erase(it);

	
}
int main()
{
	vector<int> v;
	vector<int>::iterator it;
	int n,a,b;
	cout << "Value margins within the vector" << endl;
	cin >> a >> b;
	input2(v, a, b);
	cout << v.size()<<endl;
	cout << "Number of the element you want to delete:\n" << endl;
	cin >> n; 
	it = v.begin()+n-1;
	erased(v, it);
	print(v);
	system("pause");
}