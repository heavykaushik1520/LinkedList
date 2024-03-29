#include "linklist.h"
int main()
{
	int choice=0;
	Linklist lt;
	while(choice!=8)
	{
	cout<<"\n1.Insert At the Beginnig:";
	cout<<"\n2.Insert At the Middle:";
	cout<<"\n3.Insert At the End:";
	cout<<"\n4.Display:";
	cout<<"\n5.Delete At the Beginnig:";
	cout<<"\n6.Delete At the Middle:";
	cout<<"\n7.Delete At the End:";
	cout<<"\n8.Exit:";
	cout<<"\nEnter You Choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
		int data;
		cout<<"\n Enter Data:";
		cin>>data;
		lt.insertBeg(data);
		}
		break;
		case 2:{
			
		int data,pos;
		cout<<"\n Enter Data:";
		cin>>data>>pos;
		lt.insertPos(data,pos);	
		}
		break;
		case 3:{
			int data;
		cout<<"\n Enter Data:";
		cin>>data;
		lt.insertEnd(data);	
		
		}
		break;
		case 4:
		{
			lt.display();
		
		}
		break;
		case 5:
		{
			lt.deleteBeg();
		
		}
		break;
		case 6:
		{
		int pos;
		cout<<"\n Enter Position To Delete:";
		cin>>pos;
		lt.deletePos(pos);
		
		}
		break;
		case 7:
		{
			lt.deleteEnd();
		
		}
		break;
		case 8:{
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
