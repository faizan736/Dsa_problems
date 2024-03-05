double power(double x,int n){
    if(n ==0){
        return 1;
    }
    if(n <0){
        n= -n;
        return (1/x)*power(1/x,n-1);
    }
    return x*power(x,n-1);
}
double myPow(double x, int n) {
    // Write Your Code He
    return power(x,n);
}
