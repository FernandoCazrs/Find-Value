/* Codigo tomado de https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/ */
/* Modificado por: Fernando Cazares Jimenez */

#include<stdio.h>

#define arr_size 10
int A[arr_size] = { 1, 4, 45, 6, 10, 8, 6,24,30, 2};

/*Function to return max sum such that no two elements
are adjacent */

int comparation(element1, element2){

	int aux;

	if(element1 > element2){
		aux = element1;
	}else{
		aux = element2;
	}
	
	return aux;
}

int FindMaxSum(int arr[], int n) {
    
    int incl = arr[0];
    int excl = 0;
    int excl_new;
    int i;

    for (i = 1; i < n; i++) {
    	/* current max excluding i */
    	excl_new = comparation(incl, excl);

    	/* current max including i */
	    incl = excl + arr[i];
	    excl = excl_new;
    }

    int result = comparation(incl, excl);

    /* return max of incl and excl */
    return result;

}

/* Driver program to test above function */
int main() {
    
    FindMaxSum(A, arr_size);
    //printf("%d n", FindMaxSum(A, arr_size));
    return 0;
}
