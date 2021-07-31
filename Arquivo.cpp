#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int nota1,nota2,media;

    cout <<"digite sua nota da prova 1: ";
     scanf ("%d", &nota1);

    cout <<"digite a nota da prova 2: ";
     scanf ("%d", &nota2);

       media=(nota1+nota2)/2;

     cout <<"sua média e: " << media;
}
