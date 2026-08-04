int removeDuplicates(int* nums, int numsSize) {
    int count = numsSize;

    for (int i = 0; i < count - 1; i++) {

        if (nums[i] == nums[i + 1]) {

            for (int j = i; j < count - 1; j++) {
                nums[j] = nums[j + 1];
            }

            count--;
            i--;
        }
    }

    return count;
}
