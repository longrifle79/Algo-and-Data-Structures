#include <iostream>
#include "linear_search.h"

int main()
{
    std::list<int> my_list = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 6, 6, 6, 89, 4, 6 };
    int my_num = 6;
    linear_search l_search;
    std::list<int>::iterator mylist_it;

    int my_index = l_search.lsearch_first(my_list, my_num);

    if (my_index < 0)
    {
        std::cout << "number not found in list" << std::endl;
    }
    else
    {
        std::cout << "the number: " << my_num << " is at index: " << my_index << std::endl;
    }
    std::cout << "****************************" << std::endl;
   
    std::list<int> my_list_index = l_search.lsearch_all(my_list, my_num);
    if (!my_list_index.size() == 0)
    {
        std::cout << "all of the locations of " << my_num << " are: ";

        for (int i = 0; i < my_list_index.size(); i++)
        {
            mylist_it = my_list_index.begin();
            std::advance(mylist_it, i);
            std::cout << " " << *mylist_it;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "number not found in list" << std::endl;
    }
}
