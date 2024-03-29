#include"node.h"
/////////////////////////
Node::Node(int d)
{
	data = d;
	next = NULL;
	prev = NULL;
}
/////////////////////////
int Node::getData()
{
	return data;
}
/////////////////////////
void Node::setData(int d)
{
	data = d;
}
/////////////////////////
Node* Node::getNext()
{
	return next;
}
/////////////////////////
void Node::setNext(Node *st)
{
	next = st;
}
/////////////////////////
Node* Node::getPrev()
{
	return prev;
}
/////////////////////////
void Node::setPrev(Node *st)
{
	prev = st;
}

///////////////////////////////
Node::~Node()
{
	cout<<"\nNode deleted..";
}

