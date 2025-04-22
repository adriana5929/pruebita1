//la supeerclase 

#include<string>


using namespace std;

class deportista{
    private:
    protected:
    string  nombre;
    string cedula;
    int edad;
    string programa;
    int faltas;
    string genero;

    public:
    void setNombre(string nombre);
    string getNombre();

    void setCedula(string cedula);
    string getCedula();

    void setEdad(int edad);
    int getEdad();

    void setPrograma(string programa);
    string getprograma();

    void setFaltas(int faltas);
    int getFaltas();

    void setGenero(string genero);
    string getGnero();
};