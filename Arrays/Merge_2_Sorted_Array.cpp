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
