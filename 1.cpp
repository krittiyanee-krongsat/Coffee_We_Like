#include <stdio.h>
#include <string>

int change(int,int);
int main()
{
    char id[15];
    
	system("color F1");//BLUE
    printf("Welcome to Coffee We like cafe\n");
    printf("Please Enter ur name :");
    scanf("%s",&id);

//==============================================================================================================================================================================

    int Americano,Cappucino,Espresso,Latte,Mocha,Chocolate,Greentea,Thaimilktea,ChocolateCake,StrawberryCake,Blueberrycheesecake;
    int money,total,coins,all,sn,a,b,menu;
    int ch,amount;
    char a1[100];
    char hcf;
    //int Multi;
    
    int dis [6][6]={
	{0,10,15,20,25,30},
	{0,30,25,10,15,20},
	{0,10,30,25,20,15},
	{0,5,10,20,25,30},
	{0,35,30,15,25,10},
	{0,10,5,20,25,30}
	};

//============================================================================================================================================================================== 
   
mainmanu:
		
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MENU COFFE<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
    system("cls");
    printf("\nHi! %s this is a menu\n\n",id);
    system("color F6");//BROWN
	printf("----------------------------------------------------------------------------------------------------------------------------------------\n");              
	printf("|                MENU Coffee                 ||               MENU Non-Coffee               ||              MENU Bakery              |\n");
	printf("|                         Hot   Cold   Frappe||                          Hot   Cold   Frappe||                                  Price|\n");
	printf("|1.Americano              50    55     60    ||6.Chocolate               70    75     80    ||9.Chocolate Cake                  80   |\n");
	printf("|2.Cappucino              70    75     80    ||7.Green Tea               70    75     80    ||10.Strawberry Cake                120  |\n");
	printf("|3.Espresso               70    75     80    ||8.Thai Milk Tea           70    75     80    ||11.Blueberry Cheese Cake          165  |\n");
	printf("|4.Latte                  70    75     80    ||                                             ||                                       |\n");
	printf("|5.Mocha                  80    85     90    ||                                             ||                                       |\n");
	printf("----------------------------------------------------------------------------------------------------------------------------------------\n");
    
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MENU COFFE<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/

//==============================================================================================================================================================================
    
    printf("\n\nSelect menu: ");
    scanf("%d",&menu);

    
    switch (menu)
    {
        
        case 1 :
            
            printf("Would you like to get Americano Hot or Cold or Frappe\n\n");
            printf("Select your number (1.Hot 2.Cold 3.Frappe) :");
            scanf("%d",&hcf);
            
            
            	if (hcf < 2 && hcf > 0)
            	{
				printf("Hot americano 50 Bath\n\n");
				sn = 50;
    				
				}	
            	
           			
            	else if (hcf < 3 && hcf > 1)
            	{
				printf("Cold americano 55 Bath\n\n");
			    sn = 55;
    				
				}
            		
           		else if(hcf < 4 && hcf > 2)
           		{
				printf("Frappe americano 60 Bath\n\n");
				sn = 60;
    				
				}
				else
				{
					printf("error");
				}
            
        break;
        
        case 2 :
            
			printf("Would you like to get Cappucino Hot or Cold or Frappe\n");
            printf("Select your number (1.Hot 2.Cold 3.Frappe) :");
            scanf("%d",&hcf);
            
            	if (hcf < 2 && hcf > 0)
            	{
				printf("Hot Cappucino 70 Bath\n\n");
				sn = 70;
    				
				}	
            	
           			
            	else if (hcf < 3 && hcf > 1)
            	{
				printf("Cold Cappucino 75 Bath\n\n");
				sn = 75;
    				
				}
            		
           		else if(hcf < 4 && hcf > 2)
           		{
				printf("Frappe Cappucino 80 Bath\n\n");
				sn = 80;
    				
				}
				else
				{
					printf("error");
				}
            
        break;
        
        case 3 :
            
			printf("Would you like to get Espresso Hot or Cold or Frappe\n");
            printf("Select your number (1.Hot 2.Cold 3.Frappe) :");
            scanf("%d",&hcf);
            
            	if (hcf < 2 && hcf > 0)
            	{
				printf("Hot Espresso 70 Bath\n\n");
				sn = 70;
    				
				}	
            	
           			
            	else if (hcf < 3 && hcf > 1)
            	{
				printf("Cold Espresso 75 Bath\n\n");
				sn = 75;
    				
				}
            		
           		else if(hcf < 4 && hcf > 2)
           		{
				printf("Frappe Espresso 80 Bath\n\n");
				sn = 80;
				
				}
				else
				{
					printf("error");
				}
            
        break;
        
        case 4 :
            
			printf("Would you like to get Latte Hot or Cold or Frappe\n");
            printf("Select your number (1.Hot 2.Cold 3.Frappe) :");
            scanf("%d",&hcf);
            
				if (hcf < 2 && hcf > 0)
            	{
				printf("Hot Latte 70 Bath\n\n");
				sn = 70;
    				
				}	
            	
           			
            	else if (hcf < 3 && hcf > 1)
            	{
				printf("Cold Latte 75 Bath\n\n");
				sn = 75;
    				
				}
            		
           		else if(hcf < 4 && hcf > 2)
           		{
				printf("Frappe Latte 80 Bath\n\n");
				sn = 80;
    				
				}
				else
				{
					printf("error");
				}            
        break;
        
        case 5 :
            
			printf("Would you like to get Mocha Hot or Cold or Frappe\n");
            printf("Select your number (1.Hot 2.Cold 3.Frappe) :");
            scanf("%d",&hcf);
            
            	if (hcf < 2 && hcf > 0)
            	{
				printf("Hot Mocha 80 Bath\n\n");
				sn = 80;
    				
				}	
            	
           			
            	else if (hcf < 3 && hcf > 1)
            	{
				printf("Cold Mocha 85 Bath\n\n");
				sn = 85;
    				
				}
            		
           		else if(hcf < 4 && hcf > 2)
           		{
				printf("Frappe Mocha 90 Bath\n\n");
				sn = 90;
				
				}
				else
				{
					printf("error");
				}
            
        break;
        
        case 6 :
            
			printf("Would you like to get Chocolate Hot or Cold or Frappe\n");
            printf("Select your number (1.Hot 2.Cold 3.Frappe) :");
            scanf("%d",&hcf);
            
            	if (hcf < 2 && hcf > 0)
            	{
				printf("Hot Chocolate 70 Bath\n\n");
				sn = 70;
    				
				}	
            	
           			
            	else if (hcf < 3 && hcf > 1)
            	{
				printf("Cold Chocolate 75 Bath\n\n");
				sn = 75;
    				
				}
            		
           		else if(hcf < 4 && hcf > 2)
           		{
				printf("Frappe Chocolate 80 Bath\n\n");
				sn = 80;
    				
				}
				else
				{
					printf("error");
				}
            
        break;
        
        case 7 :
            
			printf("Would you like to get Green Tea Hot or Cold or Frappe\n");
            printf("Select your number (1.Hot 2.Cold 3.Frappe) :");
            scanf("%d",&hcf);
            
                if (hcf < 2 && hcf > 0)
            	{
				printf("Hot Green Tea 70 Bath\n\n");
		        sn = 70;
    				
				}	
            	
           			
            	else if (hcf < 3 && hcf > 1)
            	{
				printf("Cold Green Tea 75 Bath\n\n");
				sn = 75;
    				
				}
            		
           		else if(hcf < 4 && hcf > 2)
           		{
				printf("Frappe Green Tea 80 Bath\n\n");
	   			sn = 80;	
	   			
				}
				else
				{
					printf("error");
				}
            
        break;
        
        case 8 :
            
			printf("Would you like to get Thai Milk Tea Hot or Cold or Frappe\n");
            printf("Select your number (1.Hot 2.Cold 3.Frappe) :");
            scanf("%d",&hcf);
            	
				if (hcf < 2 && hcf > 0)
            	{
				printf("Hot Thai Milk Tea 70 Bath\n\n");
    			sn = 70;	
				}	
            	
           			
            	else if (hcf < 3 && hcf > 1)
            	{
				printf("Cold Thai Milk Tea 75 Bath\n\n");
    			sn = 75;	
				}
            		
           		else if(hcf < 4 && hcf > 2)
           		{
				printf("Frappe Thai Milk Tea 80 Bath\n\n");
    			sn = 80;	
				}
				else
				{
					printf("error");
				}
            
        break;
        
        case 9 :

			sn = 80 ;
			printf("Chocolate Cake 80 Bath\n\n");
            
        break;
        
        case 10 :
            
			sn = 120;
			printf("Strawberry Cake 120 Bath\n\n");
			

		break;
        
        case 11 :
            
            
            printf("Blueberry Cheese Cake 165 Bath\n\n");
            sn = 165;
        
        
		break;
    }
        
        
//==============================================================================================================================================================================
   
        	printf("\n------------------------The game to get a discount------------------------\n");
        	printf("\n");
        	
            printf("Enter your Lucky number(1-5): ");
            scanf("%d",&a);
            
            printf("Enter your Lucky number again(1-5): ");
            scanf("%d",&b);
            
            printf("\nYour discount is   : %d Bath\n",dis[a][b]);
            
            all = sn - dis[a][b];
            
            printf("\nTotal              : %d Bath\n\n",all);
            
        do {
	
            printf("Please enter your amount  : ");
        	scanf("%d",&amount);
        	
        }while(all > amount);
            
		
        
            printf("\nCash               : %d Bath\n",amount);
            
            
            ch = change(all,amount);
			printf("Change             : %d Bath\n",ch);
			
			printf("\n--------------------------------------------------------------------------\n");
			

//==============================================================================================================================================================================
            
			printf("                  _                                                                                                \n");
			printf("                 | |            _____   ______   _____  _____  _____  _____                                        \n");
			printf("                 | |           |       |      | |      |      |      |                                             \n");
			printf("       __________|_|___        |       |      | |_____ |_____ |_____ |_____                                        \n");
			printf("      |________________|       |       |      | |      |      |      |                                             \n");
			printf("       |              |        |_____  |______| |      |      |_____ |_____                                        \n");
			printf("       |//////////////|                                                                                            \n");
			printf("       |//////////////|                 ____                      ____                                             \n");
			printf("       |              |        |    |  |           |     |  | /  |                                                 \n");
			printf("       |              |        |    |  |____       |     |  |/   |____                                             \n");
			printf("       |//////////////|        | /\\ |  |           |     |  |\\   |                                               \n");
			printf("       |//////////////|        |/  \\|  |____       |____ |  | \\  |____                                           \n");
			printf("       |______________|                                                                                            \n");
			printf("                                                                                                                   \n");
			
//==============================================================================================================================================================================			
			
}
        
        int change(int all,int amount)
{
	    int ch;
	    ch = amount - all;
	    return ch;
}
