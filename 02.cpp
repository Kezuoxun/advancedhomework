#include<iostream>
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {

{
  char l[5000];
  char ouput; 
  printf("½Ð¿é¤J¦r¦ê¡G"); 
  while(scanf("%s",l)==1) 
      {
         printf("Âà´«¦r¦ê¡G",ouput);
   int a,N=strlen(l); 
         for(a=N-1;a>=0;a--)
               printf("%c",l[a]); 
      } 
 system("pause");
	return 0;
}
}
