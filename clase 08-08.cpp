//Clase 08-08-2023
#include <iostream>
#include <cmath> 
//NFC = 70%
//certamenes y desafios 
// C1 28 septiembre 30%
// C2 31 octubre    35%
// C3 30 noviembre 30%

// NFD = 30%
// desafio 1 = 17 agosto 
// desafio 2 = 07 septiembre
// desafio 3 = 24 octubre
// desafio 4 = 23 noviembre

//ejercicio factorial 

int factorial(int n){

    int f;
    if (f== 0){
        f= 1;
    } else {
        f= n*factorial(n-1); // recursividad= funcion que se llama a si mismo 
    }
    return  f;
} 


// int main(){
//      int num, factorial= 1;
//      std::cout <<"Ingrese numero a contar: ";
//     std::cin >> num;

//      for (int i = 1; i <= num; i++){
        
//              factorial  = factorial *i;
//      }
//      std::cout <<" El factorial de" << " " << num << " " << "es: " <<factorial;
//      return 0;

// }

using namespace std;

int area_triangulo (int a, int b){

 int area;

 area= (a*b)/2;

 return area;

}



int main(){

    int base, altura;

    cout <<"Calculo de area de triangulo";
    cout <<"Ingrese la altura del triangulo: ";
    cin >> altura;

    cout <<"Ingree la base el triangulo: ";
     cin >> base; 

     int resultado =area_triangulo(base,altura);

     cout <<"El area del triangulo es: " << resultado << endl;

     return 0;


}