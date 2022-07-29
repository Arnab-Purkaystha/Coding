#include <bits/stdc++.h>

using namespace std;

 typedef struct node
{
    int data;
    struct  node* prev;
    struct node* next;
}node;

node* head= NULL;

void InsertBeg(int data)
{
    node* newnode;
    newnode= (node*) malloc(sizeof(node));
    if(head==NULL)
    {
        newnode->data=data;
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
        return;
    }
    newnode->data= data;
    newnode->prev=NULL;
    newnode->next=head;
    head->prev= newnode;
    head= newnode;
}

void InsertEnd(int data)
{
    node* newnode;
    newnode= (node*) malloc(sizeof(node));   
    node* temp=head;
    newnode->data=data;
    newnode->next= NULL;
    newnode->prev= NULL;
    if(temp==NULL)
        {
            head=newnode;
            return;
        }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev= temp;
}

void InsertionMid(int data, int pos)
{
     node* newnode;
    newnode= (node*) malloc(sizeof(node));   
    node* temp=head;
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(temp==NULL)
        {
            head=newnode;
            return;
        }
    int count=1;
    if(temp->next==NULL)
    {
        newnode->prev=temp;
        temp->next=newnode;
    }
    while(count<pos && temp->next!=NULL)
    {   
        count++;
        temp=temp->next;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    newnode->next->prev= newnode;
    temp->next=newnode;
}

void Display()
{
    node* temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int data;
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            InsertBeg(data);
        }
        cout<<"Insertion at Beg: ";
        Display();

        head=NULL;
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            InsertEnd(data);
        }
        cout<<"Insertion at End: ";
        Display();
        
        int pos;
        cin>>pos;
        cin>>data;
        cout<<"Insertion at Mid "<<pos<<" : ";
        InsertionMid(data,pos);
        Display();
        head=NULL;
    }
    
    return 0;
}