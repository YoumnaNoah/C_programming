#ifndef Final_proj_Interface
#define Final_proj_Interface

#define admin_mode     1
#define Client_mode      2

#define create_New_ACC  1
#define open_exs_ACC    2

#define new_account  1
#define open_account 2
#define exit_system 3

#define Make_transaction 1
#define change_status    2
#define get_cash         3
#define deposit          4 
#define main_menu_return 5


void admin_Pass(void);
void admin(void);
void create_acc(void);
void change_stat(void);
void withdraw(void);
void deposit_fun(void);
void set_data(u16 index);
void exis_acc(void);
void make_trans(void);
void client_Mode(void);
void change_password(void);
#endif