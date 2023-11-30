// clase 10-08-2023
// recursividad 

#include <iostream> 
#include <cmath>

using namespace std; 

//el numero de llamadas recursivas tiene que ser un numero finito 

//requisitos
//debe tener una condicion especial o de salida
//el patron se repite 

//PILA 

// estructura que puede añadir o eliminar
// elementos por un unico extremo llamdo CIMA
// va desde arriba hacia abajo


//VOID 
// una funcion no devuelve nigun valor despues de la ejecucion 


void binario(int numero){

    if(numero >0){
        //divide por 2 y se obtiene el residuo
        int resultado = numero %2;

        // se llama a la funcion recursiva para obtener el binario 
        binario(numero/2);

        std::cout << resultado;
    }
}

int main(){

    int numero;
    std::cout <<"Ingrese un numero positivo: ";
    std::cin >> numero; 

    while(numero <0){
        std::cout<<"el numero debe ser positivo, intenta de nuevo: ";
        std::cin >> numero; 
    }
    if(numero == 0){
            std::cout <<"El numero binario es: 0" <<std:: endl;

    }else{
            std::cout <<"El numero binario es: ";
            binario(numero);
            std::cout << endl;

    }
    return 0;
}