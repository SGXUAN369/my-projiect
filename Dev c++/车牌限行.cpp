# include<stdio.h>
int main()
{
	int day;
	int fog;
	int car;
	scanf("%d %d %d",&day,&fog,&car);
	int tail=car%10;
	if(day==6||day==7){
		printf("%d %s",tail,"no");
	}else{if(fog<200){
	printf("%d %s",tail,"no");
	}else if(fog<400){
	if(day==5){
	if(tail==5||tail==0){
		printf("%d %s",tail,"yes");
	}else{printf("%d %s",tail,"no");
	}}else{if(tail==day||tail==day+5){
		printf("%d %s",tail,"yes");
	}else{printf("%d %s",tail,"no");
	}
	}
	}
	else{if(day%2==tail%2){
	printf("%d %s",tail,"yes");}
	else{printf("%d %s",tail,"no");
	}
	}
	}
	return 0;
}
