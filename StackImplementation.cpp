#include <bits/stdc++.h>

using namespace std;
typedef struct stack{
    int capacity;
    int top;
    int* arr;
}Stack;

Stack* initialize(int capacity){
    Stack* st= (Stack*) malloc(sizeof(Stack));
    st->capacity=capacity;
    st->top=-1;
    st->arr= (int *) malloc(sizeof(int)*capacity);
    return st;
}

int size(Stack* st)
{
    return st->top+1;
}

int isEmpty(Stack* st)
{
    return st->top==-1;
}

int isFull(Stack* st)
{
    return st->top+1== st->capacity;
}

void Push(Stack* st, int data)
{
    if(isFull(st))
    {
        cout<<"Stack is full\n";
        return;
    }
    st->top=st->top+1;
    st->arr[st->top]=data;
}

int peek(Stack* st)
{
    if(isEmpty(st))
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    return st->arr[st->top];
}

int pop(Stack* st)
{
    if(isEmpty(st))
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    int ele= st->arr[st->top];
    st->top=st->top-1;
    return ele;

}
int main()
{
    int capacity, n;
    cin>>capacity>>n;
    Stack* st = initialize(capacity);
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        Push(st,ele);
    }

    cout<<"Top of stack: "<<peek(st)<<"\n";
    cout<<"Size of stack: "<<size(st)<<endl;
    if(isEmpty(st))
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;
        
    cout<<"Poping all elements\n";
    for (int i = 0; i < n; i++)
    {
       cout<< pop(st)<<endl;
    }
    cout<<"Size of stack after pop: "<<size(st)<<endl;
    if(isEmpty(st))
        cout<<"Stack is empty after pop"<<endl;
    else
        cout<<"Stack is not empty after pop"<<endl;
    
    return 0;
}