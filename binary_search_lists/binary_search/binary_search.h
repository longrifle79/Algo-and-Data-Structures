#ifndef __BINARY_SEARCH_H__
#define __BINARY_SEARCH_H__
#include <iostream>
#include <list>
#include <algorithm>

class binary_search
{
	public:
		binary_search(void);
		int bsearch(std::list<int>, int, int, int);
		void display_data(std::list<int>, int, int, int);
	private:
};

#endif

