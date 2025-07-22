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

    cout << "set value: ";
    for(int value : st) {
        cout << value << " ";
    }

    cout << endl;
    // int num;
    // cout << "Enter the number you find in Set: ";
    // cin >> num;

    // auto it = st.find(num);

    // if(it != st.end()) {
    //     cout << "The number " << num << " is find";
    // } else {
    //     cout << "number "<< num << " is not found";
    // }

    // st.erase(num);

    //  cout << "set value after erace " << num;
    // for(int value1 : st) {
    //     cout << value1 << " " ;
    // }
    cout << endl;

    int cnt = st.count(5); // using this we can count the number wich are come how many time
    cout << cnt;

    cout << endl;
}

void explainMultiset() {
    cout << "multiset" << endl;
    multiset<int> ms;
    ms.insert(8);
    ms.insert(8);
    ms.insert(8);

    ms.erase(8);

    cout<<ms.count(8)<<endl;
}

void explainUniset() {
    unordered_set set<int> st;
    // lowerbound and upperbound function
    // dose not works, reset all functions are same
    // as above, it has a better complexity
    // than set in most cases, expect some when collision happen
}

int main() {
    expalinSet();
    explainMultiset();
    return 0;
}