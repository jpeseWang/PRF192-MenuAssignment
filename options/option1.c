#include<stdio.h>

void option1() {
	FILE* file = fopen ("./inputs/input1.txt", "r");
	int len1, len2, i;
	
	fscanf(file, "%d", &len1);
	int arr1[len1];
	for(i= 0; i != len1; i++) fscanf(file, "%d", (arr1+i));
	
	fscanf(file, "%d", &len2);
	int arr2[len2];
	for(i= 0; i != len2; i++) fscanf(file, "%d", (arr2+i));
	
	fclose(file);

	printf("First array: ");
	for(i= 0; i != len1; i++) printf("%d ", arr1[i]);
	printf("\n");

	printf("Second array: ");
	for(i= 0; i != len2; i++) printf("%d ", arr2[i]);
	printf("\n");
	
	int resLength = len1 + len2;
	int res[resLength];
	
	len1--; len2--;
	i= 0;
	while(len1 != -1 && len2 != -1) {
		if(arr1[len1] >= arr2[len2]){
			res[i] = arr1[len1];
			len1--;
		} else {
			res[i] = arr2[len2];
			len2--;
		}
		i++;
	}
	
	while(len1 != -1) {
		res[i] = arr1[len1];
		len1--; i++;
	}
	
	while(len2 != -1) {
		res[i] = arr2[len2];
		len2--; i++;
	}
	
	printf("Two join arrays in descending order: ");
	for(i= 0; i != resLength; i++) printf("%d ", res[i]);
	printf("\n");
	
}
