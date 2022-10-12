<<<<<<< HEAD

#include "sort.h"
/**
  * selection_sort - Sort an array of integers in ascending order
  *                  using the selection sort algorithm.
  * @array: array to sort
  * @size: size of array
  * Description: Prints the array after each swap.
  */
void selection_sort(int *array, size_t size)
{
	size_t i, i2;
	int min, tmp, idx;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (i2 = i + 1; i2 < size; i2++)
		{
			if (min > array[i2])
			{
				min = array[i2];
				idx = i2;
			}
		}
		if (min != array[i])
		{
			tmp = array[i];
			array[i] = min;
			array[idx] = tmp;
			print_array(array, size);
		}
	}
}
=======
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
>>>>>>> e29d4bd504cd69b0e08747cf3cc54e6915653c6a
