#pragma once

#define PUR "\033[0;34m"
#define MAG "\033[0;35m"
#define BLU "\033[0;36m"
#define END "\033[m"

#include <iostream>
#include <string>

template <typename T>
void swap( T& a, T& b ) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min( T a, T b ) {
	if (a < b)
		return a;
	return b;
}

template <typename T>
T max( T a, T b ) {
	if (a > b)
		return a;
	return b;
}
