#pragma once
//#include"Node.h"
template< class T>  class Node;
template< class T> 
class Stack
{
public: 
	Stack();
	void push(Node<T>* n);
	void pop();
	bool is_empty() const; 
	void print() const;
	Node<T>* top() const;
	~Stack(); 
	static int cpt;

private: 
	Node<T>* Head;
	
};
/* intialisation d'une variable statique*/
template< class T>
int Stack<T>::cpt = 0;

template< class T>
Stack<T>::Stack()
{ 
	Stack<T>::cpt++;
	this->Head = nullptr;
}
template< class T>
void Stack<T>::push(Node<T>* n)
{
	//n->set_next(this->Head);
	n->next = this->Head;
	this->Head = n;
}
template< class T>
void Stack<T>::pop()
{
	Node<T>* tmp = this->Head;
	this->Head = this->Head->next;
	delete tmp;  //destructeur
	tmp = nullptr;
}
template< class T>
bool Stack<T>::is_empty() const
{
	return (this->Head == nullptr);
}
template< class T>
void Stack<T>::print() const
{
	Node<T>*tmp = this->Head;
	while (tmp != nullptr) {
		tmp->afficher();
		tmp = tmp->next;
	}

}
template< class T>
Node<T>* Stack<T>::top() const
{
	return this->Head;
}
template< class T>
Stack<T>::~Stack()
{
	Stack<T>::cpt--;
	while (this->is_empty() != false) {
		this->pop();
	}
}


