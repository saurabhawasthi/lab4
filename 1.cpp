# lab4
//a)
--------------------------------------------------------------------------------------------------------------------
stack using linked list
---------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
// createing a class node
class node  
{
	public:
	int data;  // data of the node
	node*next; // point to next node
};
// create a class stackll
class stackll
{
	public:
	node*top; 
	// default constructor to initillize 
	stackll()
	{
		top=NULL;
    }
    // function to insert the new node in stack
	void push(int x)
	{
		node*temp=new node;
		temp->data=x;
		temp->next=NULL;
		if(top!=NULL)
		 temp->next=top;
	     top=temp;
    }
   // function to delete the node from stack		
	void pop()
	{ 
	    // checking  if stack is empty or not
        if(top==NULL)
        {
        	cout<<endl<<"Stack is empty....\n";
		}
		node*temp;
		temp=top;
		top=top->next;
		delete temp;
    }
    // function to diplay the data of stack
	void display()
	{   
		if(top==NULL)
		{
			cout<<"Stack is empty ...";
		}
		node*print;
		print=top;
		while(print!=NULL)
		{
			cout<<print->data<<endl;
			print=print->next;
		}
	}
};
int main()
{
	int ch;
	stackll s; // creating the object of class stackll
	do
	{
	cout<<"\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit \n";
	cout<<"Enter your choice(1-4) : ";
	cout<<endl<<"---------------------------------------------------\n";
	cin>>ch;
	switch(ch)
	{
		case 1: int x;
		        cout<<"Enter your data  : ";
		        cin>>x;
		        s.push(x);break;
	    case 2: s.pop();
	            break;
	    case 3:s.display();break;
	    default:return 0;
	}
}while(ch!=4);
return 0;
}
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
b)
queue with using linked list :
-----------------------------------------------------
#include<iostream>
using namespace std;
class node{
	public: 
	int data;   // data of node
	node*next;  // point to next node
	
};
class Q{
    public:
	node *front,*rear;
	// default constructor to initilize the front and rear 
	Q()  
	{
	 front=NULL; 
	 rear=NULL;
	}
	// function to insert data in the Queue
	void push(int x)   // x=data given by the user
	{
		node*temp=new node;    // create a new node
		temp->data=x;          // initillizing value in data of node
		// checking if queue is empty or not 
		if(front==NULL)
		 {
		  front=temp;
		  rear=temp;
		  rear->next=NULL;
		 }
		 else
		     {
		     	rear->next=temp;
		     	rear=temp;
		    	rear->next=NULL;
			 }
			 temp->next=NULL;
	}
	// function to delete node from queue 
	void pop()
	{ node *temp;
		if(front==NULL)
		cout<<"\n Queue is empty";
		else
		 {
		 	temp=front;
		 	front=front->next;
		 	delete temp;
		 }
	}     
	// function to display the data of queue
	void display()
	{
        node*print;
		print = front;	 
	 	if(front==NULL)
	cout<<"\n Queue is empty";
	else
	{
	while(print!=NULL)
	{
		cout<<print->data<<endl;
		print=print->next;
	}
	}
	}
};
int main()
{
	int ch;Q q;
	do{
	cout<<"\n1.Push \n 2.Pop \n 3.Display \n 4.Exit";
	cout<<"enter your choice  (1-4) : ";
	cin>>ch;
    cout<<"----------------------------------------------------------";cout<<endl;	
	switch(ch)
	{
		case 1:int x;
		cout<<"Enter the data :";cin>>x;
		q.push(x);
		break;
	    case 2:q.pop();
	     break;
	     case 3:q.display();break;
	     default :return 0;
}
} while(ch!=4);
return 0;
}
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
c)
stack using array
---------------------------------------------------------------------------
#include<iostrem>
using namespace std;
class StackArr
{
             int stk[20];
             int top;
      public:
             StackArr()
              {
                top=-1;
              }
             void push(int x)
              {
                 if(top >  19)
                       {
                           cout <<"\n \nSTACK OVERFLOW !!!";
                           return;
                       }
                 stk[++top]=x;
                 cout <<"\nInserted " <<x<<endl;
               }
             void pop()
               {
                  if(top <0)
                   {
                         cout <<"\n \nSTACK UNDERFLOW !!!";
                         return;
                    }
                    cout <<"\nDeleted" <<stk[top--]<<endl;
                }
             void display()
               {
                   cout<<"\n \n";
                   if(top<0)
                    {
                            cout <<" EMPTY STACK !!!!";
                            return;
                    }
                    for(int i=top;i>=0;i--)
                    cout <<stk[i] <<" -> ";
                    cout<<"NULL";
                }
};
int main()
{
  StackArr SAR;
  SAR.push(12);
  SAR.push(23);
  SAR.push(34);
  SAR.display();
  SAR.pop();
  SAR.display();
  return 0;
}
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
d) Queue using array
-------------------------
#include<iostream>
using namespace std;
class QueueArr
{
              int queue1[20];
              int rear,front;
      public:
              QueueArr()
                {
                     rear=-1;
                     front=-1;
                }
              void enqueue(int x)
               {
                   if(rear >  19)
                    {
                       cout <<"\nQUEUE OVERFLOW !!!";
                       front=rear=-1;
                       return;
                    }
                    queue1[++rear]=x;
                    cout <<"\nInserted " <<x<<endl;
               }
              void dequeue()
               {
                   if(front==rear)
                     {
                         cout <<"\n \nUNDERFLOW !!!";
                         return;
                     }
                     cout <<"\n \nDeleted " <<queue1[++front];
                }
              void display()
               {
                   cout<<"\n \n";
                   if(rear==front)
                     {
                          cout <<"\n \nEMPTY !!!!";
                          return;
                     }
                   for(int i=front+1;i<=rear;i++)
                   cout <<queue1[i]<<" -> ";
                   cout<<"NULL";
               }
};
int main()
{
  QueueArr QAR;
    QAR.enqueue(12);
  QAR.enqueue(23);
  QAR.enqueue(34);
  QAR.display();
  QAR.dequeue();
  QAR.display();
  
  return 0;
}
