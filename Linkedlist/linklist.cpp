#include"linklist.h"
Linklist::Linklist()
{
	start=NULL;
}
void Linklist:: insertBeg(int d)
{
      Node* temp=new Node(d);	//create a new node
      temp->setNext(start);//attach the new node first
      start= temp;
}
void Linklist:: insertPos(int data,int pos )
{
	Node* temp=new Node(data);	//create a new node
    if(start==NULL)
    { 
    	start=temp;
    	return;
	}
	if(pos==1)
	{
	  temp->setNext(start);//attach the new node first
      start= temp;
      return;
	}
	Node *p=start;
	int i=1;
	while(i<pos-1 && p->getNext()!=NULL)
	{
		i++;
		p=p->getNext();
	}
	temp->setNext(p->getNext());
	p->setNext(temp);
}
void Linklist:: insertEnd(int data)
{
    Node* temp=new Node(data);	//create a new node
    if(start==NULL)
    { 
    	start=temp;
    	return;
	}
	else {
		Node* p=start;
		while(p->getNext()!=NULL)
		{
			p=p->getNext();
		}
		p->setNext(temp); 
	}
}
void Linklist::display()
{
	if(start==NULL)
	{
		cout<<"\nNo Nodes To Display...";
		
	}
	else 
	{
		Node *p=start;
		while(p!=NULL)
		{
			cout<<p->getData()<<"\t";
			p=p->getNext();
		}
	}
}
void Linklist:: deleteBeg()
{ 
    if(start==NULL)
	{
		cout<<"\nNo Nodes To Delete...";
		return ;
	}
	else
    {
    	Node *p= start;
    	start=start->getNext();
    	cout<<p->getData()<<" is deleted..!";
    	delete p;
	}
}
void Linklist::  deletePos(int pos)
{	
     if(start==NULL)
	{
		cout<<"\nNo Nodes To Delete...";
		return ;
	}
	else
    {
    	Node *p=start;
    	if(pos==1)
    	{
    	    start=start->getNext();
    	    cout<<p->getData()<<" is deleted..!";
    	    delete p;
    	    return;
		}
		else
	    {
	    	int i=1;
	    	while(p->getNext()!=NULL && i<pos-1 )
	    	{
	    	  p=p->getNext();
	    	  i++;
			}
			if(i==pos-1)
			{
					Node *q=p->getNext();
					cout<<q->getData()<<" is deleted";
					p->setNext(q->getNext());
			}
			else
	    	{
	    		cout<<"\nInvalid Position..!";
			}
			
		}
	}
}
void Linklist:: deleteEnd() 
{
	  if(start==NULL)
	{
		cout<<"\nNo Nodes To Delete...";
		return ;
	}
	else
    {
    	Node *p=start;
     	if(p->getNext()==NULL)
     	{
     		cout<<p->getData()<<" is deleted..!";
         	delete p;
         	start=NULL;
         	return;
		}
		else
	    {
	    	while(p->getNext()->getNext()!=NULL)
	    	{
	    		p=p->getNext();
			}
		}
    	cout<<p->getNext()->getData()<<" is deleted..!";
    	delete p->getNext();
		p->setNext(NULL);
   }
}
Linklist::~Linklist()
{
	while(start!=NULL)
	{
	  Node *p=start;
		start=start->getNext();
		delete p;
	}
}
