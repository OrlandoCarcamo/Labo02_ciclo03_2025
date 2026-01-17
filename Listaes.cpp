#include <iostream>
#include <string>
using namespace std;
class estudiante{

    private:
        string nombre;
        float notaFinal;

    public:
    estudiante(string n, float nF){
        nombre = n;
        notaFinal = nF; 

    }

    void imprimir (){
        cout << "Nombre: " << nombre << endl << "Nota final: " << notaFinal << endl;
    }
     
    

        void imprimir(){
            cout << "Nombre: " << nombre << ", Nota Final: " << notaFinal << endl;
        }
    };

class Nodo {
public:
    estudiante dato;
    Nodo* siguiente;

    Nodo(estudiante e) : dato(e) {
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
        estudiante e(nombre, nota);
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
 estudiante n1("Orlando", 9.5);
    n1.imprimir();
    return 0;
}