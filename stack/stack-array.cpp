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
    push(5);
    push(10);
    push(15);
    push(20);
    push(25);

    pop();
    pop();

    print();

    return 0;
}