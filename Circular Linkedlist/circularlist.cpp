#include"circularlist.h"
Circular::Circular()
{
	last=NULL;
}

void Circular:: insertPos(int data,int pos )
{
	Node* temp=new Node(data);	//create a new node
    if(last==NULL)
    { 
    	last=temp;
    	last->setNext(last);
    	
	}
	if(pos==1)
	{
	  temp->setNext(last->getNext());//attach the new node first
      last->setNext(temp) ;
	}
	Node *p=last->getNext();
	int i=1;
	while(i<pos-1 && p!=last)
	{
		i++;
		p=p->getNext();
	}
	temp->setNext(p->getNext());
	p->setNext(temp);
	if(p==last)
	{
		last=temp;
	}
}
void Circular::display()
{
	if(last==NULL)
	{
		cout<<"\nNo Nodes To Display...";
		
	}
	else 
	{
		Node *p=last->getNext();
		while(p!=last)
		{
			cout<<p->getData()<<"\t";
			p=p->getNext();
		}
    	cout<<p->getData()<<"\t";
	}
}

void Circular:: deletePos(int pos)
{	
     if(last==NULL)
	{
		cout<<"\nNo Nodes To Delete...";
		return ;
	}
	else
    {
    	Node *p=last->getNext();
    	if(pos==1)
    	{
    		if(last->getNext()==last)
    		{
    		  
    		  cout<<p->getData()<<" is deleted..!";
    		  delete p;
    		  last=NULL;
			}
    	    last->setNext(p->getNext());
    	    cout<<p->getData()<<" is deleted..!";
    	    delete p;
		}
		else
	    {
	    	int i=1;
	    	while(p!=last && i<pos-1 )
	    	{
	    	  p=p->getNext();
	    	  i++;
			}
			if(i==pos-1)
			{
					Node *q=p->getNext();
					p->setNext(q->getNext());
					if(last==q)
					{
						last=p;
					}
					cout<<q->getData()<<" is deleted";
					delete q;
					q=NULL;
			}
			else
	    	{
	    		cout<<"\nInvalid Position..!";
			} 
		}
	}
}

Circular:: ~Circular()
{	  
    Node *p=last->getNext();
		while(last!=NULL)
		{
			p=last;
			delete p;
		}
}
