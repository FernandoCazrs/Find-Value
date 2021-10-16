#include <stdio.h>
#include <stdbool.h>

#define arr_size 10
int A[arr_size] = { 1, 4, 45, 6, 10, 8, 6,24,30, 2};


// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
bool find3Numbers(int A[], int sum)
{
	int l, r;

	// Fix the first element as A[i]
	for (int i = 0; i < arr_size - 2; i++) {

		// Fix the second element as A[j]
		for (int j = i + 1; j < arr_size - 1; j++) {

			// Now look for the third number
			for (int k = j + 1; k < arr_size; k++) {
				if (A[i] + A[j] + A[k] == sum) {					
					return true;
				}
			}
		}
	}

	// If we reach here, then no triplet was found
	return false;
}

/* Driver program to test above function */
int main()
{
	int sum = 22;
	find3Numbers(A,  sum);
	return 0;
}
