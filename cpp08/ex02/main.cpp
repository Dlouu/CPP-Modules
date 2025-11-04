#include "MutantStack.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{
	std::cout << YEL "=== MUTANT ===" END << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << MAG " top: " END << mstack.top() << std::endl;
		mstack.pop();
		std::cout << BLU "size: " END << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		int i = 0;
		while (it != ite)
		{
			std::cout << " [" << i << "]: " << *it << std::endl;
			++it;
			i++;
		}
		std::stack<int> s(mstack);
	}
	std::cout << YEL "\n=== LIST ===" END << std::endl;
	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << MAG " top: " END << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << BLU "size: " END << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		int i = 0;
		while (it != ite)
		{
			std::cout << " [" << i << "]: " << *it << std::endl;
			++it;
			i++;
		}
		std::list<int> s(mlist);
	}
		std::cout << YEL "\n=== VECTOR ===" END << std::endl;
	{
		std::vector<int> vec;
		vec.push_back(5);
		vec.push_back(17);
		std::cout << MAG " top: " END << vec.back() << std::endl;
		vec.pop_back();
		std::cout << BLU "size: " END << vec.size() << std::endl;
		vec.push_back(3);
		vec.push_back(5);
		vec.push_back(737);
		//[...]
		vec.push_back(0);
		std::vector<int>::iterator it = vec.begin();
		std::vector<int>::iterator ite = vec.end();
		++it;
		--it;
		int i = 0;
		while (it != ite)
		{
			std::cout << " [" << i << "]: " << *it << std::endl;
			++it;
			i++;
		}
		std::vector<int> s(vec);
	}
	return 0;
}