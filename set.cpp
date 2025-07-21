#include<bits/stdc++.h>
using namespace std;

void expalinSet() {
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(5);
    st.insert(4);
    st.insert(3);

    // Functionality of insert in vector can be usedalso, that only increases efficiency
    // begin(), end(), rbegin(), rend(), size(), empty(), and swap() are same as those of above

    // cout << "set value: ";
    // for(int value : st) {
    //     cout << value << " " ;
    // }

    int num;
    cout << "Enter the number you find in Set: ";
    cin >> num;

    auto it = st.find(num);

    if(it != st.end()) {
        cout << "The number is find";
    } else {
        cout << "number is not found";
    }

    

    cout << endl;
}

int main() {
    expalinSet();
    return 0;
}