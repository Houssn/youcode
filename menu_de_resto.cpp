#include<stdio.h>
#include<stdlib.h>

int main(){
	int A,B,C,i,num,totale;
	A=0;
	B=0;
	C=0;
    int num1;
    printf("*************les jus**************\n");
    printf("pour obtenir un jus d orange (12 dh) click sur 1.\n");
    printf("pour obtenir un l eau (2dh) click sur 2.\n");
    printf("pour obtenir le tea (6 dh)click sur 3.\n");
    printf("non merci.\n");
    printf(" donner votre choix  jus :");
    scanf("%d",&num1);
    while(num1<1 || num1>4){
    	printf("entrez un nombre entre 1 et 3:");
    	scanf("%d",&num1);
	}

    switch(num1){
	case 1:printf("jus d orange: %d dh\n",A=12);break;
	case 2:printf("l eau:%d dh\n",A=2);break;
	case 3:printf("le tea:% dh\n",A=6);break;
	case 4:printf("non mirci",A=0);}
	   for(i=0;i<5;i++){
   printf("\n");
   }
   printf("*************les plats**************\n");
	printf("plat de poulet 45dh click sur 1.\n");
	printf("plat de boeuf 60 dh click sur 2.\n");
	printf("le plat de canard 200 dh click sur 3.\n");
    printf("giv me your lunch or click sur 4 pour sortie :");
    scanf("%d",&num1);
        while(num1<1 || num1>4){
    	printf("entrez un nombre entre 1 et 3:");
    	scanf("%d",&num1);
	}
        switch(num1){
	case 1:printf("plat de poulet: %d dh",B=45);break;
	case 2:printf("plat de boeuf:%d dh",B=60);break;
	case 3:printf("le plat de canard:% dh",B=200);break;}
	   for(i=0;i<5;i++){
   printf("\n");
   }
   printf("***************les salade****************\n");
    printf("salad marrocain 20 dh click sure 1.\n");
	printf("salad nicoise 60 dh click 2.\n");
	printf("salad norvegienne a lavocat 60 dh click sur 3.\n");

	    printf("choix une salade ou click sur 4 pour sortie :");
    scanf("%d",&num1);
        while(num1<1 || num1>4){
    	printf("entrez un nombre entre 1 et 3:");
    	scanf("%d",&num1);
	}
	    switch(num1){
	case 1:printf("salad marrocain: %d dh\n",C=20);break;
	case 2:printf("salad nicoise:%d dh\n",C=60);break;
	case 3:printf("salad norvegienne a lavocat:% dh\n",C=60);break;}

   for(i=0;i<5;i++){
   printf("\n");
   }
   
   printf("pour confirmie votre facture click sur 1 \n non click sur 2.");
   scanf("%d",&num);
   while(num<1 || num>2){
   	printf("1: confir 2:non");
   	scanf("%d",&num);
   }
   totale=A+B+C;
   switch(num){
   	case 1:printf("%d dh+%d dh+%d dh=%d dh \n ",A,B,C,totale);
           printf("merci votre choix,atandie 5 min .");break;
    case 2:printf("ok merci.");
   }
  
   }
