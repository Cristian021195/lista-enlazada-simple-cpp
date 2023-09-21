/*
 * Lista.cpp
 *
 *  Created on: 21 sept 2023
 *      Author: crist
 */

#include <iostream>
#include "Lista.h"
#include "Nodo.h"

using namespace std;

Lista::Lista() {
	head = NULL;
}

Lista::~Lista() {
	cout << "Eliminada lista" << endl;
}

void Lista::insertNode(int val){
	Nodo * n = new Nodo(val);
	if(head == NULL){
		head = n;
		return;
	}

	Nodo * tmp = head;
	while(tmp->sig != NULL){
		tmp = tmp->sig;
	}

	tmp->sig = n;
}
void Lista::printList(){
	Nodo *p = head;

	if(head == NULL){
		cout << "Lista Vacia" << endl; return;
	}

	while(p != NULL){
		cout << "[" << p->getValor() << "]";
		p = p->sig;
	}
	cout << endl;

}
void Lista::deleteNode(int val){
	Nodo * aux = head;
	if(head != NULL){
		if(aux->getValor() == val){
			head = aux->sig;
			delete aux;
		}

	}else{
		cout << "Lista vacia" << endl;
	}
}
/*void Lista::deleteNode(int val){
	Nodo * prev = head;
	Nodo * next = head->sig;
	Nodo * aux;
	if(head != NULL){
		while(prev != NULL){
			if(prev->getValor() == val && next->getValor() == val){
				prev = prev->sig->sig;
				next = next->sig->sig;
			}else if(prev->getValor() == val){
				prev = prev->sig;
				next = next->sig;
			}else if(prev->getValor() != val){

			}
		}
	}else{
		cout << "Lista vacia" << endl;
	}
}*/

