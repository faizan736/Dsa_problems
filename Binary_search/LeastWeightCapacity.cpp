class Solution {
public:
    int func(vector<int>& weights, int cap){
        int days = 1;
        int load =0;
        for(int i =0;i<weights.size();i++){
            if(load+weights[i]>cap){
                days = days+1;
                load = weights[i];
            }
            else{
                load +=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum =0;
        int maxi = 0;
        int n = weights.size();
        for(int i =0;i<n;i++){
            sum = sum+weights[i];
            maxi = max(maxi,weights[i]);
        }
        int s = maxi;
        int e = sum ;
        while(s<=e){
            int mid = s+(e-s)/2;
            int daysreq = func(weights,mid);
            if(daysreq <= days){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return s;
    }
};
