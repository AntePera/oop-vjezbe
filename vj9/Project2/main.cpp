#include"Animal.hpp"
#include"Counter.hpp"
int main()
{
	Counter count;
	Spiderman Peter_Parker;
	count.leg_adder(Peter_Parker);
	Eagle John_Wick;
	count.leg_adder(John_Wick);
	Bee Muhammad_Ali;
	count.leg_adder(Muhammad_Ali);
	std::cout << "Total legs: " << count.Leg_cnt<<std::endl;

}