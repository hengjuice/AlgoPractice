// C++ program to implement Jump Search 
  
#include <bits/stdc++.h> 
using namespace std; 
  
int jumpSearch(int arr[], int key, int size) 
{ 
    int jump = sqrt(size);
    int i;
    for(i = 0; i<size; i+=jump){
        if(arr[i] == key)
            return i;
        else if(arr[i] > key)
            break; //stop when value is more than key value
    }
    //traverse back to the start of array
    while(i!=1){
        if(arr[i] == key)
            return i;
        else
            i-=1;
    }
    return -1;
} 
  
// Driver program to test function 
int main() 
{ 
    int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 
                34, 55, 89, 144, 233, 377, 610 }; 
    int x = 55; 
    int n = sizeof(arr) / sizeof(arr[0]); 
      
    // Find the index of 'x' using Jump Search 
    int index = jumpSearch(arr, x, n);
  
    // Print the index where 'x' is located 
    cout << "\nNumber " << x << " is at index " << index;
    
    cout << "\nNumber " << 611 << " is at index " << jumpSearch(arr, 611, n) << endl;
    cout << "\nNumber " << 4 << " is at index " << jumpSearch(arr, 4, n) << endl;
    cout << "\nNumber " << 500 << " is at index " << jumpSearch(arr, 500, n) << endl;
    
    
    return 0; 
} 