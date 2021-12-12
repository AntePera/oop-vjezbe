#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
string rsort(string &s)
{
	
	string x;
	vector<string> s1;
	vector<string>::iterator it = s1.begin();
	reverse(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++)
	{
		
		if (isspace(s[i]))
		{
			s1.push_back(x);
			x.clear();
			i++;
		}
		x.append(&s[i]);

	}
	for (int i=0;i<s1.size();i++)
	{
		sort(s1.at(i).begin(), s1.at(i).end());
	}
	s.clear();
	for (int i = 0; i < s1.size(); i++)
	{
		s.append(s1.at(i));
	}
	return s;
}
int main()
{
	string s;
	cout << "unesi string:" << endl;
	getline(cin, s);
	rsort(s);
	cout << s << endl;
	system("pause");
}