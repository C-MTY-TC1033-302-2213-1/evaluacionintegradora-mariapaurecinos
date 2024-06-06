#ifndef Pedido_h
#define Pedido_h
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"
using namespace std;

const int MAX_PROD = 50;

class Pedido{
    private:
        Producto *arrPtrProductos[MAX_PROD];
        int cantidad;
    
    public:
        Pedido();

        //otros metodos
        void leerArchivo(string nombre);
        void ticketCliente();
};

#endif /*Pedido.h*/