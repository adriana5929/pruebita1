#ifndef CREDENCIAL_H
#define CREDENCIAL_H

#include <string>

class Credencial {
private:
    std::string usuario;
    std::string contrasena;

public:
    // Constructor por defecto
    Credencial();

    // Constructor con parámetros
    Credencial(const std::string& usuario, const std::string& contrasena);

    // Métodos getters
    std::string getUsuario() const;
    std::string getContrasena() const;

    // Métodos setters
    void setUsuario(const std::string& usuario);
    void setContrasena(const std::string& contrasena);

    // Método para validar la credencial
    bool validar(const std::string& usuario, const std::string& contrasena) const;
};

#endif // CREDENCIAL_H