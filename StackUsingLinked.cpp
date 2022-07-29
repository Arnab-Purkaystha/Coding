#include <bits/stdc++.h>

using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class Stack{
    public:
        node*head;
        Stack()
        {
            this->head==NULL;
        }

        void push(int data)
        {
            node* newnode= new node(data);
            if(head==NULL)
                head=newnode;
            else{
                newnode->next=head;
                head=newnode;
            }
        }

        bool isEmpty(){
            return head==NULL;
        }

        int peek(){
            if(isEmpty())
            {
                cout<<"Stack is empty";
                return -1;
            }
            else{
                return head->data;
            }
        }
        int pop(){
            if(isEmpty())
            {
                cout<<"Stack is empty";
                return -1;
            }
            else{
                node* temp =head;
                int ele= head->data;
                head=head->next;
                free(temp);
                return ele;
            }
        }
};
int main()
{
    int n;
    cin>>n;
    Stack st;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin>>ele;
        st.push(ele);
    }

    cout<<"top of stack: "<<st.peek()<<endl;
    cout<<"Popping all ele: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<st.pop()<<endl;
    }
    
    
    return 0;
}