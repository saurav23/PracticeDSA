#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#include "node1.cpp"

// Mergeing
node *mergeTwoSortedLinkedList(node *head1, node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node *newHead = NULL;
    node *newTail = NULL;

    if (head1->data < head2->data)
    {
        newHead = head1 ;
        newTail = head1 ;
        head1 = head1->next ;
    }
    else{
        newHead = head2 ;
        newTail = head2 ;
        head2 = head2->next;
    }
    while(head1 != NULL && head2 != NULL){
        if(head1->next < head2->next){
            newTail->next = head1;
            newHead = newTail->next ;
            head1 = head1->next ;
        }
        else
        {
            newTail->next = head2 ;
            newHead = newTail->next ;
            head2 = head2->next ;
        }  
    }

    if(head1 != NULL ){
        newTail -> next = head1 ;
    }
    if(head2 != NULL){
        newTail -> next = head2 ;
    }

    return newHead ;
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

// LinkedList Must be sorted

// main
int main()
{
    node *head1 = takeInput();
    node *head2 = takeInput();
    mergeTwoSortedLinkedList(head1,head2);
     
}