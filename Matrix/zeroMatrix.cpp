//Method o(n^3)
#include <bits/stdc++.h> 
void matrixRow(vector<vector<int>> &matrix, int n, int m,int i ){
	for(int j =0;j<m;j++){
		if(matrix[i][j] != 0){
			matrix[i][j] =-1;
		}
	}
}
void matrixcolumn(vector<vector<int>> &matrix, int n, int m,int j ){
	for(int i =0;i<n;i++){
		if(matrix[i][j] != 0){
			matrix[i][j] = -1;
		}
	}
}
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			if(matrix[i][j] ==0){
				matrixRow(matrix,n,m,i);
				matrixcolumn(matrix,n,m,j);
			}
		}
	}
	for(int i = 0;i<n ;i++){
		for(int j = 0;j<m;j++){
			if(matrix[i][j] == -1){
				matrix[i][j] =0;
			}
		}
	}
	return matrix;
}

//method2 
#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int col[m] ={0};
	int row[n] ={0};
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] ==0){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			if(row[i] || col[j]){
				matrix[i][j] =0;
			}
		}
	}
	return matrix;
}
