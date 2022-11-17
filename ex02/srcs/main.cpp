#include "Array.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)	if (argc != 2)
	{
		std::cout << "Usage : ./iter <number between 1 and 5" << argv[1] << ">" << std::endl;
		return 0;
	}
	std::string arg(argv[1]);
	if (arg == "1")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing creating a array with default constructor" << RESET << std::endl;

		std::cout << STEELBLUE4 << "Displaying an array of int : " << RESET << std::endl;
		Array<int> a;
		std::cout << a << std::endl;

		std::cout << STEELBLUE4 << "Displaying an array of string : " << RESET << std::endl;
		Array<std::string> b;
		std::cout << b << std::endl;
	}
	if (arg == "2")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing creating a array with param1 constructor" << RESET << std::endl;

		std::cout << STEELBLUE4 << "Displaying an array of int -> " << RESET << std::endl;
		Array<int> a(3);
		std::cout << a << std::endl;

		std::cout << STEELBLUE4 << "Displaying an array of char -> " << RESET << std::endl;
		Array<char> b(5);
		std::cout << b << std::endl;

		std::cout << STEELBLUE4 << "Displaying an array of string -> " << RESET << std::endl;
		Array<std::string> c(2);
		std::cout << c << std::endl;

		std::cout << STEELBLUE4 << "Displaying an array of float -> " << RESET << std::endl;
		Array<int> d(3);
		std::cout << d << std::endl;
	}
	if (arg == "3")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing error handling..." << RESET << std::endl;

		try
		{
			std::cout << STEELBLUE4 << "Trying to set a size < 0 " << RESET << std::endl;
			Array<int> a(-1);
			std::cout << STEELBLUE4 << "YOU SHOULD NOT SEE THIS" << RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	if (arg == "4")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing error handling..." << RESET << std::endl;

		try
		{
			std::cout << STEELBLUE4 << "Trying to set a size > INT_MAX " << RESET << std::endl;
			Array<int> a(2147483648);
			std::cout << STEELBLUE4 << "YOU SHOULD NOT SEE THIS" << RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	if (arg == "5")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing access to an element through the operator [] for reading..." << RESET << std::endl;
		try
		{
			std::cout << STEELBLUE4 << "Trying to set a size > INT_MAX " << RESET << std::endl;
			Array<int> a(3);
			std::cout << STEELBLUE4 << "Displaying the content of object Array a -->" << RESET << std::endl;
			std::cout << a << std::endl;
			std::cout << STEELBLUE4 << "Trying to print a[0] using [] operator overload --> " << RESET << std::endl;
			std::cout << a[0] << std::endl;
			std::cout << STEELBLUE4 << "Trying to print a[5] using [] operator overload --> " << RESET << std::endl;
			std::cout << a[5] << std::endl;
			std::cout << STEELBLUE4 << "YOU SHOULD NOT SEE THIS" << RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	if (arg == "6")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing access to an element through the operator [] for writing..." << RESET << std::endl;
		try
		{
			std::cout << STEELBLUE4 << "Trying to set a size > INT_MAX " << RESET << std::endl;
			Array<int> a(3);
			std::cout << STEELBLUE4 << "Displaying the content of object Array a -->" << RESET << std::endl;
			std::cout << a << std::endl;
			std::cout << STEELBLUE4 << "Trying to set a different value for a[0] using [] operator overload --> " << RESET << std::endl;
            a[0] = 3;
            std::cout << a << std::endl;
			std::cout << STEELBLUE4 << "Trying to set a different value for a[5] using [] operator overload --> " << RESET << std::endl;
            a[5] = 3;
			std::cout << STEELBLUE4 << "YOU SHOULD NOT SEE THIS" << RESET << std::endl;
            a[-1] = 3;
			std::cout << STEELBLUE4 << "YOU SHOULD NOT SEE THIS" << RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
    if (arg == "7")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing copy constructor..." << RESET << std::endl;
		try
		{
            Array<int> a(3);
            a[0] = 1;
            a[1] = 42;
            a[2] = 6;
            std::cout << a << std::endl;
            std::cout  << STEELBLUE4 << "Creating a copy of a through copy constructor" << RESET << std::endl;
            Array<int> b(a);
            std::cout << b << std::endl;
            std::cout  << STEELBLUE4 << "Changing the value of a[0]. This should not affect b[0]." << RESET << std::endl;
            a[0] = 0;
            std::cout  << STEELBLUE4 << "Printing a" << RESET << std::endl;
            std::cout << a << std::endl;
            std::cout  << STEELBLUE4 << "Printing b" << RESET << std::endl;
            std::cout << b << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
    if (arg == "8")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing assignement operator..." << RESET << std::endl;
		try
		{
            Array<int> a(3);
            a[0] = 1;
            a[1] = 42;
            a[2] = 6;
            std::cout  << ORANGERED1 << "Printing a" << RESET << std::endl;
            std::cout << a << std::endl;
            std::cout  << STEELBLUE4 << "Creating a copy of a through copy constructor" << RESET << std::endl;
            Array<int> b(7);
            std::cout  << CHARTREUSE4 << "Printing b" << RESET << std::endl;
            std::cout << b << std::endl;
            std::cout  << STEELBLUE4 << "Copying b into a. a should take b values." << RESET << std::endl;
            a = b;
            std::cout  << ORANGERED1 << "Printing a" << RESET << std::endl;
            std::cout << a << std::endl;
            std::cout  << STEELBLUE4 << "Changing the value of b[0]. This should not affect a[0]." << RESET << std::endl;
            b[0] = 5;
            std::cout  << CHARTREUSE4 << "Printing b" << RESET << std::endl;
            std::cout << b << std::endl;
            std::cout  << ORANGERED1 << "Printing a" << RESET << std::endl;
            std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}