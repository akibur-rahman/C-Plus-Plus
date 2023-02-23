#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    vector<int> v = {1, 2, 3, 4, 5, 6};

    // Iterators are like pointers that points at memory addresse
    // Syntax of iterators
    vector<int>::iterator it = v.begin(); // using the itreator keyword and pointing at the begining of the vector
    // can access the value of itretor same like pointers
    cout << (*it) << endl;
    // we can access all the values inside a container by traversing itreator to .end()
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << endl;
    }

    /*
    NOTE: There is a difference between it++ and it+1
    it++ moves to next iterator and it+1 moves to next memory location
    hance it+1 may throw some error in non-contigious data structure
    */

    // How to use itretors to point at pairs

    vector<pair<int, int>> v_p = {
        {1, 2},
        {3, 4},
        {5, 6},
    };

    vector<pair<int, int>>::iterator it1 = v_p.begin();
    for (it1 = v_p.begin(); it1 != v_p.end(); it1++)
    {
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    // we can use auto keyword that automatically detects data type of variables. it will reduce the syntax of iterators
    // example:
    vector<int> v1 = {22, 33, 44, 55, 66};
    for (auto it2 = v1.begin(); it2 != v1.end(); it2++)

    {
        cout << (*it2) << endl;
    }
    return 0;
}
