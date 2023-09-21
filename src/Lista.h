/*
 * Lista.h
 *
 *  Created on: 21 sept 2023
 *      Author: crist
 */

#ifndef LISTA_H_
#define LISTA_H_

#include "Nodo.h"
#include <iostream>
#include <string>

using namespace std;

class Lista {
	Nodo * head;
public:
	Lista();
	void insertNode(int);
	void printList();
	void deleteNode(int);
	virtual ~Lista();
};

#endif /* LISTA_H_ */
