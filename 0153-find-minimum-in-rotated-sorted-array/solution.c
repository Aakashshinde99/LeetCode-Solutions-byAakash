int findMin(int* nums, int numsSize) {
    int l = 0, r = numsSize-1, mid = 0, index = 0;
    while(l <= r){
        mid = (l+r) / 2;//1 
        if(nums[mid] <= nums[numsSize-1]){
            r = mid-1;
            index = mid;
        }
        else{
            l = mid+1;
        }
    }
    return nums[index];
}
