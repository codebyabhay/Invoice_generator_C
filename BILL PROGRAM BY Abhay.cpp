#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){
	//INTRODUCTION :- 
	printf("\t\t\t\t\t\t\t\tBILL GENERATED SOFTWARE BY ABHAY");
	//CUSTOMER DETAILS :-
	char name[30];
	int phone_number;
	printf("\n\n[[CUSTOMER INFORMATION]]");
	printf("\n\n\nCUSTOMER NAME = ");
	gets(name);
	printf("\nPHONE NUMBER = ");
	scanf("%d",&phone_number);
	//FOOD MENU PRICE QUANTITY :-
	int a=100,b=150,c=250,d=80,e,f,g,h;
	printf("\n\n[[FOOD MENU]]\n");
	//FOOD NUMBER ONE (BURGER) :-
	printf("\nITEM\t\t\tPRICE\t\tQTY.\n");
	printf("\nBURGER\t\t\tRs.100\t\t");
	scanf("%d",&e);
	printf("%d",a*e);
	//FOOD NUMBER TWO (SANDWICH) :-
	printf("\nSANDWICH\t\tRs.150\t\t");
	scanf("%d",&f);
	printf("%d",b*f);
	//FOOD NUMBER THREE (PIZZA) :-
	printf("\nPIZZA\t\t\tRs.250\t\t");
	scanf("%d",&g);
	printf("%d",c*g);
    //FOOD NUMBER FOUR (COLD DRINK) :-
	printf("\nCOLD DRINK\t\tRs.80\t\t");
	scanf("%d",&h);
	printf("%d",d*h);
	//PAYMENT OPTION:-
	int x,y,z;
	printf("\n\n[[PAYMENT TYPE]]");
	printf("\n\nSELECT PAYMENT TYPE\n1.CASH\n2.ONLINE\n3.NET BANKING\nENTER = ");
	scanf("%d",&x);
	if(x==1){
		printf("");
	}
	else if(x==2){
		printf("");
	}
	else if(x==3){
		printf("ENTER A/C NO. = ");
		scanf("%d",&y);
		printf("UPI PIN = ");
		scanf("%d",&z);
	}
	else{printf("ERROR");
	}
	//FINAL BILL AMOUNT :-
	printf("\n\n\n\n---------------------BILL GENERATED---------------------");
	int i=a*e,j=b*f,k=c*g,l=d*h;
	printf("\n__________________\nCUSTOMER DETAILS\n__________________");
	printf("\n\nCUSTOMER NAME :  %s",name);
	printf("\nINVOICE ID : %d",phone_number+82);
	//DATE AND TIME :-
	time_t t;
	time(&t);
	printf("\nDATE AND TIME : %s",ctime(&t));
	//BILL INFORMATION :-
	printf("__________________\nBILL DETAILS\n__________________\n");
	printf("\nItem Name\tQty.\tAmount");
	printf("\nBURGER\t\t %d\t%d",e,i);
	printf("\nSANDWICH\t %d\t%d",f,j);
	printf("\nPIZZA  \t\t %d\t%d",g,k);
	printf("\nCOLD DRINK \t %d\t%d",h,l);
	//FINAL BILL :-
	printf("\n__________________\nFINAL BILL\n__________________\n");
	printf("\nTOTAL BILL AMOUNT : Rs.%d",i+j+k+l);
		
	//THANK YOU MESSAGE :-
	printf("\n\nTHANK YOU");
	printf("\n---------------------------------------------------");
	getch();
}



//.....CODE BY ABHAY KUMAR SINGH
