#pragma once

#include "colors.hpp"

#include <iostream>

template<typename T>
void	iter(const T array[], int size, void (*f)(const T &))
{
	for (int i = 0; i < size; i++)
		f(array[i]);
}