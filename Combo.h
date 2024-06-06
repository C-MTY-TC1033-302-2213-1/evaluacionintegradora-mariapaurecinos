// Maria Paula Recinos A00840131
#ifndef Combo_h
#define Combo_h
#include "Producto.h"

class Combo: public Producto{
    private:
        int clave;

    public:
        //Constructores
            Combo();
            Combo(string _nombre, int _precio, int _peso, int _clave);

        //otros métodos
            string str();
            int calculaTotalPagar();


};



#endif /*Combo_h*/