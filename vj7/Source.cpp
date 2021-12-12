#include "Header.hpp"
int main()
{
	Board b(10, 10);
	point p1(2, 2);
	point p2(8, 8);
	point p3(5, 5);
	b.draw_char(p1, 'x');
	b.draw_up_line(p1, 'x');
	b.draw_line(p1, p2, 'x');
	b.display();

	return 0;
}
