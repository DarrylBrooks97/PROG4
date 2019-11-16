#include "starter-class_Queue.cpp"

int main()
{
    cout<<"\nLet's start working on queue: ";
    cout<<"\n0. Exit\n1. Queue(implemented based on array)\n2. Queue(implemented based on linked list)\n";
    cout<<"Please Enter choice: ";
    int n;
    cin>>n;
    switch (n)
    {
    case 0:
        break;
    case 1:
        queue_arr();
        break;
    case 2:
        queue_list();
        break;
    default:
        cout<<"Invalid Choice";
        break;
    }
    return 0;
}



