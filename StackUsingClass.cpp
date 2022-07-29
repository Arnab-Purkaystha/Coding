#include <bits/stdc++.h>

using namespace std;
class Stack{
    int top;
    int capacity;
    int *arr;
    public:
    Stack(int capacity)
    {
        this->capacity=capacity;
        top=-1;
        arr= new int[capacity];
    }

    int size(){
        return top+1;
    }

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top+1==capacity;
    }

    void push(int data)
    {
        if(isFull())
        {
            cout<<"Stack is full\n";
            return;
        }
        top++;
        arr[top]=data;
    }

    int peek(){
        if(isEmpty())
        {
            cout<<"stack is empty\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }

    int pop(int data)
    {
        if(isEmpty())
        {
            cout<<"stack is empty\n";
            return -1;
        }
        else
        {
            int ele= arr[top];
            top--;
            return ele;
        }
    }
};
int main()
{
    int n, capacity;
    cin>>capacity>>n;
    Stack st(capacity);
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin>>ele;
        st.push(ele);
    }
    cout<<"Size of stack: "<<st.size()<<endl;
    cout<<"Top of stack: "<<st.peek()<<endl;

    cout<<"Popping all elements: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<st.pop(ele)<<endl;
    }
    
    
    return 0;
}