#ifndef NADADOR_H
#define NADADOR_H

#include <string>

class Nadador {
private:
    std::string nombre;
    int edad;
    std::string estilo;

public:
    
    Nadador(const std::string& nombre, int edad, const std::string& estilo);

    
    std::string getNombre() const;
    int getEdad() const;
    std::string getEstilo() const;

    
    void setNombre(const std::string& nombre);
    void setEdad(int edad);
    void setEstilo(const std::string& estilo);

    
    void mostrarInformacion() const;
};

#endif // NADADOR_H