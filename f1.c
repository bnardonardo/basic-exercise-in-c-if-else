#include <stdio.h>
#include <locale.h>

void fazLinha(){
    printf("------------------------------\n");
    }

void fazBorda(){
    printf("|                            |\n");
    }


int main (){
    //definindo idioma
    setlocale(LC_ALL, "Portuguese");
    fazLinha();
    fazBorda();
    fazBorda();
    fazBorda();
    fazBorda();
    fazBorda();
    fazBorda();
    fazBorda();
    fazLinha();


 /*1) fazlinha, fazborda, quadrado, linha, 7borda, linha */

 return (0);
}
