#include<unordered_map>
int majorityElement(vector<int> v) {
	// Write your code here
	unordered_map<int,int>count;
	int n = v.size();
	int maxFreq =0;
	int maxAns =0;
	for(int i =0;i<v.size();i++){
		count[v[i]]++;
		maxFreq = max(maxFreq,count[v[i]]);
	}
	for(int i =0;i<v.size();i++){
		if(maxFreq  == count[v[i]]){
			maxAns = v[i];
			break;
		}
	}
	return maxAns;
}
