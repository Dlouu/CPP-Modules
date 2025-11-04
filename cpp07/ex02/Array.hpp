#pragma once

#include <iostream>
#include <exception>

#define RED "\033[0;31m"
#define PUR "\033[0;34m"
#define GRE "\033[0;32m"
#define YEL "\033[0;33m"
#define MAG "\033[0;35m"
#define BLU "\033[0;36m"
#define END "\033[m"

template <typename T>
class Array {

	private:
		T*		_elements;
		size_t	_size;

	public:	
		Array( void ) : _size(0) {
			_elements = new T[_size];
		}

		Array( const unsigned int n ) : _size(n) {
			_elements = new T[_size];
		}

		~Array( void ) {
			delete[] _elements;
			_size = 0;
		}

		Array( Array const& other ) {
			_size = other._size;
			_elements = new T[_size];
			for (size_t i = 0; i < other._size; i++) {
				_elements[i] = other._elements[i];
			}
		}

		Array& operator=( Array const& other ) {
			if (this != &other) {
				_size = other._size;
				_elements = new T[_size];
				for (size_t i = 0; i < other._size; i++) {
					_elements[i] = other._elements[i];
				}
			}
			return (*this);
		}

		T&	operator[]( unsigned int line ) const {
			if (line >= _size)
				throw std::out_of_range("index out of range\n");
			return _elements[line];
		}

		unsigned int	size() const {
			return _size;
		}
};

template <typename T>
void	printArray( const Array<T> &array, std::string name ) {
	unsigned int	i = 0;
	std::cout << name << ": ";
	while (i < array.size()) {
		std::cout << "[" << array[i] << "]";
		i++;
	}
	std::cout << std::endl;
}