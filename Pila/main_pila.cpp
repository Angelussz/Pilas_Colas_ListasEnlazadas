#include <iostream>
#include "lista_pila.h"
using namespace std;
int main()
{
    List<int> list_1;
    
    cout << "PILA:  " << endl;
    list_1.push(1);
    list_1.push(2);
    list_1.push(3);
    list_1.push(4);
    list_1.push(5);
    list_1.print();
    list_1.pop();
    list_1.print();
    return 0;
}
