#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

//insertion
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;
        while(index >1){
            int parent  = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                 parent = index ;
            }
            else{
                return ;
            }
        }
    }
//printing
    void print(){
        for(int i =1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
//deletion
    void deletefromHeap(){
        if(size == 0){
            return;
        }
        //step1
        arr[1] = arr[size];
        //step2 decrement the count
        size--;

        int i = 1;//because it swap to first index position
        //placing the term in right position
        while(i<size){
            int leftIndex = 2*i;//to check  with left index
            int RightIndex = 2*i+1;//to check with right index
            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(RightIndex <size && arr[i] <arr[RightIndex]){
                swap(arr[i],arr[RightIndex]);
                i = RightIndex;
            }
            else{
                return;
            }
        }
    }
};
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();
    h.deletefromHeap();
    h.print();
    return 0;
}
