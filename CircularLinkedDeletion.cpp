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
        this->head=nullptr;
        this->tail=nullptr;
    }
    void InsertionBeg(int data)
    {
        Cllnode* newnode= new Cllnode(data);
        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }

    void DeleteBeg()
    {
        Cllnode* temp=head;
        if(head==nullptr)
        {
            cout<<"List is Empty";
            return;
        }
        head=head->next;
        tail->next=head;
        temp->next=nullptr;
        free(temp);
    }

    void DeleteEnd(){
         Cllnode* temp=head;
        if(head==nullptr)
        {
            cout<<"List is Empty";
            return;
        }
        if(temp->next==nullptr)
        {
            head=nullptr;
            tail=nullptr;
            free(temp);
            return;
        }
        while(temp->next->next!=head)
        {
            temp=temp->next;
        }
        Cllnode* temp1= tail;
        temp->next=head;
        temp1->next=nullptr;
        temp=tail;
        free(temp1);
    }

    void DeleteMid(int pos)
    {
        Cllnode* temp=head;
        if(head==nullptr)
        {
            cout<<"List is Empty";
            return;
        }
        if(temp->next==nullptr)
        {
            head=nullptr;
            tail=nullptr;
            free(temp);
            return;
        }
        int count=1;
        while(count<pos-1 && temp->next!=head)
        {
            count++;
            temp=temp->next;
        }
        if(temp->next==head)
        {
            Cllnode* temp1= tail;
            temp->next=head;
            temp1->next=nullptr;
            temp=tail;
            free(temp1);
        }
        Cllnode* node= temp->next;
        temp->next=node->next;
        node->next=nullptr;
        free(node);
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
{   int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int data;
        Cll* Node = new Cll();
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            Node->InsertionBeg(data);
        }
        cout<<"Insertion from beg: ";
        Display(Node->head);
        cout<<endl;

        cout<<"Deletion from beg: ";
        Node->DeleteBeg();
        Display(Node->head);
        cout<<endl;

        cout<<"Deletion from End: ";
        Node->DeleteEnd();
        Display(Node->head);
        cout<<endl;

        int pos;
        cin>>pos;
         cout<<"Deletion at pos "<<pos<<" : ";
         Node->DeleteMid(pos);
        Display(Node->head);
        cout<<endl;
    }
    return 0;
}