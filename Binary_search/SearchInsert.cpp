class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //method1 
        
        int s =0;
        int e = nums.size()-1;
        int mid  = s+(e-s)/2;
        
        int ans = nums.size();
        while(s<=e){
            if(nums[mid] >= target){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid  = s+(e-s)/2;
        }
        return ans;
        

        //nethod2
        int ans = -1;
        while(s<=e){
            if(nums[mid] == target){
                ans  = mid;
            }
            if(target >nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid  = s+(e-s)/2;
        }
        if(ans == -1){
            return mid;
        }
        return ans;

    }
};
