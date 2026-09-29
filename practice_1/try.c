#include<stdio.h>
int main()
{
    int n,target,left,p,m,q;
    printf("Please enter the numbers of nums[]:\n");
    scanf("%d",&q);
    printf("%d\n",q);
    int nums[q];
    printf("Please enter the nums:\n");
    n=0;
    do
    {   printf("%d\n",n);
        scanf("%d",&nums[n]);
        printf("%d,%d\n",nums[n],n);
        ++n;
        printf("%d\n",n);
    } while(n<q);             //    for(n=0;n<=q && nums[n]==1;){
                                               //        scanf("%d",&nums[n]);
                                               //        printf("%d,%d\n",nums[n],n);
                                               //        ++n;
                                               //    }
    p=0;
    m=p;                                           
    printf("Please enter target:");
    scanf("%d",&target);
    while(p<q){
        left=target-nums[p];
        printf("left:%d,target:%d\n",left,target);
        m=p;
        for(m=p;left!=nums[m] && m<q;){
            printf("nums[m]:%d,nums[p]:%d\n",nums[m],nums[p]);
            ++m;
        }
        if (nums[m]==target-nums[p])
            printf("[p,m]:[%d,%d],target:%d,nums[p]:%d,nums[m]:%d\n",p,m,target,nums[p],nums[m]);
        ++p;
    }
    printf("OVER!\n");
    return 0;
}