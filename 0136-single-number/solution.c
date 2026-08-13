int singleNumber(int* nums, int numsSize) {
    
    int result = 0;
    for(int i=0; i<numsSize; i++){
        result = result ^ nums[i];
    }

    return result;


    // for (int i = 0; i < numsSize; i++) {
    //     int flag = 0;
    //     for (int j = 0; j < numsSize; j++) {
    //         if (i != j && nums[i] == nums[j]) {
    //             flag = 1;
    //             break;
    //         } 
    //     }
    //     if (flag == 0)
    //         return nums[i]; 
    // }
    // return -1;
}
