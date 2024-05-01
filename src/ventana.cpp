#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <Dibujo.hpp>
#include <list>
#include <experimental/random>
using namespace std;
using namespace ftxui;


int main(int arg,char const *argv[])
{   
    list<Dibujo> dibujos;
    dibujos.push back(Dibujo("inicio 0,0"));

    Dibujo palabra1("Hola",0,0);
    Dibujo palabra2("ADIOS",5,5);

    for(int i=0; int i<20; i++)
    {
        Dibujo palabra("Hola" + to_string(i),
        0,//posicionX
        0 //posicionY
        
        );
        dibujos.push back(palabra);
    }


    auto Pantalla = Screen::Create(Dimension::Full(),Full());

    while(true){
    Pantalla.Clear();
    this_thread::sleep_for(0.1s);

    //Actualizar
    for (auto &&i : dibujos)
    {
        
        i.DesplazarX(experimental::randing(-1,1));
        i.DesplazarY(experimental::randing(-1,1));
        
    }
    
    //Dibujar
    for (auto &&i : dibujos)
    {
        i.Dibujar(pantalla);
    }
    
    palabra1.Dibujar(pantalla);
    paalabra2.Dibujar(pantalla); 
   
    Pantalla.Print();
    Cout<<Pantalla.ResetPosition();
    
    posicionInicialX++;
    posicionInicialY++;

    return 0;
}

