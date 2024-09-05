#include <iostream>
#include <cstdlib>

void insertion_sort(int * nums, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = nums[i];
        int j = i-1;

        while (j > 0 and nums[j] > key)
        {
            nums[j+1] = nums[j];
            j--;
        }
    }
}
/* for each element in the list (nums[i] or "key"), we go through 
        and as long as it's less than the number immediately 
        to its left ("nums[j] > key"), we swap the position of the 
        elements ("nums[j+1] = nums [j]"). 
        Starting with the element second to the left ("int i=1"), 
        we ensure that the entire list is sorted */

void print_array( int * nums, int size)

{
    std::cout << nums << "\n";
}

int main()
{
    std::cout << "Enter the size of array to be sorted: ";
    int x{} ;
    std::cin>>x;

    int array[x]; 

    for (int i = 0; i < x; i++)
    {
        array[i] = rand() % 100;
    }

    insertion_sort(array, x);
    print_array(array, x);

    return 0;
}