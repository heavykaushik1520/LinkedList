#include"node.h"


Node::Node(Emp &e )
{
	data=e;
	next=NULL;
}
Emp Node::getData()
{
	return data;
}
void Node::setData(Emp &e)
{
	data=e;
}
Node* Node::getNext()
{
	return next;
}
void Node::setNext(Node *st)
{
    next=st;
}
