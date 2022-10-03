#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   int T[]={35,4,7,68,75,43,54,23,33,2};
   for(i=0;i<10;i++){
    for(j=0;j<10;j++){
        if(T[j]<T[j-1]){
            int tomp=T[j];
            T[j]=T[j-1];
            T[j-1]=tomp;
        }
    }
   }
   for(i=0;i<10;i++){
    printf("apre le tritement:T[%d]=%d\n",i,T[i]);
   }
    return 0;
}
