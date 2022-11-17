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
# define ORANGERED1 "\033[38;5;202m"
# define RED1 "\033[38;5;196m"
# define CHARTREUSE4 "\033[38;5;70m"
# define RESET "\033[0m"

#include <iostream>
#include <stdlib.h>
#include <climits>

// define a clas array of type T the type is not know yet and will 
// be defined by instantiation of object of class array<T> from main.
template<typename T>
class Array
{
	private:
		int	size_;
		T	*array_;
	public:
		// default constructor
		Array<T>(void)
		: size_(0)
		, array_(NULL)
		{}

		// constructor param1
		Array<T>(unsigned int n)
		: size_(n)
		{
			if (size_ < 0 || size_ > INT_MAX)
				throw std::overflow_error("!!! Invalid size !!!\nPlease choose an integer between 0 and 2147483647");
			array_ = new T[size_];
		}

		// copy contructor
		Array<T>(const Array<T> & ori)
		: size_(ori.size_)
		{
			array_ = new T[size_];
			for (int i = 0; i < size_; i++)
				array_[i] = ori.array_[i];
		}

		// destructor
		~Array<T>(void)
		{
			if (size_ > 0)
				delete [] array_;
		}

		// assignement operator (delete and replace)
		Array<T> & operator=(const Array<T> & rhs)
		{
			if (this != &rhs)
			{
				if (size_ != 0)
					delete [] array_;
				size_ = rhs.size();
				array_ = new T[size_];
				for (int i = 0; i < size_; i++)
					array_[i] = rhs.array_[i];
			}
			return *this;
		}

		T &	operator[](const int i) const
		{
			if (i < 0 || i >= size_)
				throw std::overflow_error("!!! Invalid index !!!\nPlease choose an integer between 0 and the size of the array.");
			return array_[i];
		}

		void	displayInfo(std::ostream & o) const
		{
			o << "Number of elements in array : "
				<< ORANGERED1 << size_ << RESET << std::endl;
			if (size_ == 0)
				o << RED1 << "Nothing to display" << RESET << std::endl;
			for (int i = 0; i < size_; i++)
				o << "array[" << SPRINGGREEN3 << i << RESET << "] = "
					<< array_[i] << std::endl;
			o << "----------------------------------------------";
		}

		int	size() const
		{
			return size_;
		}
};

template<typename T>
std::ostream &	operator<<(std::ostream & o, const Array<T> & rhs)
{
	rhs.displayInfo(o);
	return o;
}