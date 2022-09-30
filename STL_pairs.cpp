#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p, q, s; // pair can be used to make pair of 2 different data types
    p = make_pair(1, "Dog");   // pair can be created with make_pair function
    q = {2, "Cat"};            // Pair can also be created with 2nd bracked
    cin >> s.first;            // we can take input with cin also
    cin >> s.second;
    cout << p.first << " " << p.second << endl; // Pair can be printed with pair_name.first and pair_name.second
    cout << q.first << " " << q.second << endl;
    cout << s.first << " " << s.second << endl;
    // we can make pair of array also
    pair<int, int> arr[3];
    arr[0] = {1, 2};
    arr[1] = {3, 4};
    arr[2] = {5, 6};
    swap(arr[0], arr[2]); // it will swap the pair;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    return 0;
}