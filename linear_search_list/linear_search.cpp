#include "linear_search.h"


linear_search::linear_search(void)
{
	
}
int linear_search::lsearch_first(std::list<int> mylist, int num)
{
	std::list<int>::iterator it1;
	for (int i = 0; i < mylist.size(); i++)
	{
		it1 = mylist.begin();
		std::advance(it1, i);
		if (num == *it1)
		{
			return i;
		}
	}
	return -1;
}
std::list<int> linear_search::lsearch_all(std::list<int> mylist, int num)
{
	std::list<int>::iterator it1;
	std::list<int> mylist_index;
	for (int i = 0; i < mylist.size(); i++)
	{
		it1 = mylist.begin();
		std::advance(it1, i);
		if (*it1 == num)
		{
			mylist_index.push_back(i);
		}
	}
	return mylist_index;
}
//std::cout << "&&&&,";