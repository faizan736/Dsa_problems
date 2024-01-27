class Solution {
public:
    bool check(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            if(nums[i] <nums[i-1] && nums[i] != nums[i-1]){
                return 0;
            }
        }
        return 1;

        
    }
};
