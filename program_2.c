#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
	char s[100],krish,left[100],right[100];
	int first_gift,last_gift,sum =0;
	int wanted;
	scanf("%s\n",s);
	sortarray(s,strlen(s));
	scanf("%c",&krish);
	scanf("%d",&first_gift);
	scanf("%d",&last_gift);
	int i =0;
	int j =0;
	int k =0;
	for(i=0;s[i]!='\0';i++){
		if(s[i] == krish){
			 wanted = i;
		    	break;
		}
	}
	for(j=0;j<wanted;j++){
		left[j] = s[j];
		
	}
	left[wanted] ='\0';
	int l=0;
   	for(k=wanted+1;k<strlen(s);k++){
		right[l++] = s[k];
	}
	int final =0;
//	right[strlen(right)-1] ='\0';
	 sortarray(left,strlen(left));
     strrev(left);
//	printf("%s %s\n",right,left);
	strcat(left,right);
	//left[strlen(left)] = '\0';
	for(final=0;final<strlen(left);final++){
		printf("%c ",left[final]);
	}  
	int x =1;
	int x1 =0;
	// cost of the gifts
	 int gifts[100];
	 gifts[0] = first_gift;
	 gifts[strlen(left)-1] = last_gift;
	 if(strlen(left)%2!=0){
	 	gifts[(int)strlen(left)/2] =0;
	 }
	 for(x=1;x<(int)strlen(left)/2;x++){
	 	 gifts[x] = (int)gifts[x-1]/x;
	 	 gifts[strlen(left)-x-1] =  (int)gifts[strlen(left)-x]/(strlen(left)-x-1);
	 	//printf("%d\n",strlen(left)-x-1);
	 }
	 printf("\n");
	 
	  for(x1=0;x1<strlen(left);x1++){
	  	printf("%d ",gifts[x1]);
	  	sum = sum + gifts[x1];
	  }
	  printf("\n");
	  printf("%d",sum);
	
}
void  sortarray(char*string,int n){
  char temp;
   int i, j;
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }	
}
