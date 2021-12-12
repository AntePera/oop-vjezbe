#include"header.hpp"
int main()
{
	srand(time(NULL));
	weapon mp4;
	mp4.w.get_value(&mp4.w.x, &mp4.w.y, &mp4.w.z);
	meta p;
	p.dl;
	p.gd;
	p.dl.set_rand(&p.dl.x, &p.dl.y, &p.dl.z);
	cout <<"bottom left:" << p.dl.x << "\t" << p.dl.y << "\t" << p.dl.z << endl;
	p.gd.set_rand(&p.gd.x, &p.gd.y, &p.gd.z);
	cout <<"upper right:"<< p.gd.x << "\t" << p.gd.y << "\t" << p.gd.z << endl;
	int tmp;
	if (p.dl.z > p.gd.z)
	{
		tmp = p.dl.z;
		p.dl.z = p.gd.z;
		p.gd.z = tmp;
	}
	if ((mp4.w.z >= p.dl.z) && (mp4.w.z <= p.gd.z))
	{
		p.state = true;
	}
	else
	{
		p.state = false;
	}
	if (p.state == true)
	{
		cout << "pogodeno" << endl;
	}
	else if (p.state == false)
	{
		cout << "miss" << endl;
	}
	return 0;
}
