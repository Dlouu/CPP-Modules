#pragma once

#define RED "\033[31m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define END "\033[0m"

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <sstream>

class Span {
 public:
	Span( void );
	Span( unsigned int n );
	Span( const Span& other );
	~Span( void );

	Span&		operator=( const Span& other );

	void		addNumber( int number );
	void		addNumber( std::vector<int>	numbers );
	void		addNumbers( int n );
	int			shortestSpan( void ) const;
	int			longestSpan( void ) const;
	void		printSpan( void ) const;
	std::string	spanIsFull( void ) const;
	std::string	spanIsNotBigEnough( void ) const;

 private:
	unsigned int		_n;
	std::vector<int>	_numbers;
};
