/*
 * Nodo.h
 *
 *  Created on: 21 sept 2023
 *      Author: crist
 */

#ifndef NODO_H_
#define NODO_H_

#include<iostream>
#include<string>

using namespace std;

class Nodo {
	int valor;
public:
	Nodo *sig;
	Nodo();
	Nodo(int valor);
	void setValor(int valor);
	int getValor();
};

#endif /* NODO_H_ */
