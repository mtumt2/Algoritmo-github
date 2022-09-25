
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace  std;

void escribir ();

int main ()
{
    escribir ();
    system("PAUSE");
    return 0;

}

void escribir()
{
    ofstream miarchivo;
    miarchivo.open ("MI PRIMER ARCHIVO.txt", ios::out);
    if (miarchivo.fail())
    {
        cout <<"error al abrir el archivo";
        exit (1);

    }
    miarchivo << "HOY ES UN DIA GENIAL";
    
    miarchivo.close();
}

