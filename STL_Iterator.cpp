#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    // iterators are like pointer taht points at memory address of containers
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::iterator it = v.begin(); //.begin() points at the first of element of the container and .end() points at next to last element of the container
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << endl;
    }
    return 0;
}
