#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // stack==first in last out
    stack<int> s;
    s.push(1); // we can insert element in stack by .push method
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << endl; // top lets us see the top most element in stack
        s.pop();                 // we can remove methods by .pop method
    }

    // Queue== first in first out

    queue<string> q;

    q.push("abc");
    q.push("bcd");
    q.push("cef");

    while (!q.empty())
    {
        cout << q.front() << endl; // front to used to access first element in queue
        q.pop();
    }

    return 0;
}
