#include<map>
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    //method1
    /*
    for(int i =0;i<book.size();i++){
        for(int j = i+1;j<book.size();j++){
            if(book[i] +book[j] == target){
                return"YES"; 
            }
        }
    }
    return "NO"; 
    */


    //method2
    map<int,int>mp;
    for(int i =0;i<n;i++){
        int a = book[i];
        int more = target-a;
        if(mp.find(more) != mp.end()){
            return "YES"; ////return {mp.[more],i};
        }
        mp[a] =i;
    }
    return "NO";return {-1,-1}




}
