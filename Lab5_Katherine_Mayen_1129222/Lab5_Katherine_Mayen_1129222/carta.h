#pragma once
#include <string>

using namespace std;

struct Carta
{
	//info que almacenar�
	string numero;
	string color;

	//apuntador hacia el siguiente Nodo
	Carta* next;
};
