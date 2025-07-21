#include<bits/stdc++.h>
using namespace std;

void explainQueue() {
    // Queue is work on FIFO(First In First Out) condition
    queue<int> q;
    q.push(2);
    q.push(245);
    q.emplace(7);

    q.back() += 5; // add 5 in last number

    if (q.empty()) {
        cout << "Queue is empty";
    } else {
        cout << "Queue value: ";
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }   
    } 
}

int main() {
    explainQueue(); // Call the "explainQueue()" function
    return 0;
}