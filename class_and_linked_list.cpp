#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *head, *temp;

void printList()
{
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

void createlist()
{
    head = NULL;
    int size;
    cout << "Enter size of list:";
    cin >> size;
    int node_count = 0;
    while (node_count < size)
    {
        int data;
        cout << "Enter data:";
        cin >> data;
        node *newNode = new node();
        newNode->data = data;
        if (head == NULL)
        {
            head = newNode;
            newNode->next = NULL;
            temp = head;
        }
        else
        {
            newNode->next = NULL;
            temp->next = newNode;
            temp = temp->next;
        }
        node_count++;
    }
}

int main()
{
    createlist();
    printList();
    return 0;
}