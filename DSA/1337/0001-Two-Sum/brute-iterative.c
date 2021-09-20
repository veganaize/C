#include <stdio.h>
#include <stdlib.h>  /* malloc, free */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i, j;
    int* array = malloc(2 * sizeof (int));
    *returnSize = 2;

    for (i = 0;; i++) {
        for (j = i+1; j < numsSize; j++) {
            if (target == nums[i] + nums[j]) {
                array[0] = i;
                array[1] = j;
                return array;
            }
        }
    }
}


void display_results(int* results)
{
    printf("%d, %d\n", results[0], results[1]);
}


int main()
{
    int  nums1[] = {2, 7, 11, 15}; int target1 = 9;  /* {0, 1} */
    int  nums2[] = {3, 2, 4};      int target2 = 6;  /* {1, 2} */
    int  nums3[] = {3, 3};         int target3 = 6;  /* {0, 1} */
    int* results_ptr;
    int  results_size;

    results_ptr = twoSum(nums1, sizeof nums1 / sizeof (int), target1, &results_size);
    display_results(results_ptr);
    free(results_ptr);

    results_ptr = twoSum(nums2, sizeof nums2 / sizeof (int), target2, &results_size);
    display_results(results_ptr);
    free(results_ptr);

    results_ptr = twoSum(nums3, sizeof nums3 / sizeof (int), target3, &results_size);
    display_results(results_ptr);
    free(results_ptr);

    return 0;
}
