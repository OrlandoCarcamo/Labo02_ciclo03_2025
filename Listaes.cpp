#include <iostream>
#include <string>
using namespace std;
class estudiante{

    private:
        string nombre;
       

    public:
    float notaFinal;
    estudiante(string n, float nF){
        nombre = n;
        notaFinal = nF; 

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

    float calcularPromedioRecursivo() {
        return promedioRecursivo(head, 0, 0);
    }

    float promedioRecursivo(Nodo* nodo, float suma , int contador) {
    if (nodo == nullptr) {
        if (contador == 0) 
            return 0;
        else
            return suma / contador;
         }
    else 
        return promedioRecursivo( nodo->siguiente, suma + nodo->dato.notaFinal, contador + 1);

    }
};





int main() {
    ListaEnlazada lista;

    lista.agregarEstudiante("Ana", 8.5);
    lista.agregarEstudiante("Luis", 7.0);
    lista.agregarEstudiante("Carlos", 9.2);

    cout << "Lista de estudiantes:" << endl;
    lista.imprimirLista();

    cout << "\nPromedio: "
         << lista.calcularPromedioRecursivo() << endl;

    return 0;
}
