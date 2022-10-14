#pragma once
#include <string>
#include "carta.h"


class Lista
{

public:
	/// <summary>
	/// Apuntador al primer Nodo dentro de la lista (cabeza)
	/// </summary>
	Carta* header = nullptr;

public:

	Lista();
	/// <summary>
	/// Agrega un elemento al FINAL de la lista
	/// </summary>
	/// <param name="item">Elemento a agregar</param>
	void AddInicio(std::string carta, std::string numero);

	void AddFinal(std::string carta, std::string numero);


	/// <summary>
	/// Elimina todos los elementos de la Lista.
	/// </summary>
	void Clear();

	/// <summary>
	/// Cuenta la cantidad de elementos en la lista
	/// </summary>
	/// <returns>Cantidad de elementos en la lista</returns>
	int Count();


	Carta* getIndex(int number);
	Carta* getFirstItem();


};