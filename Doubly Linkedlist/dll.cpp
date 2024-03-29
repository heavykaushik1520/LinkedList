#include"dll.h"
////////////////////////////
DLL::DLL()
{
	start = NULL;
}
///////////////////////////////////
void DLL::InsertAtPos(int data,int pos)
{
	Node *temp = new Node(data);
	if(start == NULL)
	{
		start = temp;
		return;
	}
	if(pos == 1)
	{
		temp->setNext(start);
		start->setPrev(temp);
		start = temp;
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
	temp->setPrev(p);
	p->setNext(temp);
	if(temp->getNext()!=NULL)
	{
		temp->getNext()->setPrev(temp);
	}
}
/////////////////////////////////////////
void DLL::DeleteAtPos(int pos)
{
	Node *p = start;
	if(start == NULL)
	{
		cout<<"\nNo nodes to Delete";
		return;
	}
	if(pos==1)
	{
		if(start->getNext()==NULL)
		{
			start=NULL;
		}
		start=start->getNext();
		start->setPrev(NULL);
		cout<<p->getData()<<" is deleted";
		delete p;
	}
	else 
	{
	   int i=1;
	   while(i<pos && p->getNext()!=NULL)
	   {
		i++;
		p=p->getNext();
	   }
		p->getPrev()->setNext(p->getNext());
		p->getNext()->setPrev(p->getPrev());
		cout<<p->getData()<<" is deleted";
		delete p;
		if(p->getNext()==NULL)
		{
			p->getPrev()->setNext(NULL);
			cout<<p->getData()<<" is deleted";
			delete p;
		}
		
	}

	
}
//////////////////////////////////////
void DLL::display()
{
	if(start == NULL)
	{
		cout<<"\nNo nodes to display";
		return;
	}
	else
	{
		Node *p=start;
		while(p!=NULL)
		{
			cout<<"\t"<<p->getData();
			p=p->getNext();
		}
	}
}
