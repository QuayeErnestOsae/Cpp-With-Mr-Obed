#include<iostream>
#define SIZE 100
using namespace std;

int A[SIZE];
int Front=-1;
int rear=-1;


bool Isempty()
{
    if (Front== -1 && rear==-1)
    {
        return true;
    }
    else
        return false;
}

void Enqueue(int x)
{
        if(rear==SIZE-1)
    {
        cout<<"Queue is full";
        return;
    }
    else if (Isempty())
    {
        Front=rear=0;
        A[rear]=x;
    }
    else
    {
        rear=rear+1;
        A[rear]=x;
    }
}

void Dequeue()
{
    if(Isempty());
    return;


    else if(Front==rear)
        Front=rear=-1;

        else
        Front=Front+1;
}

void Print()
{
    int i;
    cout<<"The queue is: ";
    for(i=Front;i<=rear;i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;
}



int main(void)
{
    Enqueue(6); Print();
    Enqueue(5); Print();
    Enqueue(4); Print();
    Enqueue(3); Print();
    Enqueue(2); Print();
    Enqueue(1); Print();
    Dequeue();  Print();



}
