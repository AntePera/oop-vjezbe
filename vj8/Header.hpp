#pragma once
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
class timer
{
	private:
		int h, m;
		double s;
	public:
		int n=0;
		timer()
		{
			this->h = 0;
			this->m = 0;
			this->s = 0;
		}
		timer(int h, int m, double s)
		{
			this->h = h;
			this->m = m;
			this->s = s;
		}
		double getSeconds()
		{
			return s;
		}
		double getMinutes()
		{
			return m;
		}
		void setSeconds(int sec) {
			s = sec;
		}
		void setMinutes(int mins) {
			m = mins;
		}
		timer& operator +=(const timer& other)
		{
			this->h += other.h;
			this->m += other.m;
			this->s += other.s;
			
			if (this->s >= 60)
			{
				this->m = this->m + 1;
				this->s = this->s - 60;
			}
			if (this->m >= 60)
			{
				this->h = this->h + 1;
				this->m = this->m - 60;
			}
			return *this;
		}
		timer&operator /=(int n)
		{
			double tmp = 0;
			tmp = h * 3600 + m * 60 + s;
			tmp /= n;
			h = tmp / 3600;
			m = (tmp - (h * 3600)) / 60;
			s = (tmp - ((h * 3600) + (m * 60)));
			return *this;
		}
		timer operator-()
		{
				s = -(s);
				return timer(h, m, s);
		}
		operator double()
		{
			if (m!=0)
				return (s + m* 60);
			return s;
		}

		friend ostream& operator<<(ostream& os, timer& p);
		timer operator+(int n)
		{
			this->s = s + n;
			return *this;
		}
		friend bool operator<(const timer& a, const timer& b)
		{
			if (a.h < b.h)
				return (a.h < b.h);
			else if (a.m < b.m)
				return (a.m < b.m);
			else
				return (a.s < b.s);
		}
		
};
class penalty
{
	private:
		double n;
	public:
		penalty(double n);
		void operator()(timer& t)const;

};
