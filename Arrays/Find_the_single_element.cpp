#include<vector>
#include<map>

int getSingleElement(vector<int> &arr){
	// Write your code here.	 
  //method1
  /*
  int xor =0;
  for(int i =0;i<arr.size();i++){
    xor = xor^arr[i];
  }
  return arr[i];
  */


  //method2 
  map<int,int>mp;
   for(int i =0;i<arr.size();i++){
     mp[arr[i]]++;
   }
   for(int i =0;i<arr.size();i++){
     if(mp[arr[i]] == 1){
       return arr[i];
     }
   }
