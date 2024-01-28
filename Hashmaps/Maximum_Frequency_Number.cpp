int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int,int>count;

    int maxFreq =0;
    int maxAns =0;

    for(int i =0;i<arr.size();i++){
        count[arr[i]]++;
        maxFreq = max(maxFreq,count[arr[i]]);
    }
    for(int i =0;i<arr.size();i++){
        if(maxFreq == count[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}
//method2
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] += 1;
            if (mp[nums[i]] > floor(nums.size()/2)) {
                mp.clear();
                return nums[i];
            }
        }
        return 0;
    }
};
