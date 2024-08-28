#include <cassert>
#include <string>
#include <iostream>
#include "TAD/avl.cpp"
using namespace std;

void mostrar(int a){
    cout<< a<< endl;
}

int main()
{
    int cantDatos = 0;
    cin >> cantDatos;
    AVL<int> * arbol= new AVL<int>;
    for(int i=0; i<cantDatos; i++) {
        //pedir numeros
        int dato = 0;
        cin >> dato;
        // guardar en avl
        arbol->insert(dato);
    }
    arbol->inOrder(mostrar);
    return 0;
}
