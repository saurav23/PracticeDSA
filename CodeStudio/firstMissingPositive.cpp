/*
   Time Complexity = O(N)
   Space Complexity = O(1)
   Where N is the length of the array.
*/
#include <cstdlib>

int segregate(int arr[], int size)
{
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            j++;
        }
    }

    return j;
}

int findMissingPositive(int arr[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        int x = abs(arr[i]);
        if (x - 1 < size && arr[x - 1] >= 0)
        {
            arr[x - 1] = -arr[x - 1];
        }
    }

    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            return i + 1;
        }
    }

    return size + 1;
}

int firstMissing(int arr[], int n)
{
    
    int index = segregate(arr, n);

    return findMissingPositive(arr, index);
}



