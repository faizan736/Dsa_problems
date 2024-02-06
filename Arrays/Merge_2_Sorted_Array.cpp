#include<set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    
    set<int>s;
    vector<int>ans;
    for(int i =0;i<a.size();i++){
        s.insert(a[i]);
    }
    for(int j =0;j<b.size();j++){
        s.insert(b[j]);
    }
    for(auto i :s){
        ans.push_back(i);
    }
    return ans;
    
  
}

//method2
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(i>=0 && j>=0){
            if(nums1[i] >nums2[j]){
                nums1[k] = nums1[i];
                i--;
                k--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
