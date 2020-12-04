// CPP program to find all indices of a number 
#include <bits/stdc++.h> 
using namespace std; 

// A recursive function to find all 
// indices of a number 
int AllIndexesRecursive(int input[], int size, 
					int x, int output[]) 
{ 
	
	// base case
	if (size == 0) { 
		return 0; 
	} 

	// Getting the recursive answer 
	int smallAns = AllIndexesRecursive(input + 1, 
									size - 1, x, output); 

	// If the element at index 0 is equal  
	if (input[0] == x) { 
		for (int i = smallAns - 1; i >= 0; i--) { 
			output[i + 1] = output[i] + 1; 
		} 

		// Put the start index in front 
		// of the array 
		output[0] = 0; 
		smallAns++; 
	} 
	else { 
		
		// If the element at index 0 is not equal 
		// to x then add 1 to the array values 
		for (int i = smallAns - 1; i >= 0; i--) { 
			output[i] = output[i] + 1; 
		} 
	} 
	return smallAns; 
} 

// Function to find all indices of a number 
void AllIndexes(int input[], int n, int x) 
{ 
	int output[n]; 
	int size = AllIndexesRecursive(input, n, 
								x, output); 
	for (int i = 0; i < size; i++) { 
		cout << output[i] << " "; 
	} 
} 

// Driver Code 
int main() 
{ 
	int arr[] = { 1, 2, 1}, x = 2; 
	
	int n = sizeof(arr) / sizeof(arr[0]); 
	
	// Function call 
	AllIndexes(arr, n, x); 
	
	return 0; 
} 
