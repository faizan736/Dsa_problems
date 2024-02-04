//method1 o(n^2)

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int count =0;

    for(int i =0;i<arr.size();i++){
        int sum =0;
        for(int j = i;j<arr.size();j++){
            sum = sum+arr[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

//method2
 int sum =0;
    int count =0;

    unordered_map<int,int>mp;

    for(int i =0;i<arr.size();i++){
        sum = sum+arr[i];
        if(sum == k){
            count++;
        }
        if(mp.find(sum -k) != mp.end()){
            count = count+ mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
