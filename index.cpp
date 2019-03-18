#include<stdio.h>
int main(){
	int index;
	printf("Enter your index");
	scanf("%d",&index);
	if(index==0)
	{
		printf("Monday");
	} else if(index==1){
		printf("Tuesday");
	}else if(index==2){
		printf("Wednesday");
	}else if(index==3){
		printf("Thursday");
	}
	else if(index==4){
		printf("Friday");	
	}
	else if(index==5){
		printf("Saturday");
		}
	else if(index==6){
	    printf("Sunday");}
else{
	printf("invalid");
}	    
return 0;
}
