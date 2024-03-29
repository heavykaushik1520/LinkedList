#include"emp.h"

class Node
{
	Emp data;
	Node *next;
	public:
		Node (Emp &);
		Emp  getData();
		void setData(Emp &);
		Node* getNext();
		void setNext(Node*);
};

