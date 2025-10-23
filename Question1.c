#include <stdio.h>
int main(){
	int num = 0, i, j;
	printf("Enter the no. of multiplication tables you want(Multiples only till 10): ");
	scanf("%d", &num);
	for(i = 1; i < num + 1; i++ ){
		printf("%d:  ", i);
		for( j = 1; j < 11; j++){
			printf("%d  ", i*j);
		}
		printf("\n");
	}
	return 0;
}
