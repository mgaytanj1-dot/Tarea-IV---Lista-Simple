#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {

    Nodo* head = NULL;
    Nodo* actual = NULL;

    int valor;
    char opcion = 's';

    int cantidad = 0;
    int suma = 0;

    while(opcion == 's') {

        cout << "Ingrese un numero: ";
        cin >> valor;

        // Crear nodo dinámicamente
        Nodo* nuevo = new Nodo;

        nuevo->dato = valor;
        nuevo->siguiente = NULL;

        // Insertar nodo en la lista
        if(head == NULL) {
            head = nuevo;
            actual = nuevo;
        } else {
            actual->siguiente = nuevo;
            actual = nuevo;
        }

        cantidad++;
        suma += valor;

        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> opcion;
    }

    // Recorrer lista
    cout << "\nLista generada:\n\n";

    Nodo* temp = head;

    while(temp != NULL) {
        cout << temp->dato << " -> ";
        temp = temp->siguiente;
    }

    cout << "NULL\n";

    double promedio = (double)suma / cantidad;

    cout << "\nCantidad de nodos: " << cantidad << endl;
    cout << "Suma de valores: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
