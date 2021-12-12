#include<iostream>
#include<algorithm>
#include<ctime>
#include<cmath>
using namespace std;
class coordinates
{
	public:
		double x;
		double y;
		double z;
		void set_zero(double *x, double *y ,double *z);
		void set_rand( double *x, double *y, double *z);
		void get_value(double* x, double* y, double* z);
	

};

double d2distance(double* x, double* x1, double* y, double* y1);
double d3Distance(double* x, double* x1, double* y, double* y1, double* z, double* z1);
class weapon
{
	public:
		coordinates w;
		unsigned bull ;
		unsigned n_bull;
		void shoot();
		void reload();
};
class meta
{
	public:
		meta() {}
		coordinates dl, gd;
		// parameterised constructor

		meta( coordinates dl, coordinates gd )
		{
			this->dl = dl;
			this->gd = gd;
		}
		bool state;
};
