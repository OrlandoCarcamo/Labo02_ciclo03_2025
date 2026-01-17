#include <iostream>
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
     
    

     };

int main (){
 estudiante n1("Orlando", 9.5);
    n1.imprimir();
    return 0;
}