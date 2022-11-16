#include "whatever.hpp"

Test::Test()
: number_(0)
{}

Test::Test(int number)
: number_(number)
{}

Test::Test(const Test & ori)
: number_ (ori.number_)
{}

Test::~Test()
{}

// OPERATOR OVERLOADS ---------------------------------------------------
Test &	Test::operator=(const Test & rhs)
{
	if (this != &rhs)
		number_ = rhs.number_;
	return *this;
}

std::ostream &	operator<<(std::ostream& o, const Test & rhs)
{
	o << rhs.getNumber();
	return o;
}

bool	Test::operator==(const Test & rhs) const
{
	return number_ == rhs.number_ ? 1 : 0;
}

bool	Test::operator<=(const Test & rhs) const
{
	return number_ <= rhs.number_ ? 1 : 0;
}

bool	Test::operator>=(const Test & rhs) const
{
	return number_ >= rhs.number_ ? 1 : 0;
}

bool	Test::operator<(const Test & rhs) const
{
	return number_ < rhs.number_ ? 1 : 0;
}

bool	Test::operator>(const Test & rhs) const
{
	return number_ > rhs.number_ ? 1 : 0;
}

// MEMBER FUNCTIONS -----------------------------------------------------

// -- GETTERS -----------------------------------------------------------
int	Test::getNumber() const
{
	return number_;
}