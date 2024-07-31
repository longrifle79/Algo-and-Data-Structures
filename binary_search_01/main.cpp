#include <iostream>
#include "binary_search/binary_search.h"


int main()
{
    binary_search bin_search;
    int my_num = 2;
    int sorted[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
    int index = bin_search.b_search(sorted, my_num, 0, 12);
    if (index < 0)
    {
        std::cout << my_num << " was not found in the list!" << std::endl;
    }
    else
    {
        std::cout << "index of  " << my_num << " is " << index << std::endl;
    }    
    return 0;
}

