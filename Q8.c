#include<stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=0;
		
	while (i <= 127)
  	  {
			printf("%i = %c ", i, i);
    	i++;
		if (i %10==0)
  	  		printf("\n");
  	  }  
  	  
	return 0;
}