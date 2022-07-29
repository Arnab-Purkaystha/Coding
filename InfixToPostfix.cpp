#include <bits/stdc++.h>

using namespace std;
class Stack{
    char *arr;
    int top;
    int capacity;
    public:
    Stack()
    {
        this->capacity=1000000;
        arr= new char[capacity];
        top=-1;
    }

    int size()
    {
        return top+1;
    }

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top+1==capacity;
    }

    void push(char data)
    {
        if(isFull())
        {
            cout<<"OverFlow\n";
            return ;
        }
        else{
            top++;
            arr[top]=data;
        }
    }

    char peek(){
        if(isEmpty())
        {
            cout<<" Stack is empty ";
            return -1;
        }
        else{
            return arr[top];
        }
    }

    char pop()
    {
         if(isEmpty())
        {
            cout<<" Stack is empty ";
            return -1;
        }
        else{
            return arr[top--];
        }
    }
};

int prec(char c)
{
    if(c=='^')
        return 3;
    else if(c=='/' || c=='*')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else
        return -1;
}

void infixTopostfix(string s)
{
    Stack st;
    st.push('#');
    int l=s.length();
    string ns;
    for (int i = 0; i < l; i++)
    {
        if((s[i]>='a' && s[i]<= 'z') || (s[i]>='A' && s[i]<= 'Z') )
            ns+=s[i];
        
        else if(s[i]=='(')
            st.push(s[i]);
        
        else if(s[i]==')')
        {
            while (st.peek()!='#' && st.peek()!='(')
            {
                char c= st.pop();
                ns+=c;
            }
            if(st.peek()=='(')
            {
                st.pop();
            }
            
        }

        else{
            while (st.peek()!='#' && prec(s[i])<=prec(st.peek()))
            {
                char c= st.pop();
                ns+=c;
            }
            st.push(s[i]);
            
        }
    }
    while(st.peek()!='#')
    {
        char c= st.pop();
        ns+=c;
    }
    cout<<ns<<endl;
}
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        infixTopostfix(s);
    }
    return 0;
}