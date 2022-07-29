#include <bits/stdc++.h>

using namespace std;
class Dllnode{
    public:
    int data;
    Dllnode* next;
     Dllnode* prev;
     Dllnode(int data)
     {
         this->data=data;
         this->next=nullptr;
         this->prev= nullptr;
     }
};

class Dll{
    public:
    Dllnode* head;
    Dll(){
        this->head= nullptr;
    }

    void InsertionEnd(int data)
    {
        Dllnode* newnode= new Dllnode(data);
        if(head==nullptr)
        {
            head=newnode;
            return;
        }
        head->prev= newnode;
        newnode->next=head;
        head= newnode;
    }

    void DeleteBeg(){
        Dllnode* temp=head;
        if(temp==nullptr)
        {
            cout<<"List is empty ";
            return;
        }
        head= head->next;
        head->prev=nullptr;
        temp->next=nullptr;
        free(temp);
    }

    void DeleteEnd(){
        Dllnode* temp=head;
        if(temp==nullptr)
        {
            cout<<"List is empty ";
            return;
        }
        if(temp->next==nullptr)
        {
            head=nullptr;
            free(temp);
            return;
        }
        while(temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
        Dllnode* del=temp->next;
        temp->next=nullptr;
        del->prev=nullptr;
        free(del);
    }

    void deleteMid(int pos)
    {
        Dllnode* temp=head;
        if(temp==nullptr)
        {
            cout<<"List is empty ";
            return;
        }
        if(temp->next==nullptr)
        {
            head=nullptr;
            free(temp);
            return;
        }   
        int count=1;
        while(count<pos-1)
        {
            count++;
            temp=temp->next;
        }
        Dllnode* temp1= temp->next;
        temp->next= temp1->next;
        temp1->next->prev= temp;
        temp1->next=nullptr;
        temp1->prev=nullptr;
        free(temp1);
    }
};

void Display(Dllnode* head)
{
    Dllnode* temp= head;
    while(temp!=nullptr)
    {
        cout<<temp->data;
        temp=temp->next;
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
        Dll* node= new Dll();
        for (int i = 0; i < n; i++)
        {
            cin>>data;
            node->InsertionEnd(data);
        }
        cout<<"After insertion :";
        Display(node->head);
        cout<<endl;

        cout<<"After deletion from beg: ";
        node->DeleteBeg();
        Display(node->head);
        cout<<endl;

        cout<<"After deletion from end: ";
        node->DeleteEnd();
        Display(node->head);
        cout<<endl;

        int pos;
        cin>>pos;
        cout<<"After deletion from pos "<<pos<<" : ";
        node->deleteMid(pos);
        Display(node->head);
        cout<<endl;
        
    }
    return 0;
}