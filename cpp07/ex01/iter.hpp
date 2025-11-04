#pragma once

#define PUR "\033[0;34m"
#define MAG "\033[0;35m"
#define BLU "\033[0;36m"
#define END "\033[m"

#include <iostream>
#include <string>

template <typename T, typename F>
void iter( T& array, const size_t len, F funct ) {
	size_t i = 0;
	while (i < len) {
		funct(array[i]);
		i++;
	}
}

template <typename T>
void	printArray( const T& line ) {
	std::cout << "[" << line << "]";
}

template <typename T>
void	plusPlus( T& line ) {
	line++;
}
