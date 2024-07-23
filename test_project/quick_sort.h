#pragma once
#define __QUICK_SORT_H__

#include <vector>
class quick_sort
{
public:
	quick_sort(void);
	void q_sort(std::vector<int>& vec);
private:
	void quicksort_recursion(std::vector<int>& vec, int low, int high);
	int partition(std::vector<int>& vec, int low, int high);
};
