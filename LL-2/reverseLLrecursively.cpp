#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#include "node1.cpp"

node* reverseLL(){

}


// ---------------------------------------------------------
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
// ---------------------------------------------------------


// main
int main(){

    node * head = takeInputBetter() ;
    printnode(head) ;
    cout<<endl <<"_______________________________________" ;
    

}