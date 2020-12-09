#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#include "node1.cpp"

// Mid Point of the linked List
node *midPointOfLl(node *head)
{
    //base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// taking input
node *takeInput()
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
    node *head = takeInput();
    cout << midPointOfLl(head)  ;
}