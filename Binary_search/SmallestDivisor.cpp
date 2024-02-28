
int possible(vector<int>& arr, int limit,int num){
	int sum =0;
	for(int i =0;i<arr.size();i++){
		sum += ceil((double)(arr[i]) / (double)(num));
	}
		return sum;
	
}
int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int n = arr.size();
    if (n > limit) return -1;
	int mini = INT_MAX;
	int maxi = INT_MIN;

	for(int i =0;i<arr.size();i++){
		maxi = max(maxi,arr[i]);
		mini = min(mini,arr[i]);
	}
	int s = mini;
	int e = maxi;
	while(s<=e){
		int mid = (s+e)/2;
		if(possible(arr,limit,mid) <= limit){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}
	return s;
}
