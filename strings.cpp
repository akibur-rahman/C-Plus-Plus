#include <bits/stdc++.h>
using namespace std;

int main()
{
    string first_name, last_name, name, newstring; // strings can be dicleared directly
    cout << "Enter First Name:";
    cin >> first_name; // cin can take string as input. But can take multiple words beacause of spaces
    cout << "Enter Last Name:";
    cin >> last_name;
    name = first_name + " " + last_name; // strings can be added together by plus operator
    cout << "Name is:" << name << endl;
    if (first_name == last_name) // strings can be compared by == operator
    {
        cout << "First Name and Last Name is Same." << endl;
    }
    else
    {
        cout << "First Name and Last Name is not Same." << endl;
    }
    cout << name[4] << endl;     // an specific character of string can be accesed by index
    cout << name.size() << endl; // we can know the size of the string by using size() function
    getline(cin, newstring);     // getline() takes full line as string including spaces
    cout << newstring << endl;
    return 0;
}