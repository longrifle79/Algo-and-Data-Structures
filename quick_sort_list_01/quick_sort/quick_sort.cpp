#include "quick_sort.h"

quick_sort::quick_sort(void)
{

}
void quick_sort::q_sort(std::list<int> &mylist)
{
	size_t list_length = mylist.size();
	quicksort_recursion(mylist, 0, list_length - 1);
}

void quick_sort::quicksort_recursion(std::list<int>& mylist, int low, int high)
{
	if (low < high)
	{
		int pivot_index = partition(mylist, low, high);
		quicksort_recursion(mylist, low, pivot_index - 1);
		quicksort_recursion(mylist, pivot_index + 1, high);
	}
}

int quick_sort::partition(std::list<int>& mylist, int low, int high)
{
	std::list<int>::iterator it_j;
	std::list<int>::iterator it_i; 
	it_j = std::next(mylist.begin(), high);
	int pivot_value = *it_j;
	int i = low;

	for (int j = low; j < high; j++)
	{
		it_j = std::next(mylist.begin(), j);
		if (*it_j <= pivot_value)
		{
			it_i = std::next(mylist.begin(), i);
			std::iter_swap(it_i, it_j);
			i++;
		}
	}
	it_j = std::next(mylist.begin(), high);
	it_i = std::next(mylist.begin(), i);
	std::iter_swap(it_i, it_j);
	return i;
}
