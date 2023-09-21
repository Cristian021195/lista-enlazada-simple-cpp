//============================================================================
// Name        : ListaEnlazadaSimple.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include "Nodo.h"
#include "Lista.h"
using namespace std;

int main() {
	//Nodo * n1 = new Nodo(3); cout << n1->getValor() << endl;
	Lista * L1 = new Lista();
	L1->insertNode(1);L1->insertNode(2); L1->insertNode(4); L1->insertNode(1); L1->insertNode(5);
	L1->printList();
	L1->deleteNode(1);
	L1->printList();

	return 0;
}
