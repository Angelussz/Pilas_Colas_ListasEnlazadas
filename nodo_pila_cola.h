
#include <iostream>
 
using namespace std;
 
template <class T>
 
class Node
{
	private:
		Node *next;
        T data;
    public:
        Node(T);
        ~Node();
        void delete_all();
        void print();
        void setSiguiente(Node<T>*);
		void setDato(T);
		Node<T>* getSiguiente();
		T* getDato();
};
//Constructor
template<typename T>
Node<T>::Node(T data_)
{
    data = data_;
    next = NULL;
}
// Eliminar todos los Nodos
template<typename T>
void Node<T>::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}

//darle valor nodo siguiente
template<class T>
void Node<T>::setSiguiente(Node<T>* sig) {next = sig;}
//darle valor a dato
template<class T>
void Node<T>::setDato(T dato) {this->data = dato;}

//entrar a nuevo nodo privado sgt
template<class T>
Node<T>* Node<T>::getSiguiente() {return next;}

template<class T>
T* Node<T>::getDato() { return &data;}
// Imprimir un Nodo
template<typename T>
void Node<T>::print()
{
    //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
    cout << data << "-> ";
}
 
template<typename T>
Node<T>::~Node() {}
