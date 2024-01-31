//method1 0(n^2)

bool linearsearch(vector<int>&a,int nums){
    int n = a.size();
    for(int i =0;i<n;i++){
        if(a[i] == nums){
            return true;
        }
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int longest =1;
    int x =0;
    
    for(int i =0;i<a.size();i++){
        x = a[i];
         int count = 1;
        while(linearsearch(a,x+1) == true){
            x = x+1;
            count = count+1;
        }
        longest = max(longest,count);
    }
    return longest;
  
}

//method2 0(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int longest =1;
        int cnt = 0;
        int lastsmaller = INT_MIN;

        for(int i  =0;i<n;i++){
            if(nums[i]-1 == lastsmaller){
                cnt +=1;
                lastsmaller = nums[i];
            }
            else if(nums[i]-1 != lastsmaller){
                cnt =1;
                lastsmaller = nums[i];

            }
            longest = max(longest ,cnt);
        }
        return longest;
    }
};
