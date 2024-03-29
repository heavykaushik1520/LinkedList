#include<iostream>
using namespace std;

class Node
{
	int data;
	Node *next,*prev;
	public:
		Node(int);
		int getData();
		void setData(int);
		Node *getPrev();
		void setPrev(Node *);
		Node* getNext();
		void setNext(Node *);	
		~Node();
};

