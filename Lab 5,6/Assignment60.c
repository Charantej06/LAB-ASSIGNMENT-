#include <stdio.h>
int main() {
    int b;
    printf(" how many numbers do you wanna enter:");
    scanf("%d", &b);
    int a[b] ;
    printf("enter %d numbers:\n",b);
    for(int i=0;i<b ;i++){
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(int i =0;i<b;i++){
        int min=i;          
        for(int j=i+1;j<b;j++){
            if (a[min] >a[j]){
                min  =  j ;
            } 
        }
        if(min!= i ){
             int temp=a[i];
             a[i]=a[min];
             a[min]=temp;
        }
        printf("%d\n",a[i]);
         
    }
     
return 0;
}
