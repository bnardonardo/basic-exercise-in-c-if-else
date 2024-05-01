#include <stdio.h>
#include <locale.h>
void fazA (int quant, char a){
    int cont=0;
    while (quant > cont){
        printf ("%c", a);
        cont++;
    }
    }

int main(){
    setlocale(LC_ALL, "Portuguese");
    fazA(7, 'p');

 return (0);
}
