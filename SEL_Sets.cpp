#include <bits/stdc++.h>
using namespace std;

void printSet(set<string> &s)
{
    for (auto element : s)
    {
        cout << element << endl;
    }
}
void printMSet(multiset<string> &s)
{
    for (auto element : s)
    {
        cout << element << endl;
    }
}

int main(int argc, char const *argv[])
{
    // set is a collection of data
    // ordered sets doesnt allow duplicate data
    set<string> s;
    // we can insert element in set by insert function
    s.insert("abc");
    s.insert("bcd");
    s.insert("cde");
    printSet(s);

    // Multiset allows same values to store multiple times
    multiset<string> ms;
    ms.insert("abc");
    ms.insert("bcd");
    ms.insert("cde");
    ms.insert("abc");

    printMSet(ms);
    return 0;
}
