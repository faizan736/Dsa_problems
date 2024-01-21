int secondlargest(int n,vector<int>&a){
    int slargest = -1;
    int largest = a[0];

    for(int i =1;i<n;i++){
        if(a[i]>largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }

    }
    return slargest;
}
int secondsmallest(int n,vector<int>&a){
    int ssmallest = INT_MAX;
    int smallest = a[0];

    for(int i =1;i<n;i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i] <ssmallest){
            ssmallest = a[i];
        }

    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int slargest = secondlargest(n,a);
    int ssmallest = secondsmallest(n,a);
    return {slargest,ssmallest};
}
