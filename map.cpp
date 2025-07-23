#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    // map store unique key in sorted and it is simmilar to set data structure
    map<int, int> mpp; // map<key, value> format
    map<int, pair<int, int>> mpp;
    map<pair<int,int>, int> mpp;


    // Correct usage of map insertions
    mpp[1] = 2;                     // Insertion using []
    mpp.emplace(3, 1);             // Insertion using emplace
    mpp.insert({2, 4});            // Insertion using insert

     // Print the contents of the map
    for (auto& p : mpp) {
        cout << p.first << ": " << p.second << endl;
    }

    mpp[(2,3)] = 10;    
    {
        {1,2},
        {2,4},
        {3,1},
    }

        for(auto it : mpp) {
            cout <<it.first << " " << it.second << endl;
        }
}

int main() {
    explainMap();
    return 0;
}
