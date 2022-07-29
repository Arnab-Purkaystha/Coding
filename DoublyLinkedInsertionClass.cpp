#include <bits/stdc++.h>

using namespace std;

class dll{
    public:
        int data;
        dll* next;
        dll* prev;
        dll(int data)
        {
            this->data=data;
            this->next=nullptr;
            this->prev=nullptr;
        }
};

class llist{
    public:
        dll* head;
        llist()
        {
            this->head= nullptr;
        }

        void InsertionBeg(int data)
        {
            dll* newnode= new dll(data);
            if(head==nullptr)
            {
                head=newnode;
                return;
            }
            newnode->next=head;
            head->prev=newnode;
            head= newnode;
        }

        void InsertionEnd(int data)
        {
             dll* newnode= new dll(data);
            dll* temp= head;
            if(temp==nullptr)
            {
                head=newnode;
                return;
            }
            if(temp->next!=nullptr)
                temp=temp->next;
            temp->next=newnode;
            newnode->prev=temp;
        }

        void InsertMid(int data, int pos)
        {
            dll* newnode= new dll(data);
            dll* temp= head;
            if(temp==nullptr)
            {
                head=newnode;
                return;
            }
            int count=1;
            while(count<pos && temp->next!=nullptr)
            {
                count++;
                temp=temp->next;
            }    
            if(temp->next==nullptr)
            {
                temp->next=newnode;
                newnode->prev= temp;
                return;
            }  
            newnode->next=temp->next;
            newnode->prev=temp;   
            newnode->next->prev= newnode;
            temp->next=newnode;   
        }
};

void Display(dll* head)
{
    dll* temp= head;
    while (temp!=nullptr)
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
        llist* node = new llist();
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            node->InsertionBeg(data);
        }
        cout<<"Insertion at Beg: ";
        Display(node->head);
        
        llist* node1= new llist();
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            node1->InsertionEnd(data);
        }
        cout<<"Insertion at End: ";
        Display(node1->head);
        cout<<endl;

        int pos;
        cin>>pos;
        cin>>data;
        cout<<" insertion at pos "<<pos<<" : ";
        node1->InsertMid(data,pos);
        Display(node1->head);
    }
    
    return 0;
}