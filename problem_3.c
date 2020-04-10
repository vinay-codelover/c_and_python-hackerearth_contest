#include<stdio.h>
#include<stdlib.h>
/*optimal solution in c*/
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void main(){
	int temp =1;
	int  arr[100];
	int size;
	int i =0;
	scanf("%d",&size);
	for(i =0;i<size;i++){
		scanf("%d ",&arr[i]);
	}
	qsort(arr,size,sizeof(int), cmpfunc);
	for(i=0;i<size;i=i+2){
	if(arr[i+1]-arr[i]!=0){
                temp =0;
                printf("%d",arr[i]);
                break;
	}
}
 if(temp==1){
 	printf("%d",arr[size-1]);
 }
        
	}
