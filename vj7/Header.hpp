#include<iostream>
using namespace std;
struct point
{
	double x;
	double y;
	point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
};
class Board
{
public:
		
	int x, y;
	char edge;
	char** mat;
		Board()
		{
			
			x = 2;
			y = 3;
			
		}
		Board(int x, int y)
		{
				edge = 'o';
				this->x = x;
				this->y = x;
				mat = new char* [this->x];
				for (int i = 0; i < this->x; i++)
					mat[i] = new char[y];
				for (int i = 0; i < this->x; i++)
				{
					for (int j = 0; j < this->y; j++)
					{
						if ((i == 0) || (j == 0) || (i == this->x - 1) || (j == this->y - 1))
							mat[i][j] = edge;
						else
							mat[i][j] = ' ';
					}
				}
		}
		Board(const Board& other)
		{
			memcpy(this, &other, sizeof(Board));
		}
		Board(Board&& other)
		{
			x = other.x;
			y = other.y;

			other.x = 0;
			other.y = 0;
		}
		~Board()
		{
			for (int i = 0; i < x; ++i)
			{
				delete mat[i];
			}
			delete mat;
		}
		void draw_char(point p, char ch);
		void draw_up_line(point p, char ch);
		void draw_line(point p1,point p2, char ch);
		void display();
		
};


