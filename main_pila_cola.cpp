#include <iostream>
#include "lista_pila.h"
using namespace std;
int main()
{
    List<int> list_1;
    List<int> list_2;
    cout << "PILA:  " << endl;
    list_1.pila_push(1);
    list_1.pila_push(2);
    list_1.pila_push(3);
    list_1.pila_push(4);
    list_1.pila_push(5);
    list_1.print();
    cout<<endl;
    cout << "COLA:" << endl;
    list_2.cola_push(1);
    list_2.cola_push(2);
    list_2.cola_push(3);
    list_2.cola_push(4);
    list_2.cola_push(5);
    list_2.print();
    return 0;
}
