#include <stdio.h>
#include "libgame.h"

int main(){
    OcultaCursor();
    Color(ROJO);
    inicia_libgame();
    Color(AMARILLO);
    gotoxy(22,8);printf("Aporte hecho por Gabriel Efrain Nieves Ramirez");
    Color(AZUL);
    Pintar_Marco();
    Pausa();

}