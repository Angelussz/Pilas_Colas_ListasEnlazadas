#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "nodo_cola.h"
 
using namespace std;
 
template <class T>
 
class List
{
    public:
        List();
        ~List();
 
        void push(T);
        void pop();
        void print();
 
    private:
        Node<T> *m_head;
        int m_num_nodes;
};

// Constructor por defecto
template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}
 

template<typename T>
void List<T>::push(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;
 
    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->getSiguiente()) {
            temp = temp->getSiguiente();
        }
        temp->setSiguiente(new_node);
    }
    m_num_nodes++;
}
// Imprimir la Lista
template<typename T>
void List<T>::print()
{
    Node<T> *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (temp->getSiguiente() == NULL) cout << "NULL";
                temp = temp->getSiguiente();
        }
  }
  cout << endl << endl;
}


template<typename T>
void List<T>::pop()
{
    if(!m_head)cout<<"no hay elementos"<<endl;
    else
    {
        Node<T>* borrado=m_head;
        m_head=m_head->getSiguiente();
        delete borrado;
        m_num_nodes--;
    }
    
}

template<typename T>
List<T>::~List() {
    for(int i =0 ; i<m_num_nodes ; i++)
    {
        Node<T>* eliminado = m_head;
        m_head = m_head->getSiguiente();
        delete eliminado;
    }
    std::cout << "Memoria liberada" << std::endl;
}
