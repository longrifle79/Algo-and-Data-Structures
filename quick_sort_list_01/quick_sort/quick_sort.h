#pragma once
#define __QUICK_SORT_H__
#include <list>
#include <algorithm>
#include <iterator>
class quick_sort
{
	public:
		quick_sort();
		void	q_sort(std::list<int>& vec);
	private:
		void	quicksort_recursion(std::list<int>& mylist, int low, int high);
		int		partition(std::list<int>& mylist, int low, int high);
};





