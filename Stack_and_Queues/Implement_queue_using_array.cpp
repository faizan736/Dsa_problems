// Stack class.
class Stack {
    int* arr;
    int topm;
    int size;
    
public:
    
    Stack(int capacity) {
        // Write your code here.
        arr = new int[capacity];
        this->size = capacity;
        topm =-1;
    }

    void push(int num) {
        // Write your code here.
        if(isFull()){
            return;
        }
        topm++;
        arr[topm] = num;
    }

    int pop() {
        // Write your code here.
        if(topm>=0){
            int ans = arr[topm];
            topm--;
            return ans;
        }
        else{
            return -1;
        }
    }
    
    int top() {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[topm];
        }
    }
    
    int isEmpty() {
        // Write your code here.
        if(topm == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int isFull() {
        // Write your code here.
        if(topm  == size-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
};
