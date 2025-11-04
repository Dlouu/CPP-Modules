#pragma once

#define RED "\033[31m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define END "\033[0m"

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
	MutantStack( void ) {};
	~MutantStack( void ) {};
	MutantStack( const MutantStack& other ) : std::stack<T>(other) {};

	MutantStack&	operator=( const MutantStack& other ) {
		this->c = other->c;
		return *this;
	};

	typedef typename	std::stack<T>::container_type::iterator	iterator;

	iterator	begin()	{ return this->c.begin();	}
	iterator	end()	{ return this->c.end();		}

 private:
};