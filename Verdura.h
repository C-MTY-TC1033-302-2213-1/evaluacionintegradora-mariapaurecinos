#ifndef Verdura_h
#define Verdura_h
#include "Producto.h"

class Verdura: public Producto{
    private:
        string temporada;
    public:
    //constructores
        Verdura();
        Verdura(string _nombre, int _precio, int _peso, string _temporada);

    //otros metodos
        string str();
        int calculaTotalPagar();



};


#endif /*Verdura_h*/