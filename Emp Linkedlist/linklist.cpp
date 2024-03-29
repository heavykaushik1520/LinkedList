#include"linklist.h"
Linklist::Linklist()
{
	start=NULL;
}

void Linklist:: insertPos(Emp& data,int pos )
{
	Node* temp=new Node(data);	//create a new node
    if(start==NULL)
    { 
    	start=temp;
    	return;
	}
	if(pos==1)
	{
	  temp->setNext(start);
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
			p->getData().display();
			cout<<"\n";
			p=p->getNext();
		}
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
    	    p->getData().display();
    	    cout<<" is deleted..!";
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
					q->getData().display();
					cout<<" is deleted";
					p->setNext(q->getNext());
			}
			else
	    	{
	    		cout<<"\nInvalid Position..!";
			}
			
		}
	}
}

Linklist:: ~Linklist()
{
	while(start!=NULL)
	{
		Node *p=start;
		p=start;
		start=start->getNext();
		delete p;
	}
}
