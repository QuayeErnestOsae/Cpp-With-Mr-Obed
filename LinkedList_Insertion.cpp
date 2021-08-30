#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* link;
};
Node*head=NULL;
void Insert(int );
void Print();

int main(void)
{
    int J,C,i;
    cout<<"Size of the list please? ";
    cin>>C;

    for(i=0;i<C;i++)
    {
        cout<<"Input your elements";
        cin>>J;
        Insert(J);
        Print();
    }

}


void Insert(int J)
{
    Node* temp=new Node();
    temp->data=J;
    temp->link=head;
    head=temp;
}

void Print()
{
    Node*temp=head;
    cout<<"The linked list is: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
