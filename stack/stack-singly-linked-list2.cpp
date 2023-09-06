//used the struct to implement the linked list
//author: amplitud3

#include<bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    node* link;
};


struct node* head;

void push(int x)
{
    node* temp;
    temp = new node();
    temp->data = x;
    temp->link = head;
    head=temp;
}

bool isEmpty()
{
    if(head==NULL)
        return true;
    else
        return false;
}



int peek()
{
            if(!isEmpty())
                return head->data;
            else
                exit(1);
        }


void pop()
{
    node* temp;

    if(isEmpty())
    {
        cout<<"stack is empty\n";
    }
    else
    {
        temp=head;
        head=head->link;
        delete(temp);
    }
}


void print()
{
    struct node* temp;

    if(isEmpty())
    {
        cout<<"\nstack is empty"<<"\n";
    }
    else
    {
        temp = head;
        while(temp != NULL)
                {

                    cout<<temp->data;

                    temp= temp->link;
                    if(temp != NULL)
                        cout<<" -> ";
                } 
    }
}


int main()
{

    push(5);
    push(10);
    push(15);
    push(20);
    push(25);

    pop();
    pop();
    
    print();
    
}