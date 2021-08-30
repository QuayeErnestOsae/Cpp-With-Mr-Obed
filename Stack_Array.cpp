#include<iostream>
#define SIZE 100
using namespace std;
int A[SIZE];
int top=-1;

void Push(int x)
{
    if(top==SIZE-1)
    {
        cout<<"Error:stack Overflow"<<endl;
        return;
    }
    top=top+1;
    A[top]=x;
}

void Pop()
{
    if(top==-1)
    {
        cout<<"Error:NO element to pop"<<endl;
    }
    top=top-1;

}
int Top()
{
    return A[top];
}

void Print()
{
    int i;
cout<<"The stack is: ";
for(i=0;i<=top;i++)
{
    cout<<A[i]<<" ";

}
    cout<<endl;
}


int main()
{
    Push(7);    Print();
    Push(6);    Print();
    Push(5);    Print();
    Push(4);    Print();
    Push(3);    Print();
    Push(2);    Print();
        Pop();  Print();
        Pop();  Print();
        Pop();  Print();
        Pop();  Print();
        Pop();  Print();


}
