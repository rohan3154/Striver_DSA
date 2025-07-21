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
    

    vector<int> v(5, 100); // it's means it was 5 time print 100 in vector
    // To print this upper vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    
    vector<int> v(5);
    // for print this upper vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }

    vector<int> v(5, 20);
    // To print upper vector value
    cout << "This is for v vector:- " ;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ," << " ";
    }
    cout << endl;

    vector<int> v1(5, 20);
    // To print print upper vector value
    cout << "This is for v1 vector value:- ";
    for (int j = 0; j < v1.size(); j++)
    {
        cout << v1[j] << " ";
    }

    vector<int> v = {4, 3, 6, 9, 50, 6, 5};
    vector<int>::iterator it = v.begin(); // by using this line we can print first value of v vector


    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) <<  " ";

    vector<int>::iterator it1 = v.end();
    vector<int>::reverse_iterator it2 = v.rend(); // we can call "rend" means reverse end 
    vector<int>::reverse_iterator it3 = v.rbegin(); // we can call rbegin means reverse begin

    cout << endl ;
    cout << v[0] << " " << v.at(0);
    cout << "v.back()" <<  v.back() << " " << endl; 

    cout << endl;

    // for print vetor to starting to end
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << endl;
    
    // for print vetor to starting to end
    for (auto it = v.begin(); it != v.end(); it++) // "auto" is the automatically define the variable
    {
        cout << *(it) << " ";
    }

    cout << endl;
    
    cout << "this is for v";
    for (auto it : v)
    {
        cout << it << " ";
    }

    cout << endl << "insert 300 at begin:" << endl;
    v.insert(v.begin(), 300);
     for (auto it : v)
    {
        cout << it << " ";
    } 
    
    cout << endl << "erase 300 at begin:" << endl;
    v.erase(v.begin() + 1); // erase at second position in vector
     for (auto it : v)
    {
        cout << it << " ";
    } 

    cout << endl << "to insert a number 10 after firt number" << endl;
    v.insert(v.begin() + 1,  2, 10);
    for (auto it : v)
    {
        cout << it << " ";
    } 

    vector<int> v1 = {10, 30};
    v.swap(v1);
    cout << endl << "for v:" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << "for v " << endl << v[i];
    }

    cout << endl << "for v1" << endl;
    
    for (int j = 0; j < v1.size(); j++)
    {
        cout << v1[j];
    }
}

int main() {
    explainvector();
    return 0;
}