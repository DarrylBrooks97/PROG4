#include <iostream>
#include <stdlib.h>

using namespace std;

void stack_list();
void stack_push_list();
void stack_pop_list();
int stack_isEmpty_list();
int peek_list();
void stack_print_list();
void stack_arr();
void stack_push_arr();
void stack_pop_arr();
int stack_isEmpty_arr();
int peek_arr();
void stack_print_arr();

int top = -1;
int st[100];

struct node
{
    int data;
    node *next;
};
node *head = NULL;


//----------------------------------------------------------------------
// Function: Add an element data in the stack. 
// Insert at the beginning
// The implementation of the stack is based on the LinkedList.
// ----------------------------------------------------------------------
void stack_push_list() //Complete the function stubs needed to implement the operations 
{
    int data;
    cout<<"\nEnter data: ";
    cin>>data;


}

//----------------------------------------------------------------------
// Function: Pop top element from the stack. 
// The implementation of the stack is based on the LinkedList.
//----------------------------------------------------------------------
void stack_pop_list() //Complete the function stubs needed to implement the operations 
{


}

//----------------------------------------------------------------------
// Function: Check if the stack is empty or not 
// The implementation of the stack is based on the LinkedList.
//---------------------------------------------------------------------- 
int stack_isEmpty_list() //Complete the function stubs needed to implement the operations 
{ 


} 

//----------------------------------------------------------------------
// Function: Return top element in a stack. 
// The implementation of the stack is based on the LinkedList.
//----------------------------------------------------------------------
int stack_peek_list() //Complete the function stubs needed to implement the operations 
{ 

 
}

//----------------------------------------------------------------------
// Function:  Print all the elements of the stack.
// The implementation of the stack is based on the LinkedList.
//----------------------------------------------------------------------
void stack_print_list()
{
    node *temp;
    temp = head;
    if (head==NULL)
    {
        cout<<"\n\t\tLIST EMPTY!!\n";
    }
    else
    {
        cout<<"\n\n\n\t\tThe Representation of stack(linked list) is as follows\n\n";
        int i=0;
        while (temp != NULL)
        {
            cout<<"\t\t\t" << temp->data << "\n"
                <<"\t\t\t-"
                <<"\n";
            temp=temp->next;
        }
    }
    cin.get();
    stack_list();
}

//----------------------------------------------------------------------
// Function: Linked Stack Manager: Operation Menu
// The functon lists a set of operations, and it allows users to choose 
// the operations.
//----------------------------------------------------------------------
void stack_list()
{
    cout<<"\n\t\t STACK AS LINKED LIST\n";
    cout<<"Choose any option\n";
    cout<<"\n0. Exit\n1. Insert\n2. Delete\n3. Top Element\n4. Print\n5. Back\n";
    int n;
    cin>>n;
    switch (n)
    {
    case 0:
        break;
    case 1:
        stack_push_list();
        break;
    case 2:
        stack_pop_list();
        break;
    case 3:
        stack_peek_list();
        break;
    case 4:
        stack_print_list();
        break;
    case 5:
        cout<<"\n0. Exit\n1. Stack(as array)\n2. Stack(as linked list)\n";
        cout<<"Enter choice: ";
        cin>>n;
        switch (n)
        {
        case 0:
            break;
        case 1:
            stack_arr();
            break;
        case 2:
            stack_list();
            break;
        default:
            cout<<"Invalid Choice";
            break;
        }
        break;
    default:
        cout<<"\nInvalid choice\n";
        break;
    }
}


//----------------------------------------------------------------------
// Function: Add an element data in the stack. 
// The implementation of the stack is based on the array.  
// ----------------------------------------------------------------------
void stack_push_arr() //Complete the function stubs needed to implement the operations 
{
    int data;
    cout << "Enter the data: ";
    cin >> data;



}

//----------------------------------------------------------------------
// Function: Pop top element from the stack.
// The implementation of the stack is based on the array.  
//----------------------------------------------------------------------
void stack_pop_arr() //Complete the function stubs needed to implement the operations 
{


}

//----------------------------------------------------------------------
// Function: Check if the stack is empty or not 
// The implementation of the stack is based on the array.
//---------------------------------------------------------------------- 
int stack_isEmpty_arr() //Complete the function stubs needed to implement the operations 
{ 


} 

//----------------------------------------------------------------------
// Function: Return top element in a stack. 
// The implementation of the stack is based on the array.
//----------------------------------------------------------------------
int stack_peek_arr() //Complete the function stubs needed to implement the operations 
{ 


}

//----------------------------------------------------------------------
// Function:  Print all the elements of the stack.
// The implementation of the stack is based on the array. 
//----------------------------------------------------------------------
void stack_print_arr()
{
   cout << "\n\n\n\t\tThe Representation of stack is as follows\n\n";

   for (int i = top; i >= 0; i--)
   {
     if (i == top)
       {
         cout << "\t\t\t" << st[i] << "<-"
         << "\n"
         << "\t\t\t-"
         << "\n";        
        }
        else
        {
          cout << "\t\t\t" << st[i] << "\n"
          << "\t\t\t-"
          << "\n";
        }
    }
    cin.get();
    stack_arr();
}

//----------------------------------------------------------------------
// Function: Stack (implementation of queue is based on array) Manager: 
// Operation Menu
// The functon lists a set of operations, and it allows users to choose 
// the operations.
//----------------------------------------------------------------------
void stack_arr()
{
    cout<<"\n\t\t STACK AS ARRAY\n";
    cout<<"Choose any option\n";
    cout<<"\n0. Exit\n1. Insert\n2. Delete\n3. Top Element\n4. Print\n5. Back\n";
    int n;
    cin>>n;
    switch (n)
    {
    case 0:
        break;
    case 1:
        stack_push_arr();
        break;
    case 2:
        stack_pop_arr();
        break;
    case 3:
        stack_peek_arr();
        break;
    case 4:
        stack_print_arr();
        break;
    case 5:
        cout<<"\n0. Exit\n1. Stack(as array)\n2. Stack(as linked list)\n";
        cout<<"Enter choice: ";
        cin>>n;
        switch (n)
        {
        case 0:
            break;
        case 1:
            stack_arr();
            break;
        case 2:
            stack_list();
            break;
        default:
            cout<<"Invalid Choice";
            break;
        }
        break;
    default:
        cout << "\nInvalid choice\n";
        break;
    }
}
