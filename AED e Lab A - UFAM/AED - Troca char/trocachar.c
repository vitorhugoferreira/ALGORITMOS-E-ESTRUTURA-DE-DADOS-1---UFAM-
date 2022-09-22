#include<stdio.h>

//Crie a função inverte
void inverte(char *x, char *y){

    char auxiliar;

    auxiliar = *x;
    *x = *y;
    *y = auxiliar;
    
}

int main()
{
   	char x, y;
	scanf("%c %c", &x, &y);
    inverte(&x, &y);
   	printf("%c%c", x, y);
 	return 0; 

}