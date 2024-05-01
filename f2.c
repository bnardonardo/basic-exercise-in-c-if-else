#include <stdio.h>
#include <locale.h>
void fazAsterisco (int quant){
    int cont=0;
    while (quant > cont){
        printf ("*");
        cont++;
    }
    }

int main(){
    setlocale(LC_ALL, "Portuguese");
    fazAsterisco(7);

 return (0);
}
