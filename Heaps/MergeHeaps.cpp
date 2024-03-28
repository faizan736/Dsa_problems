class Solution{
    public:
    void heapify(vector<int>&ans,int size,int i){
        int largest  = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left < size && ans[largest] < ans[left]){
            largest = left;
        }
        if(right < size && ans[largest] < ans[right]){
            largest = right;
        }
        
        
        if(largest != i){
            swap(ans[i],ans[largest]);
            heapify(ans,size,largest);
        }
        
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int>ans;
        for(auto i: a){
            ans.push_back(i);
        }
        for(auto i : b){
            ans.push_back(i);
        }
        int size = ans.size();
        for( int i = size/2-1;i>=0;i--){
            heapify(ans,size,i);
        }
        return ans;
    }
};
