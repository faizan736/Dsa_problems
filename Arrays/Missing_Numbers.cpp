class Solution {
public:
    int missingNumber(vector<int>& nums) {     
        //Method1
        /*  
        sort (nums.begin(), nums.end());
        for (int i = 0 ; i < nums.size() ; i++)
        {
            if (nums[i] != i)
            {
               return i;
            }
        }
        return nums.size();
        */

        //Method2
        int n = nums.size();
        int sum = n*(n+1)/2;
        int s1=0;

        for(int i =0;i<n;i++){
             s1 = s1+nums[i];
        }
        return sum-s1;
    }
};
