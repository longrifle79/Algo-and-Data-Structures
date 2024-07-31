#include "binary_search.h"

binary_search::binary_search() {}

int binary_search::b_search(int array[], int num, int start, int last)
{
    int mid = start + (last - start) / 2;

    if (start > last) 
    {
        return -1;
    }
    if (array[mid] == num)
    {
        return mid;
    }        
    else if (array[mid] > num)
    {
        return b_search(array, num, start, mid - start);
    }        
    else
    {
        return b_search(array, num, mid + 1, last);
    }        
}