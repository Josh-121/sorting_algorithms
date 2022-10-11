#include "sort.h"
int min(int *array, int a, int b)
{
    int min_num = array[a];
    int min_index = a;
    int i;
    for (i=a; i<b; i++)
    {
        if(array[i] < min_num)
        {
            min_num = array[i];
            min_index = i;
        }
    }
    return min_index;
}
void selection_sort(int *array, size_t size)
{
    int length = (int) size;
    int i;
    int min_index;
    int temp;
    for (i=0; i<length-1; i++)
    {
        min_index = min(array, i, length);
        temp = array[min_index];
        if(min_index != i)
        {
            array[min_index] = array[i];
            array[i] = temp;
            print_array(array, size);
        }
    }
}