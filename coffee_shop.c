#include <stdio.h>
#include <stdbool.h>
#include<stdio.h>
#include<stdlib.h>
int Enterypage();
void cold()
{
	int value;
	int price=30;
	int quat;
	printf("enter the quantity:\n");
	scanf("%d",&quat);
	value=price*quat;
	printf("total amount:%d\n",value);
	printf("-----------thankyou-----------\n");
    FILE *ptr;
    if((ptr=fopen("C:\\Users\\Mr Lathikeshwaran\\OneDrive\\Documents\\logi","w"))==0)
    {
        printf("error");
        exit(0);
	}
	
	char num[90]="------------ bill amount--------------\n clod coffe\nthe total amount is:";
	fprintf(ptr,"%s",num);
	fprintf(ptr,"%d",value);
	fclose(ptr);
	
}
void hot(){
		int value;
	int price=20;
	int quat;
	printf("enter the quantity:\n");
	scanf("%d",&quat);
	value=price*quat;
	printf("total amount:%d\n",value);
	printf("-----------thankyou-----------\n");
	    FILE *ptr;
    if((ptr=fopen("C:\\Users\\Mr Lathikeshwaran\\OneDrive\\Documents\\logi","w"))==0)
    {
        printf("error");
        exit(0);
	}
	char num[90]="------------ bill amount--------------\nthe  coffe\nthe total amount is:";
	fprintf(ptr,"%s",num);
	fprintf(ptr,"%d",value);
	fclose(ptr);
	
}

void black(){
		int value;
	int price=50;
	int quat;
	printf("enter the quantity:\n");
	scanf("%d",&quat);
	value=price*quat;
	printf("total amount:%d\n",value);
	printf("-----------thankyou-----------\n");
	    FILE *ptr;
    if((ptr=fopen("C:\\Users\\Mr Lathikeshwaran\\OneDrive\\Documents\\logi","w"))==0)
    {
        printf("error");
        exit(0);
	}
	char num[90]="..coffeshop..\n------------ bill amount--------------\nthe black coffe\nthe total amount is:";
	fprintf(ptr,"%s",num);
	fprintf(ptr,"%d",value);
	fclose(ptr);
	
}

int Enterypage()
{  
 
      
       char choice[78];
	printf("---------------------------------welcome--t0--the--coffee--shope----------------------------------------\n");
	printf("------------the list of menu----------\npress one for this->1.cold coffee\npress two for this->2.hot coffee\npress three for this->3.black coffee\n");
     printf("enter your choice:");
	scanf("%s",choice);
	if((strcmp(choice,"1"))==0)
              cold();
	else if((strcmp(choice,"2"))==0)	    
	         hot();
    else if((strcmp(choice,"3"))==0)         
	         black();
	else{
		printf("nothing is selected\n");
		     return 0;
	
	    }
	
    return 1;
      }

int main()
{
	int epflag=Enterypage();
//	printf("%d",epflag);
	int i=1;
	while(i)
	{
	if(epflag==1)
	{
		int epflag2;
      	printf("do you want enter the choice\npress 1 to YES\npress 2 to NO\n");
      	scanf("%d",&epflag2);
      	if(epflag2==1)
      	
      		epflag=Enterypage();
		else if(epflag==2)
		  	 i=0;
		else{
		   printf("sorry wrong option");  
		     i=0;
}
}
	 }
}
