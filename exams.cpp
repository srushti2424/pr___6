#include<stdio.h>

void main(){
	char s[1000];
	int i,j,k,n;
	int count=0;
	
	
	printf("enter the string: ");
	gets(s);
	
	for(j=0;s[j];j++);
	n=j;
	
	printf("frequancy count character in string: \n");
	
	for(i=0;i<n;i++)
	{
		count = 1;
		if(s[i])
	 {
	    for(i=i+1;j<n;j++)
	   {
	  	  if(s[i]==s[j])
	  	 {
		  count++;
		  s[j]='\0';
    	 }
       }
  printf("'%c' = %d \n",s[i],count);
    }
}
}
	  

