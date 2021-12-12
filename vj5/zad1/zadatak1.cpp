#include"header.hpp"
int main()
{
	coordinates c1;
	coordinates c2;
	c1.x = 1;
	c1.y = 1;
	c1.z = 1;
	c2.x = 1;
	c2.y = 1;
	c2.z = 1;
	double d2,d3;
	c1.set_zero(&c1.x, &c1.y, &c1.z);
	cout << "c1 values set to 0:" << endl;
	cout << c1.x << "\t" << c1.y << "\t " << c1.z << endl;
	//c1.set_rand(&c1.x, &c1.y, &c1.z);
	c1.get_value(&c1.x, &c1.y, &c1.z);
	cout << c1.x << "\t" << c1.y << "\t " << c1.z << endl;
	c2.set_zero(&c2.x, &c2.y, &c2.z);
	cout << "c2 values set to 0:" << endl;
	cout << c2.x << "\t" << c2.y << "\t " << c2.z << endl;
	c2.get_value(&c2.x, &c2.y, &c2.z);
	d2 = d2distance(&c1.x, &c2.x, &c1.y, &c2.y);
	d3 = d3Distance(&c1.x, &c2.x, &c1.y, &c2.y, &c1.z, &c2.z);
	cout << c2.x << "\t" << c2.y << "\t " << c2.z << endl;
	cout << "distance between points in 2d space" <<endl<< d2 <<endl;
	cout << "distance between points in 3d space" <<endl<< d3;
	return 0;
}
