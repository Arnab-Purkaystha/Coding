#include <bits/stdc++.h>

using namespace std;

class Sllnode{
    public:
    int data;
    Sllnode* next;
    Sllnode(int data)
    {
        this->data= data;
        this->next= nullptr;
    }
};

class Sll{
    public:
    Sllnode* head;
    Sll(){
        this->head= nullptr;
    }
    void Insert_at_Beg(int data)
    {
        Sllnode* newnode= new Sllnode(data);
        if(head==nullptr)
            head= newnode;
        else
        {
            newnode->next=head;
            head= newnode;
        }
    }
    
    void insert_at_End(int data)
    {
        Sllnode* newnode= new Sllnode(data);
        Sllnode* temp= head;
        if(temp==nullptr)
            head= newnode;
        else{
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next= newnode;
        }
    }

    void insert_at_Mid(int data, int pos)
    {
        Sllnode* Node= new Sllnode(data);
        Sllnode* temp= head;
        if(temp==nullptr)
            head= Node;
        else{
            int count=1;
            while(count<pos && temp->next!=nullptr)
            {
                count++;
                temp=temp->next;
            }
            if(temp->next==nullptr)
            {
                temp->next= Node;
            }
            Node->next=temp->next;
            temp->next= Node;
        }
    }

};

void Display(Sllnode* head)
{
        Sllnode* temp= head;
        while (temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        Sll *llist= new Sll();
        int n;
        cin>>n;
        int data;
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            llist->Insert_at_Beg(data);
        }
        cout<<" from begining : ";
        Display(llist->head);

        Sll *slist = new Sll();
         for (int i = 0; i < n; i++)
        {
            cin>>data;
            slist->insert_at_End(data);
        }
        cout<<" from End : ";
        Display(slist->head);
        
        int pos;
        cin>>pos;
        cin>>data;
        llist->insert_at_Mid(data,pos);
        cout<<" from beg :";
        Display(llist->head);

        slist->insert_at_Mid(data,pos);
        cout<<"From end ";
        Display(slist->head);
    }
    
    return 0;
}