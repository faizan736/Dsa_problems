int possible(vector<int> arr,int days, int k, int m){
	int count =0;
	int numberofbloom= 0;
	for(int i =0;i<arr.size();i++){
		if(arr[i]<=days){
			count++;
		}
		else{
			numberofbloom += count/k;
			count =0;
		}

	}
	numberofbloom += (count/k);
	return numberofbloom>=m;
}
int roseGarden(vector<int> arr, int k, int m)
{
	// Write your code here
	
    long long val = m*k;
	int n = arr.size();
	if(val > n){
		return -1;
	}
	int maxi = INT_MIN;
	int mini = INT_MAX;
	for(int i =0;i<n;i++){
		maxi = max(maxi,arr[i]);
		mini = min(mini,arr[i]);
	}
	int s = mini;
	int e = maxi;
	while(s<=e){
		int mid = (s+e)/2;
		if(possible(arr,mid,k,m)){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}
	return s;
}
