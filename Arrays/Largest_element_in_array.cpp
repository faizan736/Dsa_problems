#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    //first we sort
    //insertion sort
    for(int i =0;i<=n-1;i++){ //number of rounds
        int j =i;
        while(j>0 && arr[j-1] >arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    //after the last answer is th largest
    return arr[n-1];

}
