#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, rev_str;
    getline(cin, str);
    for (int i = str.size() - 1; i >= 0; i--)
    {
        rev_str.push_back(str[i]); // pushing characters from str into rev_str one by one in reverse order
    }
    if (str == rev_str)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}