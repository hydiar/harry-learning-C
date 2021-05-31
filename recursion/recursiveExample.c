/* 	Given an integer n, break it into the sum of 'k' positive integers,
	where k >= 2, and maximize the product of those integers.
	Return the maximum product you can get				*/

#include <stdio.h>
#include <stdlib.h>

int intbreak(int input); 					//function prototype for intbreak function

int main() {							//takes the input of an integer, and outputs the function result
	int input = 0;
	printf("Input the number to be checked: \n");
	scanf("%d", &input);
	printf("Maximum product: %i\n", intbreak(input));
	return 0;
}

int intbreak(int n) {						//Break integer into sum of parts > 2. Return highest multiple of these parts
	int prod, i;
	int ans = 0;
	int k1, k2;
	k1 = k2 = 0;
	
	if (n <= 2)						//Base case
		return 1;

	prod = n - 1;
	for (i = 2; i < n; ++i) {
		k1 = (n - i);
		if (k1 > (k2 = intbreak(k1)))			//Recursive call
			prod = i * k1;
		else
			prod = i * k2;
		if (prod > ans)
			ans = prod;
	}
	return ans;
	
}
