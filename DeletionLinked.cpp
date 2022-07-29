#include <bits/stdc++.h>

using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}node;

node* head=NULL;

void Insertion(int data)
{
    node* newnode= (node*) malloc(sizeof(node));
    newnode->data= data;
    newnode->next= head;
    head= newnode;
}

void DeleteFromBeg(){
    node* temp=head;
    if(temp==NULL)
    {
        cout<<"Linked List is empty";
        return;
    }
    head= head->next;
    free(temp);
}

void DeleteEnd(){
    node* temp= head;
    if(temp==NULL){
        cout<<"Linked List is empty";
        return;
    }
    if(temp->next==NULL)
    {
        head= NULL;
        free(temp);
        return;
    }
    while(temp->next->next!=NULL)
        temp= temp->next;

    node* del;
    del= temp->next;
    temp->next= NULL;
    free(del);
}

void DeleteMid(int pos)
{
    node* temp= head;
    if(temp==NULL)
    {
         cout<<"Linked List is empty";
        return;
    }

    if(temp->next==NULL)
    {
        head=NULL;
        free(temp);
        return;
    }
    int count=1;
    while(count<pos-1)
    {
        count++;
        temp=temp->next;
    }

    node* del= temp->next;
    temp->next= temp->next->next;
    del->next= NULL;
    free(del);
}

void Display( )
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int data;
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            Insertion(data);
        }

        cout<<" after insertion all elements: ";
        Display();
        cout<<endl;
        
        cout<<"after deletion from beg: ";
        DeleteFromBeg();
        Display();
        cout<<endl;

        cout<<"after deletion from end: ";
        DeleteEnd();
        Display();
        cout<<endl;

        int pos;
        cin>>pos;
         cout<<"after deletion from mid "<<pos<<": ";
        DeleteMid(pos);
        Display();
        cout<<endl;

        head=NULL;
        
    }
    return 0;
}