#include"Header.hpp"
void middle(vector<int>& v1, vector<int>& v2, vector<int>& v3)
{
	for (int i = 0; i < v1.size(); i++)
	{

		if (count(v2.begin(), v2.end(), v1.at(i)))
		{
			continue;
		}
		else
			v3.push_back(v1.at(i));
	}
	print(v3);
}
int main()
{
	vector<int>v1, v2, v3;
	input2(v1, 1, 9);
	input2(v2, 1, 9);
	middle(v1, v2, v3);
	system("pause");
}