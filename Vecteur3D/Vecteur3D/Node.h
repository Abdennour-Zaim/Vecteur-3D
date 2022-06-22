#pragma once

//typedef int T;
template<class T>

class Node
{
public: 
	Node(T data); 
	void afficher() const;
//	Node* get_next() const;// en Lecture
//	void set_next(Node* n); //en Ecriture
	~Node(); 
	template<class T> friend class Stack;

private: 
	T  data;
	Node<T> * next;
	
};




template<class T> 
Node<T>::Node(T data)
{
	this->data = data;
	this->next = nullptr;
}
template<class T>

void Node<T>::afficher() const
{
	std::cout << this->data << std::endl;
}

template<class T>
Node<T>::~Node()
{
	std::cout << "destructeur de Node" << std::endl;
}
