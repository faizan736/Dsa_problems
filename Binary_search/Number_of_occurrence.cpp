int firstocc(vector<int>& arr, int n, int x){
	int s =0;
	int e = arr.size()-1;
	int mid = s+(e-s)/2;
	int ans =-1;
	while(s<=e){
		if(arr[mid] == x){
			ans = mid;
			e =mid-1;
		}
		else if(arr[mid]>x){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}

int lastocc(vector<int>& arr, int n, int x){
	int s =0;
	int e = arr.size()-1;
	int mid = s+(e-s)/2;

	int ans =-1;

	while(s<=e){
		if(arr[mid] == x){
			ans = mid;
			s = mid+1;
		}
		else if(arr[mid] >x){
			e = mid-1;
		}	
		else{
			s = mid+1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	if(n == 0){
		return 0;
	}

	int a = firstocc(arr,n,x);
	if(a == -1){
		return 0;
	}
	int b= lastocc(arr,n,x);

	return b-a+1;
}
