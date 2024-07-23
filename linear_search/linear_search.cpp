#include "linear_search.h"

linear_search::linear_search(void)
{

}
int linear_search::lsearch(std::vector<int> myvec, int num)
{
	for (int i = 0; i < myvec.size(); i++)
	{
		if (myvec[i] == num)
		{
			return i;
		}
	}
	return -1;
}

