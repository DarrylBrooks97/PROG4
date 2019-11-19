#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void queue_list();
void queue_enQueue_list();
void queue_deQueue_list();
int queue_isEmpty_list(); 
void queue_print_list();
void queue_arr();
void queue_enQueue_arr();
void queue_deQueue_arr();
int queue_isEmpty_arr(); 
void queue_print_arr();

int fron = -1;
int endi = -1;
int q[100];
int size = 0;

struct node
{
    int data;
    node *next;
};
node *head = NULL;


//----------------------------------------------------------------------
// Function: Add an element data in the queue. 
// The implementation of the queue is based on the LinkedList.
// ----------------------------------------------------------------------
void queue_enQueue_list() //Complete the function stubs needed to implement the operations 
{
    int data;
    cout<<"\nEnter data: ";
    cin>>data;
	
	if(!head){
		head = new node;
		head->data = data;
		head->next = NULL;
	}else{
		node * temp = new node;
		temp->data = data;
		temp->next = head;
		head = temp;
	}

}

//----------------------------------------------------------------------
// Function: Remove an element from the queue. 
// The implementation of the queue is based on the LinkedList.
//----------------------------------------------------------------------
void queue_deQueue_list() //Complete the function stubs needed to implement the operations 
{
	node * curr = head;
	node * prev = curr;
	
	if(!head){
		cout<<"Empty Queue";
	}else{
		while(curr->next!=NULL){
		prev = curr;
		curr = curr->next;
		}
	
		prev->next = NULL;
		delete curr;
	}
	
}

//----------------------------------------------------------------------
// Function: Check if the queue is empty or not 
// The implementation of the queue is based on the LinkedList.
//---------------------------------------------------------------------- 
int queue_isEmpty_list() //Complete the function stubs needed to implement the operations 
{ 
	if(!head) return 1;
	else return 0;
} 

//----------------------------------------------------------------------
// Function: Print all the elements of the queue.
// The implementation of the queue is based on the LinkedList.
//----------------------------------------------------------------------
void queue_print_list() 
{
    node *temp;
    temp=head;
    if (queue_isEmpty_list())
    {
        cout<<"\n\t\tLIST EMPTY!!\n";
    }
    else
    {

        cout<<"\n\n\n\t\tThe Representation of queue is as follows\n\n";
        cout<<"\t\t\t\t";
        while (temp!=NULL)
        {
            cout<<temp->data << " | ";
            temp=temp->next;
        }
    }
    cin.get();
    queue_list();
}

//----------------------------------------------------------------------
// Function: Linked Queue Manager: Operation Menu
// The functon lists a set of operations, and it allows users to choose 
// the operations. 
//----------------------------------------------------------------------
void queue_list()
{
	int n;
	do{
		cout<<"\n\t\t QUEUE AS LINKED LIST\n";
    cout<<"Choose any option\n";
    cout<<"\n0. Exit\n1. Insert\n2. Delete\n3. Print\n4. Back\n";
    n = -1;
    cin>>n;
    switch (n)
    {
    case 0:
        exit(1);
		break;
    case 1:
        queue_enQueue_list();
        break;
    case 2:
        queue_deQueue_list();
        break;
    case 3:
        queue_print_list();
        break;
    case 4:
		do{
			cout<<"\n0. Exit\n1. Queue(as array)\n2. Queue(as linked list)\n";
			cout<<"Enter choice: ";
			n = -1;
			cin>>n;
			switch (n)
			{
			case 0:
				exit(1);
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
		 }while(n!=0);
        break;     
    default:
        cout<<"\nInvalid choice\n";
        break;
    }

	}while(n!=0);
}


//----------------------------------------------------------------------
// Function: Add an element data in the queue. 
// The implementation of the queue is based on the array.  
// ----------------------------------------------------------------------
void queue_enQueue_arr() //Complete the function stubs needed to implement the operations
{
    int data;
    cout<<"\nEnter data to be inserted: ";
    cin>>data;

    endi = (endi + 1) % 100;
    q[endi] = data;
    ++size;
}

//----------------------------------------------------------------------
// Function: Remove an element from the queue.
// The implementation of the queue is based on the array.  
//----------------------------------------------------------------------
void queue_deQueue_arr() //Complete the function stubs needed to implement the operations 
{
    if (queue_isEmpty_arr()) cout<<"Queue is empty"<<endl;
    else{
        fron = (fron + 1) % 100;
        int temp = q[fron];
        --size;
    }
}

//----------------------------------------------------------------------
// Function: Check if the stack is empty or not 
// The implementation of the stack is based on the array.
//---------------------------------------------------------------------- 
int queue_isEmpty_arr() //Complete the function stubs needed to implement the operations 
{ 

    if(size==0) return 1;
    else return 0;

} 

//----------------------------------------------------------------------
// Function: Print all the elements of the queue.
// The implementation of the queue is based on the array. 
//----------------------------------------------------------------------
void queue_print_arr()
{
    cout << "\n\n\n\t\tThe Representation of queueue is as follows\n\n";
    cout << "\t\t\t\t";
    if(queue_isEmpty_arr()){
        cout<<"Queue is empty"<<endl;
        cout<<size<<endl;
    }
    else{
        for (int i=endi;i>fron;i--)
        {
            cout<<q[i]<<" | ";
        }
        cout<<"\nFront= "<<fron;
        cout<<"\nEnd= "<<endi<<endl;
    }
    
    cin.get();
    queue_arr();
}

//----------------------------------------------------------------------
// Function: Queue (implementation of queue is based on array) Manager: 
// Operation Menu
// The functon lists a set of operations, and it allows users to choose 
// the operations.
//----------------------------------------------------------------------
void queue_arr()
{
	int n;
	do{
		cout<<"\n\t\t QUEUE AS ARRAY\n";
		cout<<"Choose any option\n";
		cout<<"\n0. Exit\n1. Insert\n2. Delete\n3. Print\n4. Back\n";
		n = -1;
		cin>>n;
		switch (n)
		{
		case 0:
			exit(1);
			break;
		case 1:
			queue_enQueue_arr();
			break;
		case 2:
			queue_deQueue_arr();
			break;
		case 3:
			queue_print_arr();
			break;
		case 4:
			do{
				cout<<"\n0. Exit\n1. Queue(as array)\n2. Queue(as linked list)\n";
				cout<<"Enter choice: ";
				n = -1;
				cin>>n;
				switch (n)
				{
				case 0:
					exit(1);
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
			}while(1);
			break; 
		default:
			cout<<"\nInvalid choice\n";
			break;
		}
		}while(1);
    
}
