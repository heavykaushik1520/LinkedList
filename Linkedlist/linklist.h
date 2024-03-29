#include"node.h"
class Linklist
{
	Node* start;
	public:
	Linklist();
	void insertBeg(int);
    void insertPos(int,int );
	void insertEnd(int );
	void deleteBeg();
    void deletePos(int);
	void deleteEnd();
	void display();
	~Linklist();
};
