#include<bits/stdc++.h>
using namespace std;

void explainpriorityqueue() {
    // in priority queue largest value stay in the top 
    priority_queue<int> pq;

    pq.push(1);
    pq.push(9);
    pq.push(5);
    pq.emplace(10);

    if(pq.empty()) {
        cout << "priority queue is empty.";
    } else {
        cout << "priority queue value: ";
        while (!pq.empty()){
            cout << pq.top() << " ";
            pq.pop();
        }
    }

    cout << endl;
    // In priority queue, top of the queue is smallest number 
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(5);
    pq1.push(2);
    pq1.push(0);
    pq1.emplace(10);

    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    
}

int main() {
    explainpriorityqueue();
    return 0;
}