#include"header.hpp"
void coordinates:: set_zero(double *x, double *y, double *z)
{
	*x = 0;
	*y = 0;
	*z = 0;
}
void coordinates:: set_rand( double *x, double *y, double *z)
{
	
	int a, b;
	a = 1;
	b = 100;
	*x = a + rand() % (b - a + 1);
	*y = a + rand() % (b - a + 1);
	*z = a + rand() % (b - a + 1);
}
void coordinates::get_value(double* x, double* y, double* z)
{
	cout << "input the coordinates" << endl;
	cin >> (*x) >> (*y) >> (*z);
}
double d2distance(double *x, double* x1, double* y, double* y1)
{
	double distance2d;
	int d = pow(*x1 - *x, 2) + pow(*y1 - *y, 2) * 1.0;
	distance2d = sqrt(d);
	return distance2d;
}
double d3Distance(double* x, double* x1, double *y, double* y1, double* z, double* z1)
{
	double distance3d;
	int d = pow(*x1 - *x, 2) + pow(*y1 - *y, 2) + pow(*z1 - *z, 2) * 1.0;
	distance3d= sqrt(d);
	return distance3d;
}
void weapon :: shoot()
{
	if (n_bull > 0)
	{
		n_bull--;
	}
	cout << "remaining bullets " << n_bull << endl;
}
void weapon::reload()
{
	if (n_bull < bull)
	{
		n_bull = bull;
	}
	cout << "remaining bullets  " << n_bull << endl;
}

