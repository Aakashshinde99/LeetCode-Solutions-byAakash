int removeDuplicates(int* nums, int numsSize) {
    
    int r = 1, l = 0;
    while(r < numsSize){
        if(nums[l] == nums[r]){
            r++;
        }
        else{
            nums[++l] = nums[r];
            
        }
        
    }
    return l+1;
    
    // int count = numsSize;

    // for (int i = 0; i < count - 1; i++) {

    //     if (nums[i] == nums[i + 1]) {

    //         for (int j = i; j < count - 1; j++) {
    //             nums[j] = nums[j + 1];
    //         }

    //         count--;
    //         i--;
    //     }
    // }

    // return count;
}
