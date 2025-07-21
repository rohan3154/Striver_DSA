#include<bits/stdc++.h>
using namespace std;

void explainvector() {
    vector<int> v; // it's create an empty container 

    v.push_back(1); //it's means puch 1 in empty container
    v.emplace_back(2); // it's similar to push_back
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    

    vector<pair<int, int>>vec;
    // // To print this upper vector
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "(" << vec[i].first << ", " << vec[i].second << ")";
    }
    cout << endl;
    

    vector<int> v1(5, 100); // it's means it was 5 time print 100 in vector
    // To print this upper vector
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    
    
    vector<int> v2(5);
    // for print this upper vector
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << ",";
    }

    vector<int> v3(5, 20);
    // To print upper vector value
    cout << "This is for v vector:- " ;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ," << " ";
    }
    cout << endl;

    vector<int> v4(5, 20);
    // To print print upper vector value
    cout << "This is for v1 vector value:- ";
    for (int j = 0; j < v4.size(); j++)
    {
        cout << v4[j] << " ";
    }

    vector<int> v5 = {4, 3, 6, 9, 50, 6, 5};
    vector<int>::iterator it = v5.begin(); // by using this line we can print first value of v vector


    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) <<  " ";

    vector<int>::iterator it1 = v5.end();
    vector<int>::reverse_iterator it2 = v5.rend(); // we can call "rend" means reverse end 
    vector<int>::reverse_iterator it3 = v5.rbegin(); // we can call rbegin means reverse begin

    cout << endl ;
    cout << v5[0] << " " << v5.at(0);
    cout << "v5.back()" <<  v5.back() << " " << endl; 

    cout << endl;

    // for print vetor to starting to end
    for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << endl;
    
    // for print vetor to starting to end
    for (auto it = v5.begin(); it != v5.end(); it++) // "auto" is the automatically define the variable
    {
        cout << *(it) << " ";
    }

    cout << endl;
    
    cout << "this is for v5";
    for (auto it : v5)
    {
        cout << it << " ";
    }

    cout << endl << "insert 300 at begin:" << endl;
    v.insert(v.begin(), 300);
     for (auto it : v5)
    {
        cout << it << " ";
    } 
    
    cout << endl << "erase 300 at begin:" << endl;
    v.erase(v.begin() + 1); // erase at second position in vector
     for (auto it : v5)
    {
        cout << it << " ";
    } 

    cout << endl << "to insert a number 10 after firt number" << endl;
    v5.insert(v.begin() + 1,  2, 10);
    for (auto it : v)
    {
        cout << it << " ";
    } 

    vector<int> v6 = {10, 30};
    v.swap(v6);
    cout << endl << "for v6:" << endl;

    for (int i = 0; i < v6.size(); i++)
    {
        cout << "for v6 " << endl << v6[i];
    }

    cout << endl << "for v6" << endl;
    
    for (int j = 0; j < v6.size(); j++)
    {
        cout << v6[j] <<" ";
    }

    cout << endl;
}

int main() {
    explainvector();
    return 0;
}