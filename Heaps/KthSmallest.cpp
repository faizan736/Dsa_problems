class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        //Method1
        
        /*
        sort(arr,arr+r+1);
        return arr[k-1];
        */
        
        //Method2
        priority_queue<int>pq;
        //step1 creating max heap for first k elements
        for(int i = l ;i<k;i++){
            pq.push(arr[i]);
        }
        //step2 checking reamaining elements and comparing 
        for(int i = k;i<=r;i++){
            if(arr[i] < pq.top()){
                //if it is less then pop 
                pq.pop();
                //and push in heap and after some process in reaches its correct postion
                pq.push(arr[i]);
            }
        }
        //so we creating k size heap then answer will in top only right 
        return pq.top();
    }
};
