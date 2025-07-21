#include<bits/stdc++.h>
using namespace std;

void explainstack(){
    // stack is work on LIFO(Last In First Out)
    stack<int> st;
    st.push(0); // for input the value in stack
    st.push(2); // for input the value in stack
    st.push(3); // for input the value in stack
    st.push(4); // for input the value in stack

    cout << "The size of the stack is " << st.size() << endl;

    if (st.empty())
    {
        cout << "Stack is empty.";
    } else {
        cout << "stack value: ";
        while (!st.empty()) // when the stack has a value then while loop can be execute
        {
            cout << st.top() << " " ; // print top element
            st.pop(); // remove top element
        }
    }
    
}
int main(){
    explainstack();
    return 0;
}