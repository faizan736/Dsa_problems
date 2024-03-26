#include <bits/stdc++.h> 
void minHeap(vector<int>&arr , int n ,int  i){
    int smallest = i;
    int left = 2*i +1; // start index from 0 we use 2*i+1 for left
    int right = 2*i + 2; // start index from 0 we use 2*i+2 for right

    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < n && arr[smallest] > arr[right] ){
       smallest =  right ;
    }
    
    if(smallest != i){
        swap(arr[smallest],arr[i]);
        minHeap(arr,n,smallest);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n = arr.size();
    //n/2-1 beacuse we started from 0
    for(int i = n/2-1; i>=0;i--){
        minHeap(arr,  n,  i);
    }
    return arr;
}
