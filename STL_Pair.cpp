#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // pair is a container that holds two data types in pair
    //  we can declear pair wth pair keyword, the two data types inside an pair can be different
    pair<int, string> p;
    // we can inirtialize pair with curly brackets
    p = {1, "akib"};
    // we can access elements of pair by pair_name.first and pair_name.second
    cout << p.first << " " << p.second << endl;
    // we can also inirtialize pair by make_pair
    p = make_pair(2, "akiur");
    cout << p.first << " " << p.second << endl;
    return 0;
}
