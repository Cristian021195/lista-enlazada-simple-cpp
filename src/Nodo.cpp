/*
 * Nodo.cpp
 *
 *  Created on: 21 sept 2023
 *      Author: crist
 */

#include <iostream>
#include "Nodo.h"

Nodo::Nodo(){
	setValor(0);
	sig = NULL;
}

void Nodo::setValor(int val){
	valor = val;
}
int Nodo::getValor(){
	return valor;
}

Nodo::Nodo(int val){
	setValor(val);
	sig = NULL;
}

