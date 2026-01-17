#include <iostream>
#include <string>
using namespace std;
class Nodo {
public:
    Estudiante dato;
    Nodo* siguiente;

    Nodo(Estudiante e) : dato(e) {
        siguiente = nullptr;
    }
};

class ListaEnlazada {
private:
    Nodo* head;

public:
    ListaEnlazada() {
        head = nullptr;
    }

    void agregarEstudiante(string nombre, float nota) {
        Estudiante e(nombre, nota);
        Nodo* nuevo = new Nodo(e);

        if (head == nullptr) {
            head = nuevo;
        } else {
            Nodo* actual = head;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevo;
        }
    }

    void imprimirLista() {
        Nodo* actual = head;
        while (actual != nullptr) {
            actual->dato.imprimir();
            actual = actual->siguiente;
        }
    }
};



int main (){

    return 0;
}