#include "linklist.h"
int main()
{
	int choice=0;
	Linklist lt;
	while(choice!=5)
	{
	cout<<"\n1.Insert At the Position:";
	cout<<"\n2.Display";
	cout<<"\n3.Delete At the Position:";
	cout<<"\n4.Exit";
	cout<<"\nEnter You Choice:";
	cin>>choice;
	switch(choice)
	{
		
		case 1:
		{
		char name[20];
		int id;
		double salary;	
		int pos;
		cout<<"\nEnter The ID:";
		cin>>id;
		cout<<"\nEnter The Name:";
		cin>>name;
		cout<<"\nEnter The Salary:";
		cin>>salary;
		Emp e1(id,name,salary);
		cout<<"\n Enter Position:";
		cin>>pos;
		lt.insertPos(e1,pos);	
		}
		break;
		case 2:
		{
			lt.display();
		
		}
		break;
		case 3:
		{
		int pos;
		cout<<"\n Enter Position To Delete:";
		cin>>pos;
		lt.deletePos(pos);
		}
		break;
		case 4:{
				cout<<"\nExited";
		}
		break;
		default:
		{
			cout<<"\nEnter Valid Choice:";
		}
		break;
	    }
       }
	return 0;
}
