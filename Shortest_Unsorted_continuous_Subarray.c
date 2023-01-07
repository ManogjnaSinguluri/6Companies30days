int findUnsortedSubarray(int* nums, int numsSize){
    int i=0,j=0;
    while(i<numsSize-1){
        for(j=i+1;j<numsSize;j++){
            if(nums[j]<nums[i]){
                break;
            }
        }
            if(j!=numsSize){
                break;
            }
        i++;
    }
    if(i==numsSize-1){
        return 0;
    }
    int k=numsSize-1;
    int u;
    while(k>0){
        for(u=k-1;u>=0;u--){
            if(nums[u]>nums[k]){
                break;
            }
        }
        if(u!=-1)
        {
            break;
        }
        k--;
    }
    return k-i+1;
}