#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    //method1
    /*
    for(int i =0;i<n-1;i++){
        int minindex= i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[minindex],arr[i]);
    */

    //method dutch flag algorithm

    int low =0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] ==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] ==1){
            mid++;

        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
   
   
}
