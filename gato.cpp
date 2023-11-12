#include<stdio.h>

int main(){
    
    char gato[3][3], opcion;
    int i, j;
    
    printf("Gato !\n");
    printf("Presione X para jugar / S para salir:");
    scanf("%c", &opcion);
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            gato[i][j]= ' ';
			printf("[%c]", gato[i][j]);
        }
        printf("\n");
    }
    
    int fila, columna, ganador=0, turno=1;
    
    if(opcion== 'X'|| opcion== 'x'){
    	
    	do{
    		if(turno%2==1){
    			do{
    				printf("\n Jugador 1; \n");
		    		printf("Digite fila:");
		    		scanf("%d",&fila);
		    		printf("Digite columna:");
		    		scanf("%d",&columna);
		    		
		    		if(gato[fila][columna]== 'x'|| gato[fila][columna]== 'o' || fila > 2 || columna > 2){
		    			printf("\nCoordenadas no validas, prueba otra vez. \n");
					}
				}while(gato[fila][columna]== 'x'|| gato[fila][columna]== 'o' || fila > 2 || columna > 2);
				
	    		gato[fila][columna]='x';
	    		
	    		system("clear");
				for(i=0; i<3; i++){
			        for(j=0; j<3; j++){
						printf("[%c]", gato[i][j]);
			        }
			        printf("\n");
			    }
			    turno++;
			    
			}else if(turno%2==0){
				do{
					printf("\n Jugador 2: \n");
		    		printf("Digite fila:");
		    		scanf("%d",&fila);
		    		printf("Digite columna:");
		    		scanf("%d",&columna);
		    		
		    		if(gato[fila][columna]== 'x'|| gato[fila][columna]== 'o' ||fila > 2 || columna > 2){
		    			printf("\nCoordenadas no validad, prueba otra vez. \n");
					}	
				}while(gato[fila][columna]=='x'|| gato[fila][columna]=='o' || fila >2 || columna > 2);
	    		
	    		gato[fila][columna]='o';
	    		
	    		system("clear");
				for(i=0; i<3; i++){
			        for(j=0; j<3; j++){
						printf("[%c]", gato[i][j]);
			        }
			        printf("\n");
			    }
			    turno++;
			}
			
			if(gato[0][0]== 'x' && gato[0][0]== gato[0][1] && gato[0][0]== gato[0][2]
			|| gato[1][0]== 'x' && gato[1][0]== gato[1][1] && gato[1][0]== gato[1][2]
			|| gato[2][0]== 'x' && gato[2][0]== gato[2][1] && gato[2][0]== gato[2][2]
			
			|| gato[0][0]== 'x' && gato[0][0]== gato[1][0] && gato[0][0]== gato[2][0]
			|| gato[0][1]== 'x' && gato[0][1]== gato[1][1] && gato[0][1]== gato[2][1]
			|| gato[0][2]== 'x' && gato[0][2]== gato[1][2] && gato[0][2]== gato[2][2]
			
			|| gato[0][0]== 'x' && gato[0][0]== gato[1][1] && gato[0][0]== gato[2][2]
			|| gato[0][2]== 'x' && gato[0][2]== gato[1][1] && gato[0][2]== gato[2][0]){
				ganador=1;
				printf("FELICIDADES JUGADOR 1 GANO \n");
			}
			
			if(gato[0][0]== 'o' && gato[0][0]== gato[0][1] && gato[0][0]== gato[0][2]
			|| gato[1][0]== 'o' && gato[1][0]== gato[1][1] && gato[1][0]== gato[1][2]
			|| gato[2][0]== 'o' && gato[2][0]== gato[2][1] && gato[2][0]== gato[2][2]
			
			|| gato[0][0]== 'o' && gato[0][0]== gato[1][0] && gato[0][0]== gato[2][0]
			|| gato[0][1]== 'o' && gato[0][1]== gato[1][1] && gato[0][1]== gato[2][1]
			|| gato[0][2]== 'o' && gato[0][2]== gato[1][2] && gato[0][2]== gato[2][2]
			
			|| gato[0][0]== 'o' && gato[0][0]== gato[1][1] && gato[0][0]== gato[2][2]
			|| gato[0][2]== 'o' && gato[0][2]== gato[1][1] && gato[0][2]== gato[2][0]){
				ganador=1;
				printf("FELICIDADES JUGADOR 2 GANO \n");
			}
				
    	} while(ganador !=1);
	}else{
		system("clear");
		printf("\nADIOS\n");
	}
	return 0; 
}

