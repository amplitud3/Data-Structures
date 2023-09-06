//cpp program to implement stack using singly linked list
// author: amplitud3

#include<bits/stdc++.h>
using namespace std;


class Node{

public:

    int data;
    Node* link;

    Node(int n)
    {
        this->data = n;
        this->link = NULL;
    }
};


class Stack{

    Node* top;

    public:

        Stack()
        {
            top = NULL;
        }

        void push(int data)
        {
            Node* temp = new Node(data);

            if(!temp){
                
                cout<<"\nStack overflow";
                exit(1);
            }

            temp->data = data;
            temp->link = top;
            top = temp;

        }

        bool isEmpty()
        {
            return top == NULL;
        }


        int peek()
        {
            if(!isEmpty())
                return top->data;
            else
                exit(1);
        }

        void pop()
        {
            Node* temp;

            if(top==NULL)
            {
                cout<<"\nstack underflow"<< "\n";
                exit(1);
            }
            else{

                temp=top;

                top = top->link;

                free(temp);
            }
        }

        void print()
        {
            Node* temp;

            if(top==NULL)
            {
                cout<<"\nstack underflow";
                exit(1);
            }
            else{

                temp=top;

                while(temp != NULL)
                {

                    cout<<temp->data;

                    temp= temp->link;
                    if(temp != NULL)
                        cout<<" -> ";
                }
            }
        }
};


int main()
{

    Stack s;

    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);


    s.pop();
    s.pop();

    s.print();

    return 0;
}