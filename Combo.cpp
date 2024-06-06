// Maria Paula Recinos A00840131
#include "Combo.h"

// Constructores
Combo::Combo():Producto(){
    clave = 0;
}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave)
:Producto(_nombre, _precio, _peso){
    clave = _clave;
}

// otros métodos
string Combo::str(){
return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(calculaTotalPagar()) + "-" + to_string(clave);
}

int Combo::calculaTotalPagar(){
    int total;
    int descuento;

    if(clave == 1){
        descuento = precio * peso / 100;
        total = (precio * peso) - (descuento * 25);
    }
    else if(clave == 2){
        descuento = ((precio * peso * 2) / 100)*30;
        total = (precio * peso * 2) - descuento;
    }
    else{
        total = precio * peso;
    }
    return total;
}
