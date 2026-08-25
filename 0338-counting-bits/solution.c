/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int countB(int n);
int* countBits(int n, int* returnSize) {

    *returnSize = n + 1;
    int* ans = malloc((*returnSize) * sizeof(int));

    for (int i = 0; i < n+1; i++) {
        ans[i] = countB(i);
    }
    return ans;
}

int countB(int n) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if ((1U << i) & n) {
            count++;
        }
    }
    return count;
}
