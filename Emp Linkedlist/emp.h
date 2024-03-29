#include<iostream>
#include<string.h>
using namespace std;
/////////////////////////////
class Emp
{
	int eid;
	char ename[20];
	double basic;
	public:
		Emp();
		Emp(int,char *,double);
		void display();
		int getEid();
};
