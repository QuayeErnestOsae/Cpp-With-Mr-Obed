#include<iostream>
    using namespace std;

    struct Node
    {
        int data;
        Node*link;
    };
    Node*Front=NULL;
    Node*rear=NULL;

    bool isEmpty()
    {
        if(Front==NULL &&rear==NULL)
        return true;

        else
            return false;

    }

    void Enqueue(int J)
    {

       Node*temp=new Node();
       temp->data=J;
       temp->link=NULL;

       if(Front==NULL && rear==NULL)
       {
           Front=rear=temp;
       }
        else
        {
            rear->link=temp;
            rear=temp;
        }
    }

    void Dequeue()
    {
        Node* temp=Front;
        if(isEmpty())
        {
            cout<<"Queue is empty";
        }

        else
            temp=temp->link;
    Front=temp;
    }

    void Print()
    {
        Node*temp=Front;
        cout<<"The queue list is: ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;

        }
        cout<<endl;

    }


    int main(void)
    {
        Enqueue(4);     Print();
        Enqueue(3);     Print();
        Enqueue(2);     Print();
        Enqueue(1);     Print();
        Dequeue();     Print();
        Dequeue();     Print();
        Dequeue();     Print();
        Dequeue();     Print();
    }
