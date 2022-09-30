#include <bits/stdc++.h>
using namespace std;

// inline functions replaces the function call with function code reducing the computing time

inline int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Result->" << multiply(a, b) << endl; // replaces the code here at every line, decrease computation but increase program size
    cout << "Result->" << multiply(a, b) << endl;
    cout << "Result->" << multiply(a, b) << endl;
    cout << "Result->" << multiply(a, b) << endl;
    cout << "Result->" << multiply(a, b) << endl;
    cout << "Result->" << multiply(a, b) << endl;
    return 0;
}