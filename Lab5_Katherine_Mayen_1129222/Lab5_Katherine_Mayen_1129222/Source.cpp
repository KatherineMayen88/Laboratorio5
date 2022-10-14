#include "list.h"
#include "iostream"
#include <vector>
#include <algorithm>


using namespace System;
using namespace std;


void mostrarJuego(string mazo, string grupo1, string grupo2, string grupo3, string grupo4, string grupo5, string grupo6, string grupo7) {
    cout << "" << endl;
    cout << "Juego Actual:" << endl;
    cout << "Deck: " << mazo << endl;
    cout << "Grupo No. 01: " << grupo1 << endl;
    cout << "Grupo No. 02: " << grupo2 << endl;
    cout << "Grupo No. 03: " << grupo3 << endl;
    cout << "Grupo No. 04: " << grupo4 << endl;
    cout << "Grupo No. 05: " << grupo5 << endl;
    cout << "Grupo No. 06: " << grupo6 << endl;
    cout << "Grupo No. 07: " << grupo7 << endl;
    cout << "" << endl;
}

void Solitario() {

    Lista lmazo = Lista();
    Lista lgroup1 = Lista();
    Lista lgroup2 = Lista();
    Lista lgroup3 = Lista();
    Lista lgroup4 = Lista();
    Lista lgroup5 = Lista();
    Lista lgroup6 = Lista();
    Lista lgroup7 = Lista();

    //1, 2, 3, 4, 5, 6, 7, 8, 9, 10, J = 11, Q = 12, K = 13
    // Create deck 10 cards
    //generate rand 

    for (int i = 0; i <= 13; i++)
    {
        int random = rand() % 2;
        int randCartas = rand() % 13;
        if (random == 1) {

            string carta = "N" + to_string(randCartas);
            lmazo.AddFinal(carta, carta);
        }
        else {
            string carta = "R" + to_string(randCartas);
            lmazo.AddFinal(carta, carta);
        }
    }

    mostrarJuego(lmazo.getIndex(0)->numero, lgroup1.getIndex(0)->numero, lgroup2.getIndex(0)->numero, lgroup3.getIndex(0)->numero, lgroup4.getIndex(0)->numero, lgroup5.getIndex(0)->numero, lgroup6.getIndex(0)->numero, lgroup7.getIndex(0)->numero);


    while (lmazo.Count() > 0) {
        cout << "desea sacar una carta del mazo? 1.Si / 2.No" << endl;
        int option = 0;
        cin >> option;
        if (option == 1) {
            string group = "";
            cout << "a que grupo desea moverla? 1 | 2 | 3 | 4 | 5 | 6 | 7" << endl;
            cin >> group;
            Carta* temp = lmazo.getFirstItem();
            if (group == "1") {
                lgroup1.AddInicio(temp->numero, temp->color);
            }
            else if (group == "2") {
                lgroup2.AddInicio(temp->numero, temp->color);
            }
            else if (group == "3") {
                lgroup3.AddInicio(temp->numero, temp->color);
            }
            else if (group == "4") {
                lgroup4.AddInicio(temp->numero, temp->color);
            }
            else if (group == "5") {
                lgroup5.AddInicio(temp->numero, temp->color);
            }
            else if (group == "6") {
                lgroup6.AddInicio(temp->numero, temp->color);
            }
            else if (group == "7") {
                lgroup7.AddInicio(temp->numero, temp->color);
            }

            mostrarJuego(lmazo.getIndex(0)->numero, lgroup1.getIndex(0)->numero, lgroup2.getIndex(0)->numero, lgroup3.getIndex(0)->numero, lgroup4.getIndex(0)->numero, lgroup5.getIndex(0)->numero, lgroup6.getIndex(0)->numero, lgroup7.getIndex(0)->numero);
        }
        else {
            mostrarJuego(lmazo.getIndex(0)->numero, lgroup1.getIndex(0)->numero, lgroup2.getIndex(0)->numero, lgroup3.getIndex(0)->numero, lgroup4.getIndex(0)->numero, lgroup5.getIndex(0)->numero, lgroup6.getIndex(0)->numero, lgroup7.getIndex(0)->numero);
        }
    }
}

int main()
{
    Solitario();
    return 0;
}