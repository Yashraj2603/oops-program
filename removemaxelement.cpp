#include <iostream>

using namespace std;

#include <bits/stdc++.h>
using namespace std;
 

int findMax(int arr[], int n)
{
    int max = 0, index = 0;
    for (int i = 0; i < n; i++)
 
        
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
 
    
    return index;
}
 
int countSteps(int arr[], int n)
{
    // Find the index of largest number in the array
    int index = findMax(arr, n);
 
    //'steps' variable calculates the number of
    // steps being taken.
    int steps = 1;
 
    // Check until the first element of array is removed,
    // hence until index!=0
    while (index != 0) {
 
        // Update index with the index value of highest
        // element in the remaining array.
        index = findMax(arr, index);
        steps++;
    }
 
    return steps;
}
 
// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {  
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
    
 
    
    cout << countSteps(arr, n) << endl;
    return 0;
    }
}
