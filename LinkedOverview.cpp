#include <bits/stdc++.h>

using namespace std;
struct node{
    int data;
    struct node * next;
};

struct node * createList(struct node * head)
{
    struct node *newNode, *temp;
    for (int i = 1; i <=5; i++)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        if(newNode==NULL)  //checking memory is allocated or not
        {
            cout<<"memory full";
            return head;
        }
        newNode->data=i;
        newNode->next=NULL;

        if(head==NULL)
        {
            head= newNode;
            temp= head;
        }

        temp->next= newNode;
        temp= newNode;
    }
    return head;
}

void printList(struct node *head){   //we are passing value not adress of head, we are passing it as pointer because head itself is a                                       pointer
    // int temp= head;
    while(head!=NULL){
        cout<<head->data;
        head= head->next;
    }
}
int main()
{
    struct node * head= NULL;
    head= createList(head);
    printList(head);
    return 0;
}