#include "binary_search.h"
//#define PRINT_DATA


int global_call_number = 0;
binary_search::binary_search(void) {}

int binary_search::bsearch(std::list<int> mylist, int num, int start, int last)
{
	#ifdef PRINT_DATA
		display_data(mylist, num, start, last);
	#endif

	if (start > last)
	{
		return -1;
	}

	int mid_index = start + (last - start) / 2;
	std::list<int>::iterator it1;
	it1 = mylist.begin();
	std::advance(it1, last);
	std::cout << "****  it1: " << *it1 << std::endl;

	if (num > *it1)
	{
		return -1;
	}

	it1 = mylist.begin();
	std::advance(it1, mid_index);

	if (*it1 == num)
	{
		return mid_index;
	}
	else if (*it1 > num)
	{
		return bsearch(mylist, num, start, mid_index - 1); // start);
	}
	else
	{
		return bsearch(mylist, num, mid_index + 1, last);
	}
}


void binary_search::display_data(std::list<int> mylist, int num, int start, int last)
{
	global_call_number++;
	std::cout << "*****************************************" << std::endl;
	std::cout << "global_call_number: " << global_call_number << std::endl << std::endl;

	int mid_index = start + (last - start) / 2;
	// create iterator
	std::list<int>::iterator it1;
	it1 = mylist.begin();
	std::cout << "mylist: ";
	for (int i = 0; i < mylist.size(); i++)
	{
		it1 = mylist.begin();
		std::advance(it1, i);
		std::cout << * it1 << ",   ";
	}
	std::cout << std::endl;
	std::cout << "index:  ";
	for (int i = 0; i < mylist.size(); i++)
	{
		std::cout << i << ",   ";
	}
	std::cout << std::endl;
	// display function parameters
	std::cout << "mid_index (start+(last-start)/2: " << mid_index << std::endl;
	std::cout << "start_index: " << start << std::endl;
	std::cout << "last_index: " << last << std::endl << std::endl;
	

	// set values for parameter indexes
	it1 = mylist.begin();
	std::advance(it1, mid_index);
	int mid_value = *it1;

	it1 = mylist.begin();
	std::advance(it1, start);
	int start_value = *it1;

	it1 = mylist.begin();
	std::advance(it1, last);
	int last_value = *it1;

	// display values for parameter indexes
	std::cout << "mid_value: " << mid_value << std::endl;
	std::cout << "start_value: " << start_value << std::endl;
	std::cout << "last_value: " << last_value << std::endl;
	//*******************************************************************

}




