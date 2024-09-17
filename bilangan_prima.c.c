#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long bilangan,d,bukti=0;
    
    scanf("%lld",&bilangan);
    
    if (bilangan<=1){
        printf("BUKAN\n");
        return 0;
    }
for(d=2;d<=bilangan/2;d++){
    if(bilangan%d==0){
        bukti=1;
        break;
    }
}
    if(bukti==0){
        printf("PRIMA");
    }else{
        printf("BUKAN");
    }
return 0;
}