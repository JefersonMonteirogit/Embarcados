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
	int a =  0x6DB7 ,b =  0xA726, c, d;
		printf("\nComplementar\n"); 
	
	printf(" a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\n~a = ");
	binario(~a);
	printf(" = 0x%x",~a);
	
	printf("\n b = ");
	binario(b);
	printf(" = 0x%x",b);
	
	printf("\n~b = ");
	binario(~b);
	printf(" = 0x%x",~b);
	
	
	//	----------------------------------------------------
	
		printf("\n\nPorta AND\n"); 
	c = a & b;
	
	printf(" a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\n b = ");
	binario(b);
	printf(" = 0x%x",b);
	
	printf("\na & b = ");
	binario(c);
	printf(" = 0x%x",c);
	
	
	//	----------------------------------------------------
	
		printf("\n\nPorta OU EXCLUSIVO\n");
	d = a ^ b;
	
	printf(" a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\n b = ");
	binario(b);
	printf(" = 0x%x",b);
	
	printf("\na ^ b = ");
	binario(d);
	printf(" = 0x%x",d);
	
	//	----------------------------------------------------
	
		printf("\n\nPorta OU\n");
	c = a | b;	
	printf(" a = ");
	binario(a);
	printf(" = 0x%x",a);
	
	printf("\n b = ");
	binario(b);
	printf(" = 0x%x",b);
	
	printf("\na | b = ");
	binario(c);
	printf(" = 0x%x",c);
	

return 0;	

}