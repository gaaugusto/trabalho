#include<stdio.h>
#include<stdlib.h>

main(){
	double peso,alt,imc;
	printf("Informe o peso:");
	scanf("%lf",&peso);
	printf("Informe a altura:");
	scanf("%lf",&alt);
	
	imc=(peso)/(alt*alt);
	if(imc<18.5){
	printf("abaixo do peso\n");

    } else if(imc>=18.5&&imc<24.99){
    	printf("peso normal\n");
    
    }else if(imc>=24.99){
    	printf("acima do peso\n");
    	
    }
    	system("pause");
    }

