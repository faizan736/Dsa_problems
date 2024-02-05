int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int s =0;
	int e = n-1;
	int mid = s+(e-s)/2;
	int ans = n;
	while(s<=e){
		if(arr[mid] > x){
			ans = mid;
			e= mid-1;
		}
		else{
			s= mid+1 ;
		}
		mid = s+(e-s)/2;
	}
	return ans;	
}
