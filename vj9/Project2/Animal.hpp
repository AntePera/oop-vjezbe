#pragma once
#include <iostream>
#include <string>
class Animal
{
	public:
		virtual std::string name() = 0;
		virtual std::string species() = 0;
		virtual int legs() = 0;
};
class Insect :public Animal
{
	public:
		std::string species();
		
};
class Spider :public Animal
{
	public:
		std::string species();

};
class Bird :public Animal
{
	public:
		std::string species();

};
class Bee :public Insect
{
	public:
		std::string name();
		int legs();

};
class Ladybug :public Insect
{
	public:
		std::string name();
		int legs();

};
class Spiderman :public Spider
{
	public:
		std::string name();
		int legs();

};
class Black_Widow :public Spider
{
	public:
		std::string name();
		int legs();

};
class Crow :public Bird
{
	public:
		std::string name();
		int legs();

};
class Hawk :public Bird
{
	public:
		std::string name();
		int legs();

};
class Eagle :public Insect
{
	public:
		std::string name();
		int legs();

};