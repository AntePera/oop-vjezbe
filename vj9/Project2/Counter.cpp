#include "Counter.hpp"
void Counter::leg_adder(Animal& animal)
{
	std::cout << "Added: " << animal.name() << std::endl;
	std::cout<<"Species: "<<animal.species()<< std::endl;
	Leg_cnt += animal.legs();
}