#include<stdio.h>
int main()
{
    int n,target,left,p=0,m,q;
    int nums[q];
    printf("Please enter the numbers of nums[]:\n");
    scanf("%d",&q);
    printf("Please enter the nums:\n");
    for(n=0;n<=q;){
        scanf("%d",&nums[n]);
        printf("%d,%d\n",nums[n],n);
        ++n;
    }
    printf("Please enter target:\n");
    scanf("%d",&target);
    while(left=target-nums[p]){
        for(m=p;left!=nums[m] && m<q;){
            ++m;
        }
        printf("[%d,%d]\n",p,m);
        ++p;
    }
    printf("OVER!\n");
    return 0;
}