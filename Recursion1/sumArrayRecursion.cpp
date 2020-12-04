#include <iostream>
using namespace std;

// sum fuction
int sumArray(int arr[] , int n ){
    // base case
    if(n == 0 || n == 1 ){
        return arr[0];
    }

    int smallAns = sumArray( arr+1 , n-1 ) ;
    return smallAns + arr[0] ;
}

// main
int main()
{
    int n;
    cin >> n;
    int arr[n];

}