#include <iostream>
#include "linear_search.h"


int main()
{
    linear_search mysearch;
    int my_num = 4;
    std::vector<int> my_vector = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int my_num_index = mysearch.lsearch(my_vector, my_num);

    if (mysearch.lsearch(my_vector, my_num) < 0)
    {
        std::cout << "number not found" << std::endl;
    }
    else
    {
        std::cout << "number " << my_num << " found at index: " << my_num_index << std::endl;
    }
}
