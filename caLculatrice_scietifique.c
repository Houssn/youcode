#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int nombre;
    float A,B;
	printf("*****calculatrice*****\n");
	printf("<1> l adition <+>\n");
	printf("<2> la soustraction <->\n");
	printf("<3> la multiplication <*>\n");
	printf("<4> la division </>\n");
	printf("<5> le cosinus \n");
	printf("<6> la sinus\n");
	printf("<7> la tangent\n");
	printf("<8> la ln\n");
	printf("<9> la log10\n");
	printf("<10> la pow\n");
	printf("choisie :");
	scanf("%d",&nombre);
	while(nombre<=0 || nombre>10){
			printf("choisie :");
	scanf("%d",&nombre);
	} 
	
	switch(nombre){
		case 1:printf("donner A:");
		       scanf("%f",&A);
		       printf("donner B:");
		       scanf("%f",&B);		       
		       printf("%.2f+%.2f=%.2f",A,B,A+B);break;
		case 2:printf("donner A:");
		       scanf("%f",&A);
		       printf("donner B:");
		       scanf("%f",&B);		       
		       printf("%.2f+%.2f=%.2f",A,B,A-B);break;
		case 3:printf("donner A:");
		       scanf("%f",&A);
		       printf("donner B:");
		       scanf("%f",&B);		       
		       printf("%.2f+%.2f=%.2f",A,B,A*B);break;
		case 4:printf("donner A:");
		       scanf("%f",&A);
		       printf("donner B:");
		       scanf("%f",&B);	
			   printf("%f/%f=%f",A,B,A/B);break;	       

		case 5:
		       printf("donner A:");
	           scanf("%f",&A);
               printf("cos=%f",cos(A));break;  	       
		case 6:printf("donner A:");
		       scanf("%f",&A);		       
		       printf("sin=%f",sin(A));break;
		case 7:printf("donner A:");
		       scanf("%f",&A);		       
		       printf("tan=%f",tan(A));break;
		case 8:printf("donner A:");
		       scanf("%f",&A);		       
		       printf("ln=%f",log(A));break;	
		case 9:printf("donner A:");
		       scanf("%f",&A);
		       printf("log=%f",log10(A));break;
		case 10:printf("donner A:");
		       scanf("%f",&A);
		       printf("donner B:");
		       scanf("%f",&B);		       
		       printf("pow(A,B)=%f",pow(A,B));break;		   		       
	}

}
