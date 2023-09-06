#include<iostream>
using namespace std;

int queue[100], n=100, front = -1, rear =-1;


void insert()
{
    int value;
    if(rear == n-1)
    {
        cout<<"Queue overflow"<<endl;
    }
    else
    {
        if(front == -1)
        {
            front=0;
        }
        cout<<"enter the element : "<<endl;
        cin>>value;
        rear++;
        queue[rear] = value;

    }
}

void deletee()
{
    if(front == -1 || front > rear)
    {
        cout<<"queue underflow";
        return;
    }
    else
    {
        front++;
    }
}


void print()
{
    if(front == -1)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        for(int i=front; i<= rear; i++)
        {

        cout<<queue[i]<<" ";

        }
        cout<<endl;
    }
}



int main()
{
    int choice;
    cout<<"1.insert"<<endl;
    cout<<"2.delete"<<endl;
    cout<<"3.print"<<endl;
    cout<<"4.exit"<<endl;

    while(1)
    {
        cout<<"enter the choice : "<<endl;
        cin>>choice;
        
        switch(choice)
        {
            case 1: insert();
            break;

            case 2: deletee();
            break;

            case 3: print();
            break;

            case 4: {
                cout<<"exit"<<endl;
                exit(0);
            }
            default: cout<<"invalid choice"<<endl;
        }

    }

    return 0;
}