#include<bits/stdc++.h>
int maxvalue(vector<int>&v){
    int maxi = INT_MIN;
    for(int i =0 ;i<v.size();i++){
         maxi = max(maxi,v[i]);
    }
    return maxi;
}
int totaltime(vector<int> &v,int hourly){
    int totalh =0;
    for(int i =0;i<v.size();i++){
        totalh += ceil((double)(v[i])/(double)(hourly));
    }
   
    return totalh;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int s =1;
    int e = maxvalue(v);
    while(s<=e){
        int mid =(s+e)/2;
        int timetaken = totaltime(v,mid);
        if(timetaken <= h){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return s;
}
