#include"emp.h"
Emp::Emp()
{
	eid=0;
	strcpy(ename,"");
	basic=0;
}
Emp::Emp(int id,char *nm,double bs)
{
	eid = id;
	strcpy(ename,nm);
	basic = bs;
}
void Emp::display()
{
	cout<<"\nID :"<<eid;
	cout<<"\tNAME :"<<ename;
	cout<<"\tSALARY:"<<basic;
}
int Emp::getEid()
{
	return eid;
}
