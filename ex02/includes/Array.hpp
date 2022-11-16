#pragma once

#include <iostream>
#include "colors.hpp"
#include <stdlib>


// define a clas array of type T the type is not know yet and will 
// be defined by instantiation of object of class array<T> from main.
template<typename T>
class Array
{
	private:
		int size_;
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
		, array_(new T(size_))
		{
			if (size_ < 0 && size_ > 2147483647)
			{
				std::cout << "Invalid int" << std::endl;
				exit(-1);
			}
		}

		// copy contructor
		Array(const Array<T> & ori)
		: size_(ori.size_)
		, array_(new T(size_))
		{}

		// destructor
		~Array(void)
		{
			if (size_ > 0)
				delete [] array_;
		}

		// assignement operator (delete and replace)
		Array & operator=(const Array & rhs)
		{
			if (this != &rhs)
			{
				if (size_ > 0)
					delete [] array_;
				size_ = rhs.size();
				array_ = new T[size_];
				for (int i = 0; i < size_; i++)
					array_[i] = rhs[i];
			}
			return *this;
		}

		int	getSize() const
		{
			return size_;
		}

		T	getArray(int i) const
		{
			if (i >= 0 && i <= size_)
				return array_[i];
			return 0;
		}
};

template<typename T>
std::ostream &	operator<<(std::ostream & o, const Array<T> & rhs)
{
	if (rhs.getSize() == 0)
		std::cout << "Nothing to display." << std::endl;
	// o << "Displaying an array of " << <T> << std::endl;
	for (int i = 0; i < rhs.getSize() ; i++)
		o << rhs.getArray(i) << std::endl;
	return o;
}