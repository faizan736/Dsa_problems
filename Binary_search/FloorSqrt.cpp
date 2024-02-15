int floorSqrt(int n)
{
    // Write your code here.
    
    //method1
    int ans = -1;
    for(int i =1;i<=n;i++){
        if(i*i <= n){
            ans =i;
        }
    }
    return ans;

    
}

//binary search
int floorSqrt(int n)
{
    // Write your code here.
    int s =0;
    int e = n;

  

    while(s<=e){
        int mid = s+(e-s)/2;
        int x = mid*mid;
        if( x == n){
            return mid;
        }
        if(x > n){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return e;
}
