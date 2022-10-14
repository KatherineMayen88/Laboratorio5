#pragma once
#include <string>

using namespace std;

struct Carta
{
	//info que almacenará
	string numero;
	string color;

	//apuntador hacia el siguiente Nodo
	Carta* next;
};
