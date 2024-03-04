class Stack {
	// Define the data members.
    queue<int>q;

   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        if(q.size() ==0 ){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int element) {
        // Implement the push() functio
        //we push all elements into q 
         q.push(element);
         //we do for loop from start the start element goes down in stack 
        for(int i =0;i<q.size()-1;i++){
            int x = q.front();
            q.pop();
            q.push(x);
        }
            
    }

    int pop() {
        // Implement the pop() function.
        if(q.empty()){
            return -1;
        }
        else{
            //because this goes last become top for stack
            int ans = q.front();
            q.pop();
            return ans;
        }
    }

    int top() {
        // Implement the top() function.
        if(q.empty()){
            return -1;
        }
        else{
            return q.front();
        }
    }
};
