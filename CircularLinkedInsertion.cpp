#include <bits/stdc++.h>

using namespace std;
class Cllnode{
    public:
    int data;
    Cllnode* next;
    Cllnode(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};
class Cll{
    public:
    Cllnode* head;
    Cllnode* tail;
    Cll(){
        this->head= nullptr;
        this->tail=nullptr;
    }
    void InsertionBeg(int data)
    {
        Cllnode* temp=head;
         Cllnode* newnode= new Cllnode(data);
        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->next= head;
        tail->next= newnode;
        head= newnode;
    }

    void InsertionEnd(int data)
    {
         Cllnode* temp=head;
         Cllnode* newnode= new Cllnode(data);
        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next= newnode;
        tail=newnode;
        tail->next=head;

    }
    void InsertMid(int pos, int data)
    {
        Cllnode* temp=head;
         Cllnode* newnode= new Cllnode(data);
        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        if(temp->next==nullptr)
        {
            tail->next=newnode;
            tail=newnode;
            tail->next=head;
            return;
        }
        int count=1;
        while(count<pos && temp->next!=head)
        {   
            count++;
            temp=temp->next;
        }
        if(temp->next==head)
        {
            temp->next=newnode;
            tail=newnode;
            tail->next= newnode;
            return;
        }
        newnode->next=temp->next;
        temp->next=newnode;

    }
};

void Display(Cllnode* head)
{
    Cllnode* temp= head;
    do{
        cout<<"Adress= :"<<temp<<endl;
        cout<<temp->data<<" ";
        cout<<temp->next<<endl;
        temp=temp->next;
    }while(temp!=head);
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
        Cll* node = new Cll();
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            node->InsertionBeg(data);
        }
        cout<<"Insertion from beg: ";
        Display(node->head);
        cout<<endl;

        Cll* node1= new Cll();
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            node1->InsertionEnd(data);
        }
        cout<<"Insertion from End: ";
        Display(node1->head);
        cout<<endl;

        int pos;
        cin>>pos;
        cin>>data;
         cout<<"Insertion at pos "<<pos<<" : ";
         node1->InsertMid(pos,data);
        Display(node1->head);
        cout<<endl;
    }
    return 0;
}