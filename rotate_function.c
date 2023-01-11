int maxRotateFunction(int* nums, int numsSize){
    int max=INT_MIN;
   for(int i=0;i<numsSize;i++){
       int s=0;
       for(int j=0;j<numsSize
           ;j++){
           int d=i+j;
           if(d>=numsSize){
               d=d-numsSize;
           }
           int ss=nums[j]*d;
            s=ss+s;
           if(max<s){
           max=s;
       }
       }
   }
    return max;
}