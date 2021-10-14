#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
typedef struct
{
	int m;
	int n;
	float mat[10][10];
	
}mat;
void unos(mat* x)
{
	std::cout << "unesite matricu"<<std::endl;
	for (int i = 0; i < x->m; ++i)
	{
		for (int j = 0; j < x->n; ++j)
		{
			std::cin >> x->mat[i][j];

		}
	}
}
void raspon(mat* x)
{
	srand(time(0));
	float* mat = new float[x->m * x->n];
	
	int min, max;
	std::cout << "\nUnesite interval:"<<std::endl;
	std::cin >> min >> max;
	for (int i = 0; i < x->m * x->n; i++)
	{
		
			if (max > min)
			{
				mat[i] = (rand()%(max-min+1))+min;
			}
			else
			{
				mat[i] = (rand() % (min - max + 1)) + max;
			}
			
		
	}
	for (int i = 0; i < x->m * x->n;i++)
	{
		
			std::cout << std::right << std::setw(5) << std::fixed << std::setprecision(4) << mat[i] << " ";
		
	}
}
void operacije(mat* x)
{
	srand(time(0));
	char op;
	float* m1 = new float[x->m * x->n];
	float* m2 = new float[x->m * x->n];
	float* nova = new float[x->m * x->n];
	int min, max;
	std::cout << "\nUnesite interval:" << std::endl;
	std::cin >> min >> max;
	for (int i = 0; i < x->m * x->n; i++)
	{

		if (max > min)
		{
			m1[i] = (rand() % (max - min + 1)) + min;
		}
		else
		{
			m1[i] = (rand() % (min - max + 1)) + max;
		}
		std::cout << std::right << std::setw(5) << std::fixed << std::setprecision(4) << m1[i] << " ";

	}
		std::cout << "\n";
	for (int i = 0; i < x->m * x->n; i++)
	{

		if (max > min)
		{
			m2[i] = (rand() % (max - min + 1)) + min;
		}
		else
		{
			m2[i] = (rand() % (min - max + 1)) + max;
		}
		
		std::cout << std::right << std::setw(5) << std::fixed << std::setprecision(4) << m2[i] << " ";

	}
	std::cout << "\nUnesi operator: +, -, *: ";
	std::cin >> op;
	switch (op)
	{
	case '+':
	{
		std::cout << "\n";
		for (int i = 0; i < x->m * x->n; i++)
		{
			nova[i] = m1[i] + m2[i];
			
			std::cout << std::right << std::setw(5) << std::fixed << std::setprecision(4) << nova[i] << " ";
		}
		
			
		
		break;
	}

	case '-':
	{
		std::cout << "\n";
		for (int i = 0; i < x->m * x->n; i++)
		{
			nova[i] = m1[i] - m2[i];
			
			std::cout << std::right << std::setw(5) << std::fixed << std::setprecision(4) <<nova[i] << " ";
		}
		
			
		
		break;
	}

	case '*':
	{
		std::cout << "\n";
		for (int i = 0; i < x->m * x->n; i++)
		{
			nova[i] = m1[i] * m2[i];
			
			std::cout << std::right << std::setw(5) << std::fixed << std::setprecision(4) << nova[i] << " ";
		}
		
			
		
		break;
	}
	default:
		break;
		
	}
}
void trans(mat* x)
{
	float** tran = new float* [x->m];
	for (int i = 0; i < x->m; i++)
	{
		tran[i] = new float[x->n];
	}
	for (int i = 0; i < x->m; ++i)
	{
		for (int j = 0; j < x->n; ++j)
		{
			tran[j][i] = x->mat[i][j];
		}
	}
	for (int i = 0; i < x->m; ++i)
	{
		for (int j = 0; j < x->n; ++j)
		{
			std::cout << " " << tran[i][j];
			if (j == x->n - 1)
				std::cout << std::endl;
		}
	}
	for (int i = 0; i < x->m; ++i)
	{
		delete[] tran[i];
	}
	delete[] tran;
}
void ispis(mat* x)
{
	int i, j;
	for (i = 0; i < x->m; ++i)
	{
		for (j = 0; j < x->n; ++j)
		{
			std::cout << std::right << std::setw(5) << std::fixed << std::setprecision(4) << x->mat[i][j] << " ";
		}
		std::cout<<"\n";
	}
}
int main()
{
	int i, j;
	mat m1;
	std::cout << "unesite dimenzije matrice:" << std::endl;
	std::cin >> m1.m >> m1.n;
	unos(&m1);
	//ispis(&m1);
	//raspon(&m1);
	//operacije(&m1);
	trans(&m1);
	system("pause");
}