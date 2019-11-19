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

int size = 100;
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

    if(stack_isEmpty_list()){
        head = new node;
        head->data = data;
        head->next = NULL;
    }else{
        node * newHead = new node;
        newHead->data = data;
        newHead->next = head;
        head = newHead;
    }

}

//----------------------------------------------------------------------
// Function: Pop top element from the stack. 
// The implementation of the stack is based on the LinkedList.
//----------------------------------------------------------------------
void stack_pop_list() //Complete the function stubs needed to implement the operations 
{

    if(stack_isEmpty_list()) cout<<"EMPTY STACK"<<endl;
    else{
        node * trash = head;
        head = head->next;
        trash->next = NULL;
        delete trash;
    }

}

//----------------------------------------------------------------------
// Function: Check if the stack is empty or not 
// The implementation of the stack is based on the LinkedList.
//---------------------------------------------------------------------- 
int stack_isEmpty_list() //Complete the function stubs needed to implement the operations 
{ 
    if(!head)return 1;
    else return 0;
} 

//----------------------------------------------------------------------
// Function: Return top element in a stack. 
// The implementation of the stack is based on the LinkedList.
//----------------------------------------------------------------------
int stack_peek_list() //Complete the function stubs needed to implement the operations 
{
    if(stack_isEmpty_list()) return -999;
    else return head->data;
}

//----------------------------------------------------------------------
// Function:  Print all the elements of the stack.
// The implementation of the stack is based on the LinkedList.
//----------------------------------------------------------------------
void stack_print_list()
{
    node *temp;
    temp = head;
    if (stack_isEmpty_list())
    {
        cout<<"\n\t\tSTACK EMPTY!!\n";
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
    do{
        cout<<"\n\t\t STACK AS LINKED LIST\n";
        cout<<"Choose any option\n";
        cout<<"\n0. Exit\n1. Insert\n2. Delete\n3. Top Element\n4. Print\n5. Back\n";
        int n;
        cin>>n;
        switch (n)
        {
        case 0:
            exit(1);
            break;
        case 1:
            stack_push_list();
            break;
        case 2:
            stack_pop_list();
            break;
        case 3:
            cout<<"Top of the STACK is: "<<stack_peek_list()<<endl;
            break;
        case 4:
            stack_print_list();
            break;
        case 5:
            do{
                cout<<"\n0. Exit\n1. Stack(as array)\n2. Stack(as linked list)\n";
                cout<<"Enter choice: ";
                cin>>n;
                switch (n)
                {
                case 0:
                    exit(1);
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
            }while(1);
            
            break;
        default:
            cout<<"\nInvalid choice\n";
            break;
        }
    }while(1);
    
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

    if(top==size)cout<<"STACK IS FULL TRY POPPING OFF THEN PUSH"<<endl;
    else{
        if(stack_isEmpty_arr()) st[++top] = data;
        else st[++top] = data;
    }

}

//----------------------------------------------------------------------
// Function: Pop top element from the stack.
// The implementation of the stack is based on the array.  
//----------------------------------------------------------------------
void stack_pop_arr() //Complete the function stubs needed to implement the operations 
{
    if(stack_isEmpty_arr())cout<<"EMPTY STACK"<<endl;
    else{
        int temp = st[--top];
    }
}

//----------------------------------------------------------------------
// Function: Check if the stack is empty or not 
// The implementation of the stack is based on the array.
//---------------------------------------------------------------------- 
int stack_isEmpty_arr() //Complete the function stubs needed to implement the operations 
{ 
    if(top==-1) return 1;
    else return 0;
}

//----------------------------------------------------------------------
// Function: Return top element in a stack. 
// The implementation of the stack is based on the array.
//----------------------------------------------------------------------
int stack_peek_arr() //Complete the function stubs needed to implement the operations 
{ 
    if(stack_isEmpty_arr()) return -999;
    else{
        return st[top];
    }
}

//----------------------------------------------------------------------
// Function:  Print all the elements of the stack.
// The implementation of the stack is based on the array. 
//----------------------------------------------------------------------
void stack_print_arr()
{
   cout << "\n\n\n\t\tThe Representation of stack is as follows\n\n";
    if(stack_isEmpty_arr())cout<<"Stack is empty"<<endl;
    else{
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
    do{
        cout<<"\n\t\t STACK AS ARRAY\n";
        cout<<"Choose any option\n";
        cout<<"\n0. Exit\n1. Insert\n2. Delete\n3. Top Element\n4. Print\n5. Back\n";
        int n;
        cin>>n;
        switch (n)
        {
        case 0:
            exit(1);
            break;
        case 1:
            stack_push_arr();
            break;
        case 2:
            stack_pop_arr();
            break;
        case 3:
            cout<<"Top of Stack is: "<<stack_peek_arr()<<endl;
            break;
        case 4:
            stack_print_arr();
            break;
        case 5:
            do{
                cout<<"\n0. Exit\n1. Stack(as array)\n2. Stack(as linked list)\n";
                cout<<"Enter choice: ";
                cin>>n;
                switch (n)
                {
                case 0:
                    exit(1);
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
            }while(1);
            break;
        default:
            cout << "\nInvalid choice\n";
            break;
        }
    }while(1);
    
}
