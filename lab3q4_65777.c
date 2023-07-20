#include <stdio.h>
int main() {
	int n = 0;
	int sum = 0;
	int count = 0;
	printf("enter a number : ");
	scanf("%d", &n);
	
	while (n > 0){
		sum += n;
		count++;
		printf("enter a number : ");
		scanf("%d", &n);
	}

	
	if (count > 0){
		float avg = (float)sum / (float)count;
		printf("sum of number : %d\n", sum);
		printf("average of number %.2f\n: ", avg); 
	} else {
		printf("no number entered");
	}
	return 0;
}

