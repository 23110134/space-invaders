
#pragma once
#include <fstream>
#include <list>
using namespace std;
using namespace ftxui;

class Dibujo
{
private:
    fstream archivo;
    list<list> contenido;
public:
    Dibujo(string path)
    {
        archivo.open(path);
        while (!archivo.eof())
        {
            string linea;
            getline(archivo, linea);
            
        
        this->contenido = push_back(linea);
        }
        archivo.close();
    }
    Dibujo Creardibujo(){
        Dibujo temp;
        return temp;
    }
    ~Dibujo() {}
};