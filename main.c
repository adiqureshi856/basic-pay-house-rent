 #include <stdio.h>
int main() {	
	int BP, HR ,NP;
	// This part takes Basic pay of employee
	printf("\nEnter your Basic Pay ");
	scanf("%d",&BP);
	// Conditional part 
	if(BP<25000)
	{
		HR = (BP/100)*30;
		printf("\nYour House rent w.r.t Basic pay = %d",HR);
		NP= BP+HR;
		printf("\nYour Net Pay = %d",NP);
	}
	else if ((BP>=25000)&&(BP<=40000))
	{
		HR = (BP/100)*40;
		printf("\nYour House rent w.r.t Basic pay = %d",HR);
		NP= BP+HR;
		printf("\nYour Net Pay = %d",NP);
	}
	else 
	{
		HR = (BP/100)*50;
		printf("\nYour House rent w.r.t Basic pay = %d",HR);
		NP= BP+HR;
		printf("\nYour Net Pay = %d",NP);
	}
	getch();
	return 0;
}
