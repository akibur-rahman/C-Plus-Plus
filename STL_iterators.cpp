/*
Iterators are pointer like stucture
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>::iterator it = vec.begin();       // it has to be defined with 2 colons ::iterator it .. .begin() points at the begining
    cout << (*it) << endl;                        // we can get the value of the data iterator pointing by using * operator
    cout << (*(it + 3)) << endl;                  // we can traverse it if it is pointing at contigious memory
    for (it = vec.begin(); it != vec.end(); it++) // with iteraor, we can traverse the whole data type from it.begin to it.end
    {
        cout << (*it) << endl;
    }

    return 0;
}