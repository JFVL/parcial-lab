#include <cstdlib>
#include <iostream>
#include <list>
using namespace std;
#include "colap.h"
#include "Proceso.h"

ColaPrioridad::ColaPrioridad (){}


bool comparar(Proceso p1, Proceso p2){
	if(p1.getPrioridad() >= p2.getPrioridad())
		return true;
	else
		return false;	
}

void ColaPrioridad::adicionar(Proceso p){
	buffer.push_back(p);
	buffer.sort(comparar);
}

void ColaPrioridad::retirar(){
	buffer.pop_front();
}

Proceso ColaPrioridad::obtenerPrimero(){
	Proceso b = buffer.front();
	return b;
}

void ColaPrioridad::mostrarse(){
	list<Proceso>::iterator ip;
	for(ip = buffer.begin(); ip != buffer.end(); ip++){
		Proceso p = *ip;
		p.mostrarse();
	}
}

bool ColaPrioridad::estaVacia(){
	if( buffer.empty() == true ){
		return true;
	}
	else{
		return false;
	}
}

