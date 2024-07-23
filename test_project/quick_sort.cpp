#include "quick_sort.h"

quick_sort::quick_sort(void)
{

}
void quick_sort::q_sort(std::vector<int>& vec)
{
	int vec_legth = vec.size();
	quicksort_recursion(vec, 0, vec_legth - 1);
}

void quick_sort::quicksort_recursion(std::vector<int>& vec, int low, int high)
{
	if (low < high)
	{
		int pivot_index = partition(vec, low, high);
		quicksort_recursion(vec, low, pivot_index - 1);
		quicksort_recursion(vec, pivot_index + 1, high);
	}
}

int quick_sort::partition(std::vector<int>& vec, int low, int high)
{
	int pivot_value = vec[high];
	int i = low;

	for (int j = low; j < high; j++)
	{
		if (vec[j] <= pivot_value)
		{
			std::swap(vec[i], vec[j]);
			i++;
		}
	}
	std::swap(vec[i], vec[high]);
	return i;
}
