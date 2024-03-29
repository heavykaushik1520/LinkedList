#include"circularlist.h"
int main()
{
	int choice=0;
	Circular lt;
	while(choice!=9)
	{
	cout<<"\n1.Insert At the Position:";
	cout<<"\n2.Display:";
	cout<<"\n3.Delete At the Position:";
	cout<<"\n4.Exit:";
	cout<<"\nEnter You Choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
		int data,pos;
		cout<<"\nEnter Position:";
		cin>>pos;
		cout<<"\nEnter Data:";
		cin>>data;
		lt.insertPos(data,pos);	
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
	
		case 9:{
				cout<<"\nExited";
				return 0;
		}
		break;
		default:
		{
			cout<<"\nEnter Valid Choice:";
		}
		break;
	    }
    }
    
}
