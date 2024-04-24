#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/s
    int posicionX creen/screen.hpp>


using namespace std;
using namespace ftxui;

int main(int arg,char const *argv[])
{   
    int posicionX = 0;
    int posicionY = 0;
    string prueba = "DVD";

    while(true){

    }
    auto pantalla = Screen::Create(Dimension::Fixed(10),Dimension::Fixed(10));
    Render(pantalla,border(text("Hola")));
    pantalla.PixelAt(5,5).character = 'm';


    
    
    for (auto &&letra : prueba)
    {
        pantalla.PixelAt(posicionX,posicionY).character = letra;
        posicionX++;

    }
    

    pantalla.Print();
    



    return 0;
}

