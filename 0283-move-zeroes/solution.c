void moveZeroes(int* nums, int numsSize) {
    int l = 0, r = 1;
    while(r < numsSize){
        if(nums[l] == 0 && (nums[r] > 0 || nums[r] < 0)){
            nums[l] = nums[r];
            nums[r] = 0;
            l++; r++;
        }
        else if(nums[l] > 0 && nums[r] == 0){
            l++; r++;
        }
        else if(nums[l] > 0 && nums[r] > 0){
            l++; r++;
        }
        else if(nums[l] < 0 || nums[r] < 0){
            l++; r++;
        }
        else{
            r++;
            
        }
    }

}
