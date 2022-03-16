#include<stdio.h>
void binario(int variavel){
int i,r;	
for(i=8;i>=0;i--){
				r = variavel>>i;
				
				if (r & 1){
					printf("1");

				}else{
					printf("0");

				}
				
			}
}
int main(){
	int a = 1 ,X1,X2,X3,X4, c = 128;
	printf("Deslocando bits a esquerda\n"); 
	X1 = a<<1;
	X2 = a<<2;
	X3 = a<<3;
	X4 = a<<4;
	printf("decimal = %d  binario = ",a);
	binario(a);
	printf("\nAlocado x1 binario = ");
	binario(X1);
	printf("\nAlocado x2 binario = ");
	binario(X2);
	printf("\nAlocado x3 binario = ");
	binario(X3);
	printf("\nAlocado x4 binario = ");
	binario(X4);

	
	printf("\n\nDeslocando bits a direita\n"); 
	X1 = c>>1;
	X2 = c>>2;
	X3 = c>>3;
	X4 = c>>4;
	printf("decimal = %d binario = ",c);
	binario(c);
	printf("\nAlocado x1 binario = ");
	binario(X1);
	printf("\nAlocado x2 binario = ");
	binario(X2);
	printf("\nAlocado x3 binario = ");
	binario(X3);
	printf("\nAlocado x4 binario = ");
	binario(X4);

	
	return 0;
	
}