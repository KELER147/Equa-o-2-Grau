#include <math.h>
#include <stdio.h>

int main() {


//declaração de variaveis
	float a,b,c;
	float delta;
	float x1,x2;
	
	
for(;;){

//entrada de dados
	printf("Equacao 2 grau \n \n");
	printf("Digite o valor de a:");
	scanf("%f", &a);

//condição 1
if (a==0){
	printf("Nao e equacao 2 grau!!\n");
		return 0;
}
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
//calc

	delta = pow(b,2)-4 * a * c;
	
//condiçoes

//2
if (delta == 0){
	x1 = (-b + pow(delta,0.5))/2*a;
	printf("Raiz unica  %.2f \n \n",x1);
}	

//3
else if (delta < 0){
	printf("Nao existe rais \n \n");

}
	
//4
else if(delta > 0){
		x1 = (-b + pow(delta,0.5))/2*a;
		x2 = (-b - pow(delta,0.5))/2*a;
		
		printf("%.2f, %.2f  \n \n", x1, 2);
}	.

}


	 

}
