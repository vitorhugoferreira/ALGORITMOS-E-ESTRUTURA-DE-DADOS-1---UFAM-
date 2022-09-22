#include <stdio.h>
#include <ctype.h>

int main(){
	
	char frase;
	
	while((frase = getchar()) != EOF){
    
        if(isalpha(frase) != 0){
            printf("%c", frase);
        }
        else if(isdigit(frase) != 0){
            printf("%c", frase);
        }
        else if((frase) == ' '){
            printf("%c", frase);
        }
        else if((frase) == ','){
            printf("%c", frase);
        }
        else if((frase) == '.'){
            printf("%c", frase);
        }
        else if((frase) == '?'){
            printf("%c", frase);
        }
        else if((frase) == '!'){
            printf("%c", frase);
        }
        else if((frase) == ';'){
            printf("%c", frase);
        }
    }	
}