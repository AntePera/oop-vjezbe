#include"Header.hpp"
ostream& operator<< (ostream& os, timer& p)
{
	os << p.h << ":" << p.m << ":" << p.s;
	return os;
}
penalty::penalty(double sec): n(sec){}
void penalty::operator()(timer& t)const
{
	double secs = t.getSeconds();
	secs += n;
	if (secs >60)
	{
		int mins = t.getMinutes();
		mins += secs / 60;
		secs = secs - 60;
		t.setMinutes(mins);
	}
	t.setSeconds(secs);
}