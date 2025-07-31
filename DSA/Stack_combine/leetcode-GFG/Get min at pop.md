
```cpp
// Function to push all the elements into the stack.
stack<int> _push(int arr[], int n) {
   stack<int>st;
   for(int i=0;i<n;i++){
       st.push(arr[i]);
   }
   
    while(!st.empty()){
        _getMinAtPop(st);
        st.pop();
    }
    return st;
}
// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {
    if(s.empty()) return;
    int min=INT_MAX;
    while(!s.empty()){
        if(s.top()<min) min=s.top();
        s.pop();
    }
    cout<<min<<" ";
}
```
```cpp
//optimal
stack<int> _push(int arr[], int n) {
    stack<int>st;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
        min=arr[i];
        }
        st.push(min);
    }
    while(!st.empty()){  
        cout<<st.top()<<" ";
        st.pop();
    }
    return st;
}
```
