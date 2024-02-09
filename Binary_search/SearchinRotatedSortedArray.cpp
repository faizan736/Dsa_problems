//method1
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s =0;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[s] <= nums[mid] ){
                if(nums[s] <= target && target <= nums[mid]){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[e]){
                    s = mid+1;
                }
                else{
                    e = mid-1;
                }
            }
        }
        return -1;
    }
    
};


//method2
int getpivot(vector<int>& arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;

}
int binarysearch(vector<int>& arr,int s,int e,int k){
    
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
   
    int pivot=getpivot(arr, n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarysearch(arr,pivot,n-1,k);
    }
    else{
        return binarysearch(arr, 0,pivot-1,k);
    }  
}
