#include"Header.hpp"
void Board::display()
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << mat[i][j];
		}
		cout << endl;
	}
}
void Board::draw_char(point p, char ch)
{
	int m = p.x;
	int n = p.y;
	mat[m][n] = ch;
}
void Board::draw_up_line(point p, char ch)
{
	int m = p.x;
	int n = p.y;
	while (m > 0)
	{
		mat[m][n] = ch;
		m--;
	}
}

void Board::draw_line(point p1,point p2, char ch)
{
    int x1 = p1.x;
    int x2 = p2.x;
    int y1 = p1.y;
    int y2 = p2.y;
    if (x1 == x2)
    {
        if (y1 > y2)
        {
            int temp = y1;
            y1 = y2;
            y2 = temp;
        }
        while (y1 <= y2)
        {
            mat[y1][x1] = ch;
            y1++;
        }
    }
    else if (y1 == y2)
    {
        if (x1 > x2)
        {
            int temp = x1;
            x1 = x2;
            x2 = temp;
        }
        while (x1 <= x2)
        {
            mat[y1][x1] = ch;
            x1++;
        }
    }
    else
    {
        if (x1 > x2 && y1 > y2)
        {
            int temp = x1;
            x1 = x2;
            x2 = temp;
            temp = y1;
            y1 = y2;
            y2 = temp;
        }
        if (x1 <= x2 && y1 <= y2)
        {
            while (x1 <= x2 && y1 <= y2)
            {
                mat[y1][x1] = ch;
                x1++;
                y1++;
            }
        }
        else if (x1 <= x2 && y2 <= y1)
        {
            while (x1 <= x2 && y2 <= y1)
            {
                mat[y1][x1] = ch;
                x1++;
                y1--;
            }
        }
        else if (x2 <= x1 && y1 <= y2)
        {
            while (x2 <= x1 && y1 <= y2)
            {
                mat[y1][x1] = ch;
                x1--;
                y1++;
            }
        }
    }
}