#include<stdio.h>
int *twoSum(int *nums,int numsSize,int target,int *returnSize);
int main()
{
    int nums_spease,target,left,first,second,captive,Size_;
    
    //确定nums[]的大小。
    printf("Please enter the captive of nums[]:");
    scanf("%d",&captive);
    printf("You enter %d as the captive.\n",captive);
    int nums[captive];
    
    //对数组nums[]进行输入。
    printf("Please enter the nums:\n");
    nums_spease = 0;
    do{
        printf("This is the %d plase in nums[].\n",nums_spease);
        printf("Enter it:");
        scanf("%d",&nums[nums_spease]);
        printf("Success!nums[%d]:%d.\n",nums_spease,nums[nums_spease]);
        ++nums_spease;
    } while(nums_spease<captive);
    
    //确定target的值。
    printf("Please enter target:");
    scanf("%d",&target);

    //确定target的值。
    printf("Please enter Size:");
    scanf("%d",&Size_);

    
    //函数计算。
    *twoSum(nums,captive,target,Size_);



    printf("OVER!\n");
    return 0;
}

int *twoSum(int *nums,int numsSize,int target,int *returnSize)
{
    
    int first = 0 ,second ,n = 0;
    while(first < numsSize && n < *returnSize){
        for(second = first ; target - (*nums+first) != (*nums+second) && second < numsSize;++second){}
        if ((*nums+second)==target-(*nums+first)){
            printf("[first,second]:[%d,%d]\n",first,second);
            ++n;
            }
        ++first;
    }
    return 0 ;
}








