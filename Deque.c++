#include<bits/stdc++.h>
using namespace std;

void explainDeque() {
    deque<int> dq ;

    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(0);
    dq.emplace_front(-1);

    dq.pop_back();
    dq.pop_front();

    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
    }
    
    // all functions of deque are similar to the vector or list
}

int main() {
    explainDeque();
    return 0;
}