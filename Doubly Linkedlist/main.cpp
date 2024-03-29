#include "dll.h"
/////////////////////////////////////////

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int choice=0;
	DLL lt;
	
	while(choice!=10)
	{
		cout<<"\n\t\t1.Insert at the position.";
		cout<<"\n\t\t2.Display";
		cout<<"\n\t\t3.Delete at the position.";
		cout<<"\n\t\t4.Exit.";
		cout<<"\nEnter your choice :";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int data,pos;
					cout<<"\nEnter data and pos ";
					cin>>data>>pos;
					lt.InsertAtPos(data,pos);
				}
				break;
			case 2:
				lt.display();
				break;
			case 3:
					{
					int pos;
					cout<<"\nEnter Position To Delete ";
					cin>>pos;	
					lt.DeleteAtPos(pos);
					}
				break;
			case 4:
				{
					cout<<"\Exited...!";
				}
				default:
					cout<<"\Enter Valid Choice";
				break;
		 }
	}
	
	return 0;
}

