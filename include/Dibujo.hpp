
#pragma once
#include <string>
#include <ftxui/screen/screen.hpp>

Class Dibujo
{
private:
    int posicionX;
    int posicionY;
    string Palabra;

public:
    Dibujo(){
        this->posicionX = 0;
        this->posicionY = 0;
    }
    void Dibujar(ftxui::Screen Pantalla){
        int posicionPalabraX = 0;
        int posicionPalabraY = 0;
        for (auto &&letra : palabra)
        {
             int posicionFinalX = posicionInicialX + posicionPalabraX;
        int posicionFinalY = posicionInicialY + posicionPalabraY;
        

        Pantalla.PixelAt(posicionFinalX,posicionFinalY).character = letra;
        posicionPalabraX++;
    
        }


    }

}