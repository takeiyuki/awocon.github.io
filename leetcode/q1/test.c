/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int result[2];
int* twoSum(int* nums, int numsSize, int target) {
	int** hash;
	hash = (int**)malloc(sizeof(int*)*target);
	int* numsCol;
	int* numsRow;
	
	for(numsRow = nums; (numsRow - nums) < numsSize; numsRow++) {
		
		if (hash[*numsRow] != '\0') {
			result[0] = hash[*numsRow] - nums;
			result[1] = numsRow - nums;
			return result;
		}
		hash[target - *numsRow] = numsRow; 

	}
	return result;
}

int main() {
	int* nums = (int*)malloc(sizeof(int)*3);
	nums[0] = 3;
	nums[1] = 2;
	nums[2] = 4;
	int* test = (int*)malloc(sizeof(int)*2);
	test = twoSum(nums, 3, 6);
	printf("%d,%d",test[0],test[1]);
}
