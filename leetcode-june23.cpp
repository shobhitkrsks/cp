#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
} * head;

ListNode* reverseBetween(ListNode* head, int left, int right) 
{
    int nodeNum=1;
    ListNode* temp=head;
    while(nodeNum!=left)
    {
        temp=temp->next;
        nodeNum++;
    }

    stack<int> data;
    while(nodeNum<=right)
    {
        data.push(temp->val);
        temp=temp->next;
        nodeNum++;
    }

    temp=head;
    nodeNum=1;
    while(nodeNum!=left)
    {
        temp=temp->next;
        nodeNum++;
    }

    while(nodeNum<=right)
    {
        temp->val=data.top();
        data.pop();
        temp=temp->next;
        nodeNum++;
    }

    return head;
}

void addNode(int data)
{
    ListNode *node = new ListNode();
    node->val = data;
    node->next = NULL;

    if (head == NULL)
    {
        head = node;
        return;
    }
    else
    {
        ListNode *temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = node;
    }
}

void printList()
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    int t;

    head = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        addNode(t);
    }

    int left, right;
    cin >> left >> right;

    reverseBetween(head, left, right);
    printList();

    return 0;
}