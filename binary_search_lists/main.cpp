#include <iostream>
#include "binary_search.h"

void test_all_values(std::list<int> mylist);

int main()
{
    //std::list<int> my_list = { 0, 3, 6, 9, 12, 15, 18, 21, 24 };// , 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22
	//std::list<int> my_list = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };// , 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22
    std::list<int> my_list = {  0   , 6     , 11    , 18    , 27    , 38    , 51    , 66    , 83    , 102, 
                                123 , 146   , 171   , 198   , 227   , 258   , 291   , 326   , 
                                363 , 402   , 443   , 486   , 531   , 578   , 627   , 678   , 
                                731 , 786   , 843   , 902   , 963   , 1026  , 1091  , 1158  , 
                                1227, 1298  , 1371  , 1446  , 1523  , 1602  , 1683  , 
                                1766, 1851  , 1938  , 2027  , 2118  , 2211  , 2306  , 
                                2403, 2502  , 2603  , 2706  , 2811  , 2918  , 3027  , 
                                3138, 3251  , 3366  , 3483  , 3602  , 3723  , 3846  , 
                                3971, 4098  , 4227  , 4358  , 4491  , 4626  , 4763  , 
                                4902, 5043  , 5186  , 5331  , 5478  , 5627  , 5778  , 
                                5931, 6086  , 6243  , 6402  , 6563  , 6726  , 6891  , 
                                7058, 7227  , 7398  , 7571  , 7746  , 7923  , 8102  , 
                                8283, 8466  , 8651  , 8838  , 9027  , 9218  , 9411  , 
                                9606, 9802 };

    int list_size = my_list.size();
    std::cout << "list_size: " << list_size << std::endl;
    std::list<int>::iterator it2 = my_list.begin();
	int myNum = 2811; //1683, 40;  8283, 90

    std::cout << "**********************************************************" << std::endl;
    std::cout << "list size: " << list_size << std::endl;
    std::cout << "Number to find index for: " << myNum << std::endl;
    std::cout << "**********************************************************" << std::endl;
	
    test_all_values(my_list);
    binary_search Bsearch; 
    /*int num_index = Bsearch.bsearch(my_list, myNum, 0, my_list.size() - 1);
    std::cout << "num_index: " << num_index << std::endl;*/
}


void test_all_values(std::list<int> mylist)
{
	binary_search Bsearch;
    std::list<int>::iterator it3 = mylist.begin();
	for (int i = 0; i < mylist.size(); i++)
	{
        it3 = mylist.begin();
        std::advance(it3, i);
		std::cout << "**** num_index for " << *it3 << ": " << Bsearch.bsearch(mylist, *it3, 0, mylist.size() - 1) << std::endl;
	}
}