#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &m)
{
    cout << "Size: " << m.size() << endl;
    for (auto value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
}

void printUMap(unordered_map<int, string> &m)
{
    cout << "Size: " << m.size() << endl;
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
    auto it = m.find(3);                    // finds the value of key inserted
    cout << it->first << " " << it->second; // we can use -> instead of * to point at the value of iterator
    cout << endl;

    printMap(m);

    m.erase(3); // removes the key value of pair of provided key

    printMap(m);

    // Maps can be unordered as well. it doesnt sort the keys. Time complexity: O(1)
    unordered_map<int, string> um;
    um[3] = "hello";
    um[1] = "test";
    um[2] = "world";
    printUMap(um);

    return 0;
}
