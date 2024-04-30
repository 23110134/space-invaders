#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <Dibujo.hpp>

using namespace std;
using namespace ftxui;


int main(int arg,char const *argv[])
{   
    string Palabra = "DVD";

    int posicionInicialX =0;
    int posicionInicialY =0;

    auto Pantalla = Screen::Create(Dimension::Full(),Full());

    while(true){

    this_thread::sleep_for(0.1s);

    int posicionPalabraX =0;
    int posicionPalabraY =0;
    
    for (auto &&letra : Palabra )
    {
        int posicionFinalX = posicionInicialX + posicionPalabraX;
        int posicionFinalY = posicionInicialY + posicionPalabraY;
        

        Pantalla.PixelAt(posicionFinalX,posicionFinalY).character = letra;
        posicionPalabraX++;
    }

    Pantalla.Print();
    Pantalla.Clear();
    Cout<<Pantalla.ResetPosition();
    
    posicionInicialX++;
    posicionInicialY++;

    return 0;
}

