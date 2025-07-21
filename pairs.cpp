#include<bits/stdc++.h>
using namespace std;

void explainpair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " and " << p.second << endl; // we can acesses the upper line using "p.first" and "p.second" and etc

        // we can make pair for 3 variable
    pair<int, pair<int, int>> p1 = {2, {4, 5}};
    cout << p1.first <<" and " << p1.second.second << " and " <<p1.second.first << endl;

    // we can make pair for more then 2 pair
    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;

}

int main() {
    explainpair();
    return 0;
}