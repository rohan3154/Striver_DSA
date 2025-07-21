#include<bits/stdc++.h>

using namespace std;

void explainList() {
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    
    ls.emplace_front(2);

   for(auto it = ls.begin(); it != ls.end(); ++it) 
   {
    cout << *it << " ";
   }
   cout << endl;

// all of the functions which is in list are simillar to vector's functions
    
}

int main() {
    explainList();
    return 0;
}