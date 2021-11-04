#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
struct tocka
{
	int x, y;
};

struct rect
{
	tocka a, b;
}; 
struct circle
{
	tocka s;
	int r;
}; 

int cross( vector<rect>  & p, const circle& k, int n)
{
	int br = 0;
	int i;
	for (i = 0; i < n; ++i)
	{
		int mx = max(p[i].a.x, min(k.s.x, p[i].b.x));
		int my = max(p[i].a.y, min(k.s.y, p[i].b.y));
		int nx = mx - (k.s.x);
		int ny = my - (k.s.y);
		if ((nx * nx + ny * ny) <= (k.r * k.r))
			br++;
	}
	return br; 
} 
int main()
{
	int n, i, x;
	cout << "Unesite broj pravokutnika:" << "\n";
	cin >> n;
	vector<rect>p;
	p.reserve(n);
	for (i = 0; i < n; ++i)
	{
		cout << "Unesite tocke pravokutnika:" << "\n";
		cin >> p[i].a.x >> p [i].a.y >> p [i].b.x >> p [i].a.x;
	}
	circle  k;
	k.s = { 3,2 };
	k.r = 1;
	x = cross(p, k, n);
	p.clear();
	cout << "Broj pravokutnika koji se sijeku s kruznicom je:" << x << endl;
	system("pause"); 
}