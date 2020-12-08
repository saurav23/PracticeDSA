#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#include "node1.cpp"

node *append(node *head, int n)
{
    // base case
    if (n == 0 || head == NULL)
    {
        return head;
    }

    node *fast = head;
    node *slow = head;
    node *intialhead = head;

    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }

    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    node *temp = slow->next;
    slow->next = NULL;
    fast->next = intialhead;
    head = temp;

    return head;
}

// print
void printnode(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

// taking input
node *takeInputBetter()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }

        cin >> data;
    }
    return head;
}

// main
int main()
{
    node *head = takeInputBetter();
    cout << "--------------------" << endl;
    // printnode(head);
    int n;
    cin >> n;
    head = append(head, n);
    printnode(head);
    // ---------------------------
    cout << endl;
    return 0;
}

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         node *head = takeInputBetter();
//         int n;
//         cin >> n;
//         head = append(head, n);
//         printnode(head);
//     }
//     cout << endl;
//     return 0;
// }