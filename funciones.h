#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
#include <string>
#include <cstdlib> // para srand() y rand()
#include <ctime>   // para time()

using namespace std;

void jugadores(string Jugadores[2]){
/*crea y pide el nombre de cada jugador */

string nombre;

for(int i=0;i<2;i++){
        cout<<"ingrese el nombre del jugador "<< i+1<<" : ";
    cin>>nombre;
    Jugadores[i]=nombre;
}
}

int inicio(){

    int numero_Uno,numero_Dos;

    srand(time(NULL));
    numero_Uno=rand() %6+1;
    numero_Dos=rand()%6+1;

    cout<<numero_Uno<<endl;
    cout<<numero_Dos<<endl;

}

void dados_Seis(){

int dados_Seis[5];

    srand(time(NULL));
for(int i=0;i<5;i++){
    dados_Seis[i]=rand() % 6 + 1;
}

}

void dados_Doce(){

int dados_Seis[4];

    srand(time(NULL));
for(int i=0;i<4;i++){
    dados_Seis[i]=rand() % 12 + 1;
}
}


#endif // FUNCIONES_H_INCLUDED
