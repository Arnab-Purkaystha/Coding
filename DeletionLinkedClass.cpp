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
            this->head=nullptr;
        }
        void InsetionBeg(int data)
        {
            Sllnode* newnode= new Sllnode(data);
            if(head==nullptr)
            {
                head=newnode;
            }
            else{
            newnode->next= head;
            head=newnode;
            }
        }

        void DeleteBeg()
        {
            Sllnode* temp= head;
            if(temp==NULL)
            {
                cout<<"Linked List is empty";
                return;
            }
            head= head->next;
            free(temp);
        }

        void DeleteEnd(){
            Sllnode* temp= head;
            if(temp==nullptr){
                cout<<"List is empty";
                return;
            }
            if(temp->next==nullptr)
            {
                head=nullptr;
                free(temp);
                return;
            }
            Sllnode* temp1;
            while (temp->next->next!=nullptr)
            {
                temp= temp->next;
            }
            temp1= temp->next;
            temp->next= nullptr;
            free(temp1);
        }

        void deleteMid(int pos)
        {
             Sllnode* temp= head;
            if(temp==nullptr){
                cout<<"List is empty";
                return;
            }
            if(temp->next==nullptr)
            {
                head=nullptr;
                free(temp);
                return;
            }
            Sllnode* temp1;
            int count=1;
            while(count< pos-1)
            {
                temp=temp->next;
            }
             temp1= temp->next;
             temp->next= temp->next->next;
             free(temp1);
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
        int n;
        cin>>n;
        int data;
        Sll* llist = new Sll();
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            llist->InsetionBeg(data);
        }
        cout<<"After insertion";
        Display(llist->head);
        cout<<endl;

        cout<<" After deleting from front: ";
        llist->DeleteBeg();
        Display(llist->head);
        cout<<endl;

         cout<<" After deleting from end: ";
        llist->DeleteEnd();
        Display(llist->head);
        cout<<endl;

        int pos;
        cin>>pos;
        cout<<" After deleting from Ele "<<pos<<": ";
        llist->deleteMid(pos);
        Display(llist->head);
        cout<<endl;        
    }
    
    return 0;
}