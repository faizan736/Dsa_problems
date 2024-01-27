int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int j = 0;
	for(int i =1;i<n;i++){
		if(arr[j] != arr[i]){
			//we are pushing the element which are unqiue
			arr[j+1] = arr[i];
			j++;
		}
	}
	return j+1;

}
