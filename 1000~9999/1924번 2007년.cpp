#include<stdio.h>
int main(){
	int input1, input2;
	int answer = 0;
	
	scanf("%d %d", &input1, &input2);
	
	for(int i = 1; i < input1; i++){
		if(i == 4 || i == 6 || i == 9 || i == 11)
			answer += 30;
		else if(i == 2)
			answer += 28;
		else
			answer += 31;
	}
	
	answer = (answer + input2) % 7;
	
	if(answer == 1)
		printf("MON");	
	else if(answer == 2)
		printf("TUE");	
	else if(answer == 3)
		printf("WED");	
	else if(answer == 4)
		printf("THU");	
	else if(answer == 5)
		printf("FRI");	
	else if(answer == 6)
		printf("SAT");	
	else if(answer == 7 || answer == 0)
		printf("SUN");	
	else
		("³ë´ä");
}
