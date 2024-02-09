int findMin(vector<int>& arr)
{
	// Write your code here.
	int s =0;
	int e = arr.size()-1;
	int mid = s+(e-s)/2;

	while(s<e){
    //why not arr[0] means we want to check in whole array
		if(arr[mid] > arr[e]){
			s= mid+1;
		}
		else{
			e = mid;
		}
		mid = s+(e-s)/2;
	}
	return arr[s];
}
