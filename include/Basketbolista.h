#ifndef BASKETBOLISTA_H
#define BASKETBOLISTA_H

#include <string>
#include<iostream>
using namespace std;
class Basketbolista {
private:
    string nombre;
    int edad;
    float altura;
    float promedioPuntos;

public:
    
    Basketbolista(const std::string& nombre, int edad, float altura, float promedioPuntos);

    
    string getNombre() const;
    int getEdad() const;
    float getAltura() const;
    float getPromedioPuntos() const;

    
    void setNombre(const std::string& nombre);
    void setEdad(int edad);
    void setAltura(float altura);
    void setPromedioPuntos(float promedioPuntos);

    
    void mostrarInformacion() const;
};

#endif // BASKETBOLISTA_H