#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H
#include <iostream>
#include <string>
#include "Deportista.h"
//registrar los jugadores en el sistemas en cada actividad 
using namespace std;
class Futbolista: public Deportista{

private:
    string posicion;
    int goles;
    int asistencias;

protected:
public:
    Futbolista();
    void setPosicion(string posicion);
    string getPosicion();
    void setGoles(int goles);
    int getGoles();
    void setAsistencias(int asistencias);
    int getAsistencias();
    void mostrarInformacion();
    


    
};
#endif // FUTBOLISTA_H