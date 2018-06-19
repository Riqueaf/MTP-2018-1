// Henrique Augusto Fabiano
// 11621EEL020

#include<stdio.h>

int main(){
	
	char bits[256];
    int inteiro=0,nb,Menu,i=0,num=0;
	printf(" 1- Binario para Decimal\n 2- Binario para Hexadecimal\n 3- Hexadecimal para Decimal\n 4- Hexadecimal para Binario\n 5- Decimal para Binario\n 6- Decimal para Hexadecimal\n 7- Octal para Decimal\n 8- Decimal para Octal\n");
	scanf("%d",&Menu);
	
	switch(Menu){
		case 1:
			printf("Digite um numero binario: \n");
			scanf("%s",&bits);
			num=0;
    		for(i=0;bits[i]!= '\0';i++){
        	if(bits[i] == '1')
                num = (num*2)+1;
        	if(bits[i] == '0')
                num = (num*2);
            }
            printf("%s em decimal eh: %d\n",bits,num);
			break;
		case 2:
			printf("Digite um numero binario: \n");
			scanf("%s",&bits);
			num=0;
    		for(i=0;bits[i]!= '\0';i++){
        	if(bits[i] == '1')
                num = (num*2)+1;
        	if(bits[i] == '0')
                num = (num*2);
            }
            printf("%s em hexadecimal eh: %X\n",bits,num);
			break;
		case 3:
			printf("Digite um numero hexadecimal: \n");
			scanf("%X",&inteiro);
			printf("%X em decimal eh: %d\n",inteiro,inteiro);
			break;
		case 4:
			printf("Digite um numero hexadecimal: \n");
			scanf("%X",&inteiro);
			printf("%X em binario eh: ",inteiro);
			for(nb = 0; inteiro >= (1 << nb); nb++);
			for(i=nb-1;i>=0;i--){
				if(inteiro%2==0){
					bits[i] = 0;
				}else{
					bits[i]= 1;
				}inteiro = inteiro/2;
			}
			for(i=0;i<=nb-1;i++){
				printf("%d", bits[i]);
			}
			
			break;
		case 5:
			printf("Digite um numero: \n");
			scanf("%d",&inteiro);
			printf("%d em binario eh: ",inteiro);
			for(nb = 0; inteiro >= (1 << nb); nb++);
			for(i=nb-1;i>=0;i--){
				if(inteiro%2==0){
					bits[i] = 0;
				}else{
					bits[i]= 1;
				}inteiro = inteiro/2;
			}
			for(i=0;i<=nb-1;i++){
				printf("%d", bits[i]);
			}
			break;
		case 6:
			printf("Digite um numero: \n");
			scanf("%d",&inteiro);
			printf("%d em hexadecimal eh: %X\n",inteiro,inteiro);
			break;
		case 7:
			printf("Digite um numero: \n");
			scanf("%o",&inteiro);
			printf("%o em decimal eh: %d\n",inteiro,inteiro );
			break;
		case 8:
			printf("Digite um numero: \n");
			scanf("%d",&inteiro);
			printf("%d em octal eh: %o\n",inteiro,inteiro );
			break;
		}
			
}
