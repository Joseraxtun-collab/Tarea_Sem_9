#include <iostream>               // Librería para usar cout y cin
using namespace std;              // Evita escribir std:: antes de cada función

class PilaEstatica {              // Define la clase PilaEstatica
private:                          // Miembros privados, no accesibles desde fuera
    static const int MAX = 10;    // Tamaño máximo fijo de la pila (10 elementos)
    int arr[MAX];                 // Arreglo que almacena los elementos de la pila
    int top;                      // Índice del último elemento insertado

public:                           // Miembros públicos, accesibles desde fuera
    PilaEstatica() : top(-1) {}  // Constructor: inicializa top en -1 (pila vacía)

    bool push(int valor) {        // Método para insertar un elemento a la pila
        if (top >= MAX - 1) {     // Verifica si la pila está llena
            cout << "Pila está llena (overflow)." << endl; // Mensaje de error
            return false;         // Retorna false si no se pudo insertar
        }
        arr[++top] = valor;       // Incrementa top e inserta el valor en el arreglo
        return true;              // Retorna true si se insertó correctamente
    }

    int pop() {                   // Método para eliminar y retornar el tope de la pila
        if (top < 0) {            // Verifica si la pila está vacía
            cout << "Pila está vacía (underflow)." << endl; // Mensaje de error
            return -1;            // Retorna -1 como valor de error
        }
        return arr[top--];        // Devuelve el elemento del tope y decrementa top
    }

    int peek() const {            // Método para ver el tope sin eliminarlo
        if (top < 0) {            // Verifica si la pila está vacía
            cout << "Pila vacía." << endl; // Mensaje de error
            return -1;            // Retorna -1 si la pila está vacía
        }
        return arr[top];          // Retorna el elemento en el tope sin eliminarlo
    }
};                                // Fin de la clase PilaEstatica

int main() {                      // Función principal del programa
    PilaEstatica pila;            // Crea un objeto de tipo PilaEstatica
    pila.push(10);                // Inserta el valor 10 en la pila
    pila.push(20);                // Inserta el valor 20 en la pila
    pila.push(30);                // Inserta el valor 30 en la pila
    cout << "Elemento en la cima: " << pila.peek() << endl; // Muestra el tope (30)
    cout << "Elemento eliminado: " << pila.pop() << endl;   // Elimina y muestra 30
    cout << "Elemento eliminado: " << pila.pop() << endl;   // Elimina y muestra 20
    return 0;                     // Indica que el programa terminó correctamente
}





//PILA DINAMICA 
