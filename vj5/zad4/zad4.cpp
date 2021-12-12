#include"header.hpp"
int main()
{
	int n, hit = 0;
	cout << "unesite broj meta" << endl;
	cin >> n;
	meta* target = new meta[n];
	weapon wp;
	for (int i = 0; i < n; i++)
	{
		target[i] = meta(target[i].dl, target[i].gd);
	}
	for (int i = 0; i < n; i++)
	{
		target[i].dl.set_rand(&target[i].dl.x, &target[i].dl.y, &target[i].dl.z);
		target[i].gd.set_rand(&target[i].gd.x, &target[i].gd.y, &target[i].gd.z);
	}
	wp.bull=30;
	wp.n_bull = wp.bull;
	wp.w.get_value(&wp.w.x, &wp.w.y, &wp.w.z);
	for (int i = 0; i < n; i++)
	{
		wp.shoot();
		double tmp;
		if (target[i].dl.z > target[i].gd.z)
		{
			tmp = target[i].dl.z;
			target[i].dl.z = target[i].gd.z;
			target[i].gd.z = tmp;
		}
		if ((wp.w.z >= target[i].dl.z) && (wp.w.z <= target[i].gd.z))
		{
			target[i].state = true;
			if (target[i].state == true)
			{
				cout << "hit" << endl;
				hit++;
			}
		}
		else
		{
			target[i].state = false;
			if (target[i].state == false)
			{
				cout << "miss" << endl;
			}
		}
		if (wp.n_bull == 0)
		{
			wp.reload();
		}
		
	}
	cout << "targets hit: " << hit << " out of " << n << " targets"  << endl;
}
