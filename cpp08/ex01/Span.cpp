#include "Span.hpp"

Span::Span( void ) : _n(0) {}

Span::Span( unsigned int n ) : _n(n) {}

Span::Span( const Span& other ) : _n(other._n), _numbers(other._numbers) {}

Span::~Span() {}

Span&	Span::operator=( const Span& other ) {
	if (this != &other) {
		_n = other._n;
		_numbers = other._numbers;
	}
	return *this;
}

std::string	Span::spanIsFull( void ) const {
	std::stringstream ss;
	ss << "Span is already full, max: " << this->_n;
	std::string str = ss.str();
	return (str);
}

std::string	Span::spanIsNotBigEnough( void ) const {
	return ("Not enough numbers to find a span (you need at least 2)");
}

void	Span::addNumber( int number ) {
	if (_numbers.size() >= _n) {
		throw std::runtime_error(spanIsFull());
	}
	_numbers.push_back(number);
}

void	Span::addNumber( std::vector<int> numbers ) {
	if (_numbers.size() + numbers.size() > _n) {
		throw std::runtime_error(spanIsFull());
	}
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		_numbers.push_back(*it);
	}
}


void	Span::addNumbers( int n ) {
	std::srand(std::time(0));
	if (_numbers.size() + n > _n) {
		throw std::runtime_error(spanIsFull());
	}
	for (int i = 0; i < n; i++)
		_numbers.push_back(rand() % 99);
}

int	Span::shortestSpan() const {
	if (_numbers.size() < 2) {
		throw std::runtime_error(spanIsNotBigEnough());
	}

	std::vector<int> sortedNumbers = _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int	span = 0;

	int min = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedNumbers.size(); ++i) {
		span = sortedNumbers[i] - sortedNumbers[i - 1];
		if (span < min) {
			min = span;
		}
	}

	return min;
}

int	Span::longestSpan() const {
	if (_numbers.size() < 2) {
		throw std::runtime_error(spanIsNotBigEnough());
	}

	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());

	return max - min;
}

void	Span::printSpan() const {
	std::cout << BLU "    Span: " YEL;
	for (std::vector<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); it++) {
		std::cout << "[" END << *it << YEL "]";
	}
	std::cout << YEL " (size: " << _n << ")";
	std::cout << END << std::endl;
}
