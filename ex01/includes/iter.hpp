#pragma once

# define STEELBLUE3 "\033[38;5;81m"
# define STEELBLUE4 "\033[38;5;68m"
# define YELLOW2 "\033[38;5;190m"
# define YELLOW3 "\033[38;5;148m"
# define YELLOW4 "\033[38;5;184m"
# define SPRINGGREEN1 "\033[38;5;48m"
# define SPRINGGREEN2 "\033[38;5;42m"
# define SPRINGGREEN3 "\033[38;5;47m"
# define SPRINGGREEN4 "\033[38;5;35m"
# define SPRINGGREEN5 "\033[38;5;41m"
# define SPRINGGREEN6 "\033[38;5;29m"
# define RESET "\033[0m"

#include <iostream>

template<typename T>
void	iter(const T array[], int size, void (*f)(const T &))
{
	for (int i = 0; i < size; i++)
		f(array[i]);
}