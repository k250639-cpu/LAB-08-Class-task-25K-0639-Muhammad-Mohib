#include <stdio.h>
int main(){
	int i, j, max = 0, row1, col1;
	int arr[3][3] = {{12,34,56}, {72,4,6}, {90, 67, 12}};
	for(i = 0; i < 3; i++ ){
		for( j = 0; j < 4; j++){
			if(arr[i][j] > max){
				max = arr[i][j];
				row1 = i;
				col1 = j;
			}
		}
	}
	printf("The Maximum Number is: %d\nRow: %d\nColumn: %d", max, row1, col1);
	return 0;
}
