#include<stdio.h>
#include"STD_Types.h"
#include"Final_proj_Interface.h"
#include "string.h"
#include <stdlib.h>

 
void main(){
u8 Mode;
printf("enter 1 to enter admin mode\n enter 2 to enter client mode\n");
printf("to exit enter 0");
scanf("%d",&Mode);


	while(Mode!=0){
	
	switch(Mode){
		
		case admin_mode : 
		admin_Pass();
			
		break;
		
		case Client_mode: client_Mode();
			
		break;
	}
	}	
}
