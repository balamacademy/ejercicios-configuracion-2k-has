/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>  // Librería para entrada y salida estándar
#include <string>    // Librería para trabajar con cadenas de texto

int main() {
    std::string nombre;  // Variable para almacenar el nombre
    int edad;            // Variable para almacenar la edad
    
    // Solicitar al usuario que ingrese su nombre
    std::cout << "Ingresa tu nombre: ";
    std::getline(std::cin, nombre);  // Usamos getline para permitir espacios en el nombre
    
    // Solicitar al usuario que ingrese su edad
    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;
    
    // Imprimir el mensaje con los valores ingresados
    std::cout << "El nombre es " << nombre << " de edad " << edad << std::endl;
    
    return 0;  // Fin del programa
}
