#include <bits/stdc++.h>

using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}node;

node* Head=NULL;

void insertion(int data)
{
    node * newnode;
    newnode =(node*)malloc(sizeof(node));
    newnode->data= data;
    newnode->next=Head;
    Head=newnode;
}

void insertionEnd(int data)
{
    node* newnode= (node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    node *temp=Head;
    if(temp==NULL)
    {
        Head= newnode;
        return;
    }
    while(temp->next!=NULL)
       { temp=temp->next;}
    temp->next=newnode;
}

void insertionBetwn(int data, int pos)
{
    node *temp= Head;
    node* newnode= (node*)malloc(sizeof(node));
    newnode->data= data;
    newnode->next= NULL;
    if(temp==NULL)
    {
        Head= newnode;
        return;
    }
    int count=1;
    while(count<pos && temp->next!=NULL)
    {
        count++;
        temp= temp->next;
    }
    if(temp->next==NULL)
    {
        temp->next= newnode;
        return;
    }
    newnode->next= temp->next;
    temp->next= newnode;
}

void printLink()
{
    node* temp= Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    int n;
    cin>>n;
    int data;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        insertion(data);
    }
    cout<<"printing from beg ";
    printLink();
    cout<<"\n";
    Head=NULL;

    for (int i = 0; i < n; i++)
    {
        cin>>data;
        insertionEnd(data);
    }
    cout<<"printing from end ";
    printLink();
    cout<<"\n";

    int pos;
    cin>>pos;
    cin>>data;
    insertionBetwn(data,pos);
    cout<<"printing in betwn ";
    printLink();
    cout<<"\n";
    Head=NULL; //to remove extra and previous space
    
    return 0;
}