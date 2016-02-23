/*
Implementation of stack data structure.
Autor:BSS
Date:23/02/2016 07:31 PM
Version:1.0
*/


#include<iostream>
using namespace std;

//Define a class called Stack and with methods shown below.
class Stack
{
	int SIZE;//to hold maximum number of items 
	int top;//to point to currently pushed item in the stack.
	int items[100];//array to hold the stack items.
	public:
	Stack()
	{
	//when stack instance is created initialise with top =-1 because its not pointing any item.
		top=-1;
	}
	Stack(int size)
	{
	//If stack instance is created with giving size to it then initialise SIZE with the given size.
		SIZE = size;
		top=-1;
	
	}
	//define methods to operate 
	void push(int data);
	void pop();
	void show();
	int is_empty();
	int is_full();
};
//Push method pushed the given data on top of the stack.
void Stack::push(int data)
{
	//Check whether stack is full
	if(!is_full())
	{//If stack is not full then push the given data
		items[++top]=data;//increment the top also.
		cout<<"Data is pushed "<<endl;//tell user that the data is pushed on top of the stack
		cout<<"Top value is "<<top<<endl;
	}
	else 
	{
		//If stack is full then tell the user.
		cout<<"Stack is full"<<endl;
	}
}

//Pops top item in the current stack.
void Stack::pop()
{
	int pop_data;
	//Check whether stack is empty
	if(!is_empty())
	{
	//if stack is not empty then pop the top item.
		pop_data=items[top];
		top--;//decrease pointer to show next top item.
		cout<<"Popped Item is "<<pop_data<<endl;
	}
	else
	{
		cout<<"Stack is empty"<<endl;
	}
}

//check whether stack is empty
int Stack::is_empty()
{
	//if top points to nothing i.e -1 then stack is empty
	if(top==-1)
		return 1;
	else 
		return 0;//stack is not empty
}

//check whether stack is full.
int Stack::is_full()
{
	//if top value equals max size then stack is full
	if(top==100-1)
		return 1;
	else 
		return 0;//stack is not full
}
//show stack items.
void Stack::show()
{
	int i=0;
	if(top!=-1)
	{
		for(i=0;i<=top;i++)
		{
			cout<<items[i]<<" "<<endl;
		}
	}
	else
	{
	//stack is empty here
		cout<<"Stack is empty"<<endl;
	}
}
int main()
{
	Stack s;//create stack instance
	int choice=0,data=0;
	while(1)
	{
	//give options for user to operation on stack
		cout<<"1. Push 2.Pop 3.Show 4.Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"Enter Data to push "<<endl;
				cin>>data;
				s.push(data);
				break;
			case 2: s.pop();
				break;
			case 3: s.show();
				break;
			case 4: return 0;
				break;
			default:cout<<"No choice entered"<<endl;//Default choice
		}
	}
	return 0;
}
