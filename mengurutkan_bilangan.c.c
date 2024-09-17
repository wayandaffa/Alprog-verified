#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int nomor,i,j, temp;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d", &nomor);
    int arr [nomor];
    for (i=0;i<nomor;i++){
        scanf("%d",&arr[i]);
            
             }
for(i=0;i< nomor -1 ;i++){
  for (j= 0;j<nomor-i-1;j++){
     if (arr[j]>arr[j+1]){
         temp = arr[j];
         arr[j] = arr [j+1];
         arr[j+1] =temp;
                }
            }
         }
         for (i = 0;i< nomor;i++){
             printf("%d",arr[i]);
                    printf("\n");
                    }
                    return 0;
                    }