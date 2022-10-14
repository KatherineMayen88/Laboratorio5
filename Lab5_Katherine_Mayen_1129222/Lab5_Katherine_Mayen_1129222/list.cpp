#include "list.h"
using namespace std;

Lista::Lista()
{
}


void Lista::AddInicio(std::string carta, std::string numero)
{
	Carta* nuevo = new Carta();
	nuevo->numero = numero;
	nuevo->color = carta;

	if (header == nullptr) {
		nuevo->next = nullptr;
		header = nuevo;
	}
	else if (header != nullptr) {
		nuevo->next = header;
		header = nuevo;
	}
}



void Lista::AddFinal(std::string carta, std::string numero)
{
	Carta* nuevo = new Carta();
	nuevo->numero = numero;
	nuevo->color = carta;

	if (header == nullptr) {
		nuevo->next = nullptr;
		header = nuevo;
	}
	else {
		Carta* temp = header;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = nuevo;
	}
}

void Lista::Clear()
{
	header = new Carta();
}

int Lista::Count()
{
	Carta* temp = header;
	int n = 0;
	while (temp) {
		n++;
		Carta* x = temp->next;
		temp = x;
	}
	return n;
}

Carta* Lista::getIndex(int number) {
	Carta* temp = header;
	for (size_t i = 0; i < number; i++)
	{
		temp = temp->next;
	}

	if (temp != nullptr) {
		return temp;

	}
	else {
		Carta* temp2 = new Carta();
		temp2->numero = "";
		temp2->color = "";
		return temp2;
	}
}
Carta* Lista::getFirstItem() {
	Carta* temp = header;
	Carta* temp1 = header->next;
	header = temp1;
	return temp;
}
