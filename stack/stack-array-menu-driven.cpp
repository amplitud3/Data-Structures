#include<iostream>
using namespace std;

int stack[100], n=100, top=-1;


void push(int x)
{
    if(top>=n-1)
    {
        cout<<"\nstack overflow\n";
    }
    else
    {
        top++;
        stack[top]=x;
    }
}



void pop()
{
    if(top<=-1)
    {
        cout<<"\nstack underflow\n";
    }
    else
    {
        top--;
    }
}



void print()
{
   if(top>=0)
   {
    for(int i=top;i>=0;i--)
        cout<<stack[i]<<" ";
        
    cout<<"\n";    
   } 
}

int main()
{
    int choice,value;

    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.print"<<endl;
    cout<<"4.exit"<<endl;

    while(1)
    {
        cout<<"Enter choice: "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:{

                cout<<"enter the value : "<<endl;
                cin>>value;
                push(value);
                break;
            }
            case 2:
            {
                pop();
                break;

            }
            case 3:
            {
                print();
                break;

            }
            case 4:
            {
                cout<<"exit"<<endl;
                exit(0);
                
            }
            default:
            {
                cout<<"invalid choice "<<endl;
            }

        }
    }


    return 0;
}