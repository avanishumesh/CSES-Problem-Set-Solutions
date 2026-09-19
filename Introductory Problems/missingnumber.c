#include <stdio.h>
#include<stdlib.h>

void merge(long *left,long *right, long *arr, long n,long leftsize,long rightsize){

    long i = 0,l = 0,r = 0;


    while(l<leftsize&&r<rightsize){

        if(left[l]<right[r]){
            arr[i] = left[l];
            i++;
            l++;

        }
        else{
            arr[i] = right[r];
            i++;
            r++;

        }

    }
    while(l<leftsize){
        arr[i] = left[l];
        i++;
        l++;
    }
    while(r<rightsize){
        arr[i] = right[r];
        i++;
        r++;
    }

}
void mergesort(long *arr,int n){

    if(n<=1){
        return ;
    }

        
        long leftsize = n/2;
        long rightsize = n-n/2;
        long *left = (long*)malloc(n/2 * sizeof(long));
        long *right = (long*)malloc((n-n/2)*sizeof(long));

        for(int i = 0;i<n;i++){
            if(i<n/2){
                left[i] = arr[i];
            }
            else{
                right[i-leftsize] = arr[i];
            }
        }

        mergesort(left,leftsize);
        mergesort(right,rightsize);
        merge(left,right,arr,n,leftsize,rightsize);



}



int main(){
    long n;
    scanf("%ld",&n);
    long *arr = (long*)malloc(n*sizeof(long));
    n--;

    for(int i = 0;i<n;i++){
        scanf("%ld",&arr[i]);

    }

    mergesort(arr,n);
    n++;
    for(int i = 0;i< n;i++){
        if(arr[i]!=(i+1)){
            printf("%ld",i+1);
            break;

        }
    }
}

