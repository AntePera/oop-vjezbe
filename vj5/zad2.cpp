#include"header.hpp"
int main()
{
	weapon mp4;
	mp4.w.get_value(&mp4.w.x, &mp4.w.y, &mp4.w.z);
	mp4.bull = 30;
	mp4.n_bull = mp4.bull;
	cout << "weapon coordinates:" << mp4.w.x << "\t" << mp4.w.y << "\t" << mp4.w.z<<endl;
	while (1)
	{
		mp4.shoot();
		cout << "Number of bullets " << mp4.n_bull<<"/"<<mp4.bull << endl;
		if (mp4.n_bull == 0)
		{
			mp4.reload();
			cout << "Number of bullets " << mp4.n_bull << "/" << mp4.bull << endl;
			break;
		}

	}
	return 0;
}
