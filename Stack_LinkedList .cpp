#include<Iostream>
using namespace std;

struct Node
{
	int data;
	Node* link;
};
Node* top=NULL;

void Push(int x)
{
	Node* temp=new Node();
	temp->data=x;
	temp->link=top;
	top=temp;
}


void Pop()
{
	Node* temp;
	if(top==NULL)
	{
		cout<<"No element to pop";
		return;
	}
	temp=top;
	top=top->link;
	delete(temp);

}

void Print()
{

    Node* temp=top;
    cout<<"The Stack is:";
    while(temp!=NULL)
    {

        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

int main()
{
	Push(5);	Print();
	Push(6);	Print();
	Push(7);	Print();
	Push(8);	Print();
	Pop();	    Print();
	Pop();	    Print();
	Pop();	    Print();



}
