vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    vector<int>ans(n,0);
    //(n,0) means were are defining all the vector till n with 0
    int postiveindex =0;
    int negativeindex =1;
    for(int i =0;i<n;i++){
        if(a[i]<0){
            ans[negativeindex] = a[i];
            negativeindex = negativeindex+2;
        }
        else{
            ans[postiveindex] = a[i];
            postiveindex = postiveindex+2;

        }
    }
    return ans;
}
