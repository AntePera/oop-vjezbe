#pragma once
#include <iostream>
#include <string>

template<typename T>
void sort(T arr[], int n);
template<>
void sort<char>(char arr[], int n);

#include "implement.cpp"
