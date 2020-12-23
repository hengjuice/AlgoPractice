#include <bits/stdc++.h> 
using namespace std; 
  
// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1 

//Recursive version
int binarySearch(int arr[], int start, int end, int key){
    if(end>=1){
        int mid = (end-start)/2 + 1;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid]>key)
            return binarySearch(arr,mid+1,end,key);
        else
            return binarySearch(arr,start,mid,key);
    }
    return -1;
}

//Iterative version
int binarySearch2(int arr[], int start, int end, int key){
    while(start<=end){
        int mid = (end-start)/2 + 1;
        if (arr[mid] == key)
            return mid;
        else if(arr[mid]>key)
            start = mid + 1;
        else
            end = mid;
    }
    return -1;
}
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    cout<<"\n";
    
    int result2 = binarySearch2(arr, 0, n - 1, x); 
    (result2 == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result2;
    return 0; 
} 