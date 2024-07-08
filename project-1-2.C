#include<stdio.h>

main()
{
	int gs,hra,da,ta,bs;
	printf("Enter basic salary=");
	scanf("%d",&bs);
	printf("Enter the HRA=");
	scanf("%d",&hra);
	printf("Enter the DA=");
	scanf("%d",&ta);
	printf("Enter the TA=");
	scanf("%d",&da);
	hra=(10*bs)/100;
	da=(5*bs)/100;
	ta=(8*bs)/100;
	gs=hra+ta+da+bs;
	printf("gross salary =%d",gs);
////	float Basic,HRA,DA,TA,gross_salary;
////	printf("Enter the Basic salary=");
////	scanf("%f",&basic);
////	printf("Enter the HRA=");
////	scanf("%f",&hra);
////	printf("Enter the DA=");
////	scanf("%f",&ta);
////	printf("Enter the TA=");
////	scanf("%f",&da);
////	
////	hra=(20*basic)/100;
////	da=(12*basic)/100;
////	ta=(8*basic)/100;
////	
////	gross_salary=basic+hra+da+ta;
////	printf("%f",gross_salary);
} 