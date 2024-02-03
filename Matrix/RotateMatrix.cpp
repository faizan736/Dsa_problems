// Method1 0(n^2)
#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	int row = mat.size();
	int col = mat[0].size();
	vector<vector<int>>ans(row,vector<int>(row,0));

	for(int i =0;i<row ;i++){
		for(int j =0;j<col;j++){
			//mat[j][(row-1)-i] = 0;
			 ans[j][row-i-1] = mat[i][j] ;
		}
	}
	mat = ans;
	
}

//method2
int row = mat.size();

	for(int i =0;i<row-1;i++){
		for(int j =i+1;j<row;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i =0;i<row;i++){
		reverse(mat[i].begin(),mat[i].end());
	}
