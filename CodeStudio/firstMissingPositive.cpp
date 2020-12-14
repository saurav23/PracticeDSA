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

            // increment count of positive integers
            j++;
        }
    }

    return j;
}

int findMissingPositive(int arr[], int size)
{
    // Mark arr[i] as visited by making arr[arr[i] - 1] negative.
    for (int i = 0; i < size; i++)
    {
        int x = abs(arr[i]);
        if (x - 1 < size && arr[x - 1] >= 0)
        {
            arr[x - 1] = -arr[x - 1];
        }
    }

    // Return the first index value at which is positive
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
    // Segregate the array such that positive elements goes to the left side of the
    // array and negative to the right side.
    // and return the last index of positive element.
    int index = segregate(arr, n);

    return findMissingPositive(arr, index);
}



