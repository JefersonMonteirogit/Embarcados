#include<stdio.h>

void binario(int variavel){
int i,r;	
for(i=16;i>=0;i--){
				r = variavel>>i;
				
				if (r & 1){
					printf("1");

				}else{
					printf("0");

				}
				
			}
}
int main(){
	short a =  0x6DB7 ,b, MascaraD= 0x3F, MascaraE= 0xFC00, c;

	printf("\nMascara operador & a direita\n"); 
	
	b = a & MascaraD;

	printf("a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\nM = ");
	binario(MascaraD);
	printf(" = 0x%x",MascaraD);

	printf("\nb = ");
	binario(b);
	printf(" = 0x%x",b);
 
 	//	----------------------------------------------------
 	printf("\n\nMascara operador & a esquerda\n"); 
	
	b = a & MascaraE;

	printf("a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\nM = ");
	binario(MascaraE);
	printf(" = 0x%x",MascaraE);

	printf("\nb = ");
	binario(b);
	printf(" = 0x%x",b);
	
	//	----------------------------------------------------
 	printf("\n\nMascara operador | a direita\n"); // todos a direita sao 1
	MascaraD = 0xFF;
	b = a | MascaraD;

	printf("a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\nM = ");
	binario(MascaraD);
	printf(" = 0x%x",MascaraD);

	printf("\nb = ");
	binario(b);
	printf(" = 0x%x",b);

	//	----------------------------------------------------
 	printf("\n\nMascara operador | a esquerda\n"); // todos a esquerda sao 1
	MascaraE = 0xFF00;
	
	b = a | MascaraE;

	printf("a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\nM = ");
	binario(MascaraE);
	printf(" = 0x%x",MascaraE);

	printf("\nb = ");
	binario(b);
	printf(" = 0x%x",b);
	
		//	----------------------------------------------------
 	printf("\n\nMascara operador ^ a direita\n"); // inveter 8 bts da direita
	MascaraD = 0xFF;
	
	b = a ^ MascaraD;

	printf("a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\nM = ");
	binario(MascaraD);
	printf(" = 0x%x",MascaraD);

	printf("\nb = ");
	binario(b);
	printf(" = 0x%x",b);

//	----------------------------------------------------
 	printf("\n\nMascara operador ^ a esquerda\n"); // inveter 8 bts da esauerda
	MascaraE = 0xFF00;
	
	b = a ^ MascaraE;

	printf("a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\nM = ");
	binario(MascaraE);
	printf(" = 0x%x",MascaraE);

	printf("\nb = ");
	binario(b);
	printf(" = 0x%x",b);
 
 //	----------------------------------------------------
 	printf("\n\nLigando e Desligando bits\n"); // inveter 8 bts da esauerda
	MascaraD = 0x4;
	
	b = a ^ MascaraD;
	c = b ^ MascaraD;
	printf("a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\nM = ");
	binario(MascaraD);
	printf(" = 0x%x",MascaraD);

	printf("\nb = ");
	binario(b);
	printf(" = 0x%x",b);
	
	printf("\nM = ");
	binario(MascaraD);
	printf(" = 0x%x",MascaraD);
	
	printf("\nc = ");
	binario(c);
	printf(" = 0x%x",c);
	
		
}