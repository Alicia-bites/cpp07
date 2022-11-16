#pragma once

#include <iostream>

// Compares the two values passed in its arguments and returns the greatest one.
// If the two of them are equal, then it returns the second one.
template<typename T> 
const T & max(const T & A, const T & B) 
{ 
	return A > B ? A : B; 
}

// Compares the two values passed in its arguments and returns the smallest
//one. If the two of them are equal, then it returns the second one
template<typename T> 
const T & min(const T & A, const T & B) 
{ 
	return A < B ? A : B; 
}

// Swaps the values of two given arguments. Does not return anything
template<typename T> 
void	swap(T & A, T & B) 
{
	T temp = A;
	A = B;
	B = temp;
}