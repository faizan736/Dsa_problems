int floor(vector<int> &a, int n, int x){
	int s =0;
	int e = n-1;
	int mid = s+(e-s)/2;
	
	int ans = -1;
	while(s<=e){
		if(a[mid] <= x){
			ans= a[mid];
			s = mid+1;
		}
		else{
			e = mid-1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}
int ceil(vector<int> &a, int n, int x){
	int s =0;
	int e = n-1;
	int mid  = s+(e-s)/2;

	int ans = -1;

	while(s<=e){
		if(a[mid] >= x){
			ans = a[mid];
			e = mid-1;
		}
		else{
			s= mid+1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int p = floor(a,n,x);
	int c = ceil(a,n,x);

	return make_pair(p,c);
}
