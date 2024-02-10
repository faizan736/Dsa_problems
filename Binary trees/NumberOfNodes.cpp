int numberOfNodes(int N){
    // Write your code here.
    if(N==1){

        return 1;

    }

    if(N==2){

        return 2;

    }

    return pow(2, (N - 1));
}
