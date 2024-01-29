int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left =0;
    int right = 0;
    int n = a.size();
    int len =0;
    long long sum =0;
    while(right <n){
        sum = sum+a[right];
        if(sum>k){
            sum = sum - a[left];
            left++;
        }
        if(sum == k){
            len = max(len ,right-left+1);
        }
        right++;
    }
    return len;
}
