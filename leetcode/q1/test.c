/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int result[2];
int* twoSum(int* nums, int numsSize, int target) {
    int sumResult;
    int *numsCol;
    int *numsRow;
    
    for(numsRow = nums; (numsRow - nums) < numsSize; numsRow++) {
        for(numsCol = (numsRow + 1);(numsCol - nums) < numsSize; numsCol++) {
            if (*numsRow + *numsCol == target) {
                result[0] = (numsRow-nums);
                result[1] = (numsCol-nums);
                return result;
            }
        }
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
