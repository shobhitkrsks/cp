#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
struct Node* addTwoLists(struct Node* first, struct Node* second);
void push(struct Node** head_ref, int new_data) {
    struct Node* new_Node = new Node(new_data);
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}
void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
void freeList(struct Node* Node) {
    struct Node* temp;
    while (Node != NULL) {
        temp = Node;
        Node = Node->next;
        free(temp);
    }
}
int main(void) {
    int t, n, m, i, x;
    cin >> t;
    while (t--) {
        struct Node* res = NULL;
        struct Node* first = NULL;
        struct Node* second = NULL;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> x;
            push(&first, x);
        }
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> x;
            push(&second, x);
        }
        res = addTwoLists(first, second);
        printList(res);
        if (first) freeList(first);
        if (second) freeList(second);
    }
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
// write a function returns the resultant linked list
Node* addTwoLists(Node* first, Node* second) 
{
    int sum=0,carry=0,i=0;
    Node* temp1=first;
    Node* temp2=second;

    Node* dummy=new Node(0);
    Node* mobile=dummy;

    while(temp1!=NULL && temp2!=NULL)
    {
        sum=temp1->data+temp2->data+carry;
        carry=(sum>=10)?1:0;
        sum=sum%10;
        
        temp1->data=sum;
        
        mobile->next=temp1;
        mobile=temp1;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    while(temp1!=NULL)
    {
        sum=temp1->data+carry;
        carry=(sum>=10)?1:0;
        sum=sum%10;

        temp1->data=sum;

        mobile->next=temp1;
        mobile=temp1;
        temp1=temp1->next;
    }

    while(temp2!=NULL)
    {
        sum=temp2->data+carry;
        carry=sum/10;
        sum=sum%10;

        temp2->data=sum;

        mobile->next=temp2;
        mobile=temp2;
        temp2=temp2->next;
    }

    mobile->next=NULL;

    return dummy->next;
}