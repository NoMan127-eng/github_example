#include<stdio.h>
int main()
{
    int nums_spease,target,left,first,second,captive;
    printf("Please enter the captive of nums[]:");
    scanf("%d",&captive);
    printf("You enter %d as the captive.\n",captive);
    int nums[captive];
    printf("Please enter the nums:\n");
    nums_spease = 0;
    do{
        printf("This is the %d plase in nums[].\n",nums_spease);
        printf("Enter it:");
        scanf("%d",&nums[nums_spease]);
        printf("Success!nums[%d]:%d.\n",nums_spease,nums[nums_spease]);
        ++nums_spease;
        
    } while(nums_spease<captive);
    printf("Please enter target:");
    scanf("%d",&target);
    first = 0 ;
    while(first < captive){
        left = target - nums[first];
        second = first ;
        for(second = first ; left != nums[second] && second < captive;++second){

        }
        if (nums[second]==target-nums[first]){
            printf("[first,second]:[%d,%d],target:%d,nums[first]:%d,nums[second]:%d\n",first,second,target,nums[first],nums[second]);
        }
        ++first;
    }
    printf("OVER!\n");
    return 0;
}


