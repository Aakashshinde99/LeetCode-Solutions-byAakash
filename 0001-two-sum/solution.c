/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int i, j;
    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < numsSize; j++) {
            if (i != j && nums[i] + nums[j] == target) {
                goto final;
            }
        }
    }
final:
    int* p = malloc(*returnSize * sizeof(int));
    p[0] = i;
    p[1] = j;
    return p;
}
