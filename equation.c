#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
/*un programme que calculer la solution de equation 2deg*/
int a,d,b,c;
float s,k,h;
printf("donner a,b,c:");
scanf("%d%d%d",&a,&b,&c);
d=b*b-(4*a*c);
printf("d=%d\n",d);
s=-b/2*a;
k=-b+sqrt(d)/2*a;
h=-b-sqrt(d)/2*a;

if(d<0){printf(" pas de solution");}
else if(d>0){printf("l equation ilya deux solution: SOL1 %f ET SOL %f",k,h);}
else {printf("l equation ilya une solution:%f",s);}
return 0;
}


