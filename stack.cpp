/*Program of STACK*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 10

void push(int item);
int pop();
int peek();
int isFull();
int isEmpty();
void display();

int _stack[MAX];
int top = -1;

int main()
{
    int choice, item;
    while(1)
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display the top element" << endl;
        cout << "4. Display all elements" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice : " ;
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter Element : ";
                cin >> item;
                push(item);
                break;
            case 2:
                cout << "Popped Element : ";
                cout << pop() << endl;
                break;
            case 3:
                cout << "Top Element : ";
                cout << peek() << endl;
                break;
            case 4:
                cout << "Elements in Stack : ";
                display();
                break;
            case 5:
                exit(1);
                break;
            default:
                cout << "Wrong choice " << endl;


        }
    }
}
void push(int item)
{
    if( isFull() )
    {
        cout << "Overflow" << endl;
        exit(1);
    }
    else
    {
        _stack[++top] = item;
    }
}
int pop()
{
    if( isEmpty() )
    {
        cout << "Underflow" << endl;
        exit(1);
    }
    else
    {
        return _stack[top--];
    }
}
int peek()
{
    if( isEmpty() )
    {
        cout << "Underflow" << endl;
        exit(1);
    }
    else
    {
        return _stack[top];
    }
}
int isFull()
{
    if( top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if( top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    int i;
    for( i = top; i >= 0; i--)
    {
        cout << _stack[i] << " ";
    }
    cout << endl;
}
