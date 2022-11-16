#include "whatever.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;

	std::string	arg(argv[1]);
	if (arg == "1")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Tests from subject..." << RESET << std::endl;
		int a = 2;
		int b = 3;
	
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
		std::string c = "chaine1";
		std::string d = "chaine2";
	
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	}
	if (arg  == "2")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing with custom class 'Test' " << RESET << std::endl;

		Test a(2);
		Test b(3);

		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	return 0;
}

// OUTPUT SHOULD BE ---------------------------------------------------

// a = 3, b = 2
// min(a, b) = 2
// max(a, b) = 3
// c = chaine2, d = chaine1
// min(c, d) = chaine1
// max(c, d) = chaine2