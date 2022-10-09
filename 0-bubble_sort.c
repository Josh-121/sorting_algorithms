#include "sort.h"
void bubble_sort(int *array, size_t size)
{
    int n =  (int) size;
    int i, j;
    int k = 1;
    int swap;

    for (i = 0; i < n - 1; i++)
    {
        swap = 0;
        for (j = 0; j < n - k; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
                swap = 1;
                print_array(array, size);
            }
        }
        k += 1;
        if (swap == 0)
            break;
    }
}