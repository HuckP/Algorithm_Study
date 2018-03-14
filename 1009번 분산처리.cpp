#include<stdio.h>
int main(){
	int a;
	int b;
	int temp; 
	int input;
	int i, j;
	
	
	scanf("%d", &input);
	
	for(i=0; i<input; i++){
		scanf("%d %d", &a, &b);
		
		temp = a;
		
		for(j=0; j<b-1; j++)
			a = temp * a % 10;
		
		
		if(a == 0)
			a=10;
		
		printf("%d\n", a);
	}
	
	return 0;
}
