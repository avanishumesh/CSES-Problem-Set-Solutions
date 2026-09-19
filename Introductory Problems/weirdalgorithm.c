#include <stdio.h>
int main(){
    long n;
    scanf("%lu",&n);
    printf("%lu ",n);
    if(n==1){
        return 0;
    }
    else if(n==0){
        return 0;
    }
    
    do{
        if(n%2==0){
            n = n/2;
            printf("%lu ",n);
        }
        else{
            n = n*3 + 1;
            printf("%lu ",n);
        }
        

    }while(n!=1);
}