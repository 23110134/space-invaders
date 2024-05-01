
#pragma once
#include <string>
#include <ftxui/screen/screen.hpp>

Class Dibujo
{
private:
    int posicionX;
    int posicionY;
    string contenio

public:
    Dibujo(){
        this->posicionX = 0;
        this->posicionY = 0;
    }
    void Dibujar(ftxui::Screen Pantalla){
        int posicio contenido = 0;
        int posicio contenido = 0;

        for (auto &&letra : contenido)
        {
            for (auto &&letra : linea)
            {
                    
                int posicionFinalX = 
                this ->posicionInicialX + posicionPalabraX;

                int posicionFinalX = 
                this ->posicionInicialX + posicionPalabraX;

        
                Pantalla.pixelAt(posicionFinalX,
                        posicionFinalY).character = letra;
                        posicio contenido++;
        
            }
            posicionPalabraY++;

        }

    }
    void DesplazarX(int distancia)
    {
        posicionX +=distacia;
    }
    void DesplazarY(int distancia)
    {
        posicionY +=distacia;
    }

    Dibujo(){}

}