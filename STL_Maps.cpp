#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
}

int main(int argc, char const *argv[])
{
    // Maps are a type of container that stores data in key value pair where every key is unique
    map<int, string> m;
    m[1] = "hello";
    m[2] = "test";
    m[3] = "world";
    // we can use find method to find value of a key. it returns an itreator
    auto it = m.find(3);
    cout << it->first << " " << it->second;

    printMap(m);

    return 0;
}
