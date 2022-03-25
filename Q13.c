#include <stdio.h>
#include <stdlib.h>

int main(){
    
	int d,m,a; 
    printf("Digite o dia, o mês e o ano (EX: 1 10 2001):\n");
    scanf("%i %i %i",&d, &m, &a);
    
    if((d<=0 || d>= 32) || (m<=0 || m>=13) || (a<=0 || a>=2023)){
        printf("Data inválida\n");        
    }
    else if((m==2) && (d>=30) ){
        printf("Data inválida\n");
    }
    else if((m==2) && (d==29)){
        if((!(a%4 == 0) && (a%100 != 0)) || (a%400 == 0))
            printf("Data inválida\n");
        }
        
        
    else {
    	if (m==2){
			d = d+ 31;	
		}
		else if (m==3){
			d = d+ 59;	
		}
		else if (m==4){
			d = d+ 90;	
		}
		else if (m==5){
			d = d+ 120;	
		}
		else if (m==6){
			d = d+ 151;	
		}
		else if (m==7){
			d = d+ 181;	
		}
		else if (m==8){
			d = d+ 212;	
		}
		else if (m==9){
			d = d+ 243;	
		}
		else if (m==10){
			d = d+ 273;	
		}
		else if (m==11){
			d = d+ 304;	
		}
		else if (m==12){
			d = d+ 334;	
		}
		
        if ( ((a%4)==0) && (((a%100)!=0) || ((a%400)==0)) && (m > 2)){
               d += 1; //se for bissexto e passar de fevereiro, tem um dia a mais pra contar
			   } 
		d = d + (a)*365 + (a)/4 -(a)/100 +(a)/400;           
                
             switch (d % 7) 
             {
             	case 0: printf("Sabado.\n"); break;
                case 1: printf("Domingo.\n"); break;
                case 2: printf("Segunda-feira\n"); break;
                case 3: printf("Terca-feira\n"); break;
                case 4: printf("Quarta-feira\n"); break;
                case 5: printf("Quinta-feira\n"); break;    
                case 6: printf("Sexta-feira\n"); break;
             }    
    }
}