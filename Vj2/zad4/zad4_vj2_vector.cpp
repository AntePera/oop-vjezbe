#include "vector.hpp"

void MyVector::vector_new(size_t sz)
{
    arr = new int[sz];
	capacity = size * 2;
}
void MyVector::vector_delete()
{
    delete[] arr;
}
void MyVector::vector_push_back(int n)//dodaj jos jedan 
{
	if (size == capacity)
	{
		int* narr1 = arr;
		arr = new int[size *=2];
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = narr1[i];
		}

		delete[] narr1;
	}
	arr[size] = n;
	size++;
}
void MyVector::vector_pop_back() //deletaj zadnji
{
	for (size_t i = 0; i < size; i++)
	{
		arr[size - 1] = NULL;
	}
	size -= 1;
}
int& MyVector::vector_front() //prvi clan 
{
	return arr[0];
}
int& MyVector::vector_back()//zadmji clan
{
	return arr[size - 1];
}
size_t MyVector::vector_size()
{
	return size;
}
size_t MyVector::vector_capacity()
{
	return capacity;
}

void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
