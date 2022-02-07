#pragma once
#include<iostream>
template<typename T>
class Stack
{
public:
	T m_element;
	Stack* m_next;

	Stack();
	Stack(T element);

	int push(T element);
	T pop();
	bool isEmpty();
};
#include"Stack.cpp"