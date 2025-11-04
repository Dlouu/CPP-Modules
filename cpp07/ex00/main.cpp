#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	std::cout << BLU;
	std::cout << "swap:" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "- - - - - - - - - - - -" << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << PUR;
	std::cout << "swap:" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "- - - - - - - - - - - -" << std::endl;

	unsigned int	e = 1337;
	unsigned int	f = 1337;

	std::cout << MAG;
	std::cout << "swap:" << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << END << std::endl;

	return 0;
}
