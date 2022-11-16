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

		std::cout << "Displaying an array of int : " << std::endl;
		Array<int> a;
		std::cout << a << std::endl;

		std::cout << "Displaying an array of string : " << std::endl;
		Array<std::string> b;
		std::cout << b << std::endl;
	}
	if (arg == "2")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing creating a array with param1 constructor" << RESET << std::endl;

		std::cout << "Displaying an array of int -> " << std::endl;
		Array<int> a(3);
		std::cout << a << std::endl;

		std::cout << "Displaying an array of char -> " << std::endl;
		Array<char> b(5);
		std::cout << b << std::endl;

		std::cout << "Displaying an array of string -> " << std::endl;
		Array<std::string> c(2);
		std::cout << c << std::endl;

		std::cout << "Displaying an array of float -> " << std::endl;
		Array<int> d(3);
		std::cout << d << std::endl;
	}
	if (arg == "3")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing error handling..." << RESET << std::endl;

		try
		{
			std::cout << "Trying to set a size < 0 " << std::endl;
			Array<int> a(-1);
			std::cout << "YOU SHOULD NOT SEE THIS" << std::endl;
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
			std::cout << "Trying to set a size > INT_MAX " << std::endl;
			Array<int> a(2147483648);
			std::cout << "YOU SHOULD NOT SEE THIS" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	if (arg == "5")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing error handling..." << RESET << std::endl;
		try
		{
			std::cout << "Trying to set a size > INT_MAX " << std::endl;
			Array<int> a(3);
			std::cout << "Displaying the content of object Array a -->" << std::endl;
			std::cout << a << std::endl;
			std::cout << "Trying to print a[0] using [] operator overload --> " << std::endl;
			std::cout << a[0] << std::endl;
			std::cout << "Trying to print a[5] using [] operator overload --> " << std::endl;
			std::cout << a[5] << std::endl;
			std::cout << "YOU SHOULD NOT SEE THIS" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}