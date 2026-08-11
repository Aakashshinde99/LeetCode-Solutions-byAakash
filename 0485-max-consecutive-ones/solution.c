int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int current = 0, max = 0;

    for(int i=0;i<numsSize;i++){
        if(nums[i] == 1){
            current++;
            if(current > max){
                max = current; 
            }
        }
            
        else if(nums[i] == 0){
            current = 0;
        }
        
    }
    return max;
   
    // int l = 0, r = 1, count = 0; 
    // if(numsSize < 2){
    //     if(nums[l] == 0)
    //         count = 0;
    //     else{
    //         count = 1;
    //     }
    // }
    // while(r < numsSize){
        
    //     if(nums[l] == 0){
    //         l++; r++;
    //     }
    //     else if(r == (numsSize-1) && nums[r] == 1 && nums[l] == 1){
    //         count = numsSize - l;
    //         l++; r++;
    //     }
    //     else if(nums[l] == 1 && nums[r] == 1){
    //         if(r < numsSize)
    //             r++;
    //     }
    //     else if(nums[l] == 1 && nums[r] == 0){
    //         count = r - l;
    //         l = r;
    //         r++;
    //     }
    // }
    // return count;
}
