// Henrique Augusto Fabiano 
//11621EEL020

#include <stdio.h>

int main(){
	
	int ciclo = 0, h = 0;
    char bin[200];
    
    printf("Digite um numero que seja binario: \n");
    scanf("%s", bin);
    
    while(bin[h] != '\0'){
	
        if (ciclo == 0 && bin[h] == '0'){
    		ciclo = 0;
    		h++;
		}
    	
    	if (ciclo == 0 && bin[h] == '1'){
    		ciclo = 1;
    		h++;
    	}
    	
    	if (ciclo == 1 && bin[h] == '0'){
    		ciclo = 2;
    		h++;
    	}
    	
    	if (ciclo == 1 && bin[h] == '1'){
    		ciclo = 0;
    		h++;
    	}
    	
    	if (ciclo == 2 && bin[h] == '0'){
    		ciclo = 1;
    		h++;
    	}
    	
    	if (ciclo == 2 && bin[h] == '1'){
    		ciclo = 2;
    		h++;
    	}
	
	}
	
	if (ciclo == 0){
		printf("\n%sO numero e multiplo de 3", &bin);
	}
	
	else{
		printf("\n%sO numero nao e multiplo de 3", &bin);
	}
	
	return 0;
	
}
