/*Program of QUEUE*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 10

void _insert(int item);
int _delete();
int peek();
int isFull();
int isEmpty();
void display();

int _queue[MAX];
int rear = -1, _front = -1;

int main()
{
    int choice, item;
    while(1)
    {
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
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
                _insert(item);
                break;
            case 2:
                cout << "Deleted Element : ";
                cout << _delete() << endl;
                break;
            case 3:
                cout << "Top Element : ";
                cout << peek() << endl;
                break;
            case 4:
                cout << "Elements in Queue : ";
                display();
                break;
            case 5:
                exit(1);
                break;
            default:
                cout << "Wrong Choice" << endl;


        }
    }
}
void _insert(int item)
{
    if( isFull() )
    {
        cout << "Overflow" << endl;
        exit(1);
    }
    else if( _front == -1)
    {
        _front = 0;
    }
    _queue[++rear] = item;
}
int _delete()
{
    if( isEmpty() )
    {
        cout << "Underflow" << endl;
        exit(1);
    }
    else
    {
        return _queue[_front++];
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
        return _queue[_front];
    }
}
int isFull()
{
    if( rear == MAX - 1)
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
    if( _front == -1 || _front == rear + 1)
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
    for( i = _front; i <= rear; i++)
    {
        cout << _queue[i] << " ";
    }
    cout << endl;
}
