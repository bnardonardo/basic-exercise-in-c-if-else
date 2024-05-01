#include <stdio.h>
#include <locale.h>

int parOuImpar(int n){

    if (n % 2 == 0){
    printf ("2");}
    else{
    printf("1");}
    }

int main(){
    setlocale(LC_ALL, "Portuguese");
    parOuImpar(3);

return(0);
}
