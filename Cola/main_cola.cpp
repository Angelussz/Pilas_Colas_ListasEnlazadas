#include <iostream>
#include "lista_cola.h"
using namespace std;
int main()
{
    
    List<int> list_2;
    cout << "COLA:" << endl;
    list_2.push(1);
    list_2.push(2);
    list_2.push(3);
    list_2.push(4);
    list_2.push(5);
    list_2.print();
    list_2.pop();
    list_2.print();
    return 0;
}
