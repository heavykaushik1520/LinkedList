#include<iostream>
using namespace std;

class Node
{
	int data;
	Node *next;
	public:
		Node(int);
		int getData();
		void setData(int);
		Node* getNext();
		void setNext(Node*);
	
};
