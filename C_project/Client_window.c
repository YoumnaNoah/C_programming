#include<stdio.h>
#include"STD_Types.h"
//#include"BIT_CALC.h"
#include"Final_proj_Interface.h"
#include "string.h"
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
	FILE*fptr;

extern client tot_clients[300];
extern u8 num;
void client_Mode(void){
	u32 client_in_pass;
	u8 client_acc_option;
	u32 ID_OP_A;
	
	//get the ID Account you wat to operate on
	printf("enter the account ID of the account you want to open\n");
	scanf("%d",&ID_OP_A);
	fflush(stdin);
	//search for the iD in the array to compare it with the entered value
	for(u32 i=0;i<300;i++){
		if(tot_clients[i].Acc_ID == ID_OP_A){
			printf("enter your password\n");
			scanf("%d",&client_in_pass);
			if(tot_clients[i].Acc_password == client_in_pass){
			num=i;
			}
		}else{
			printf("wrong password");
		}
	}
	printf("welcome to client mode\n");
	//ptint possible operations to perform on exisiting account
	printf("enter 1 to make transaction\n  ");
	printf("enter 2 to change password\n");
	printf("enter 3 to get cash \n");
	printf("enter 4 to deposit\n ");
	printf("enter 5 to return to main menu\n");
	//scan the user choice
	scanf("%d",&client_acc_option);
	fflush(stdin);
	switch (client_acc_option){
		case Make_transaction: make_trans();
		break;
		
		case change_status: change_password();
		break;
		
		case  get_cash:withdraw();
		break;
		
		case deposit: deposit_fun();
		break;
		
		case main_menu_return: break;
		
		
	}
}

void change_password(void){
	u32 new_password;
	printf("please enter your old password\n");
	scanf("%d",&new_password);
	tot_clients[num].Acc_password=new_password;
	if(tot_clients[num].Acc_password== new_password){
		printf("your password has been updated succesfully\n");
	}else{
		printf("something went wrong");
	}
}
