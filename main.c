#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
/*
Brute force metod
O((n^2-n)/2)~O(n^2)
very bad
*/
int* twoSum_bf(int* nums, int numsSize, int target, int* returnSize, uint32_t *complexity)
{
    *complexity = 0;
    returnSize = (int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
        for(int j=i+1;j<numsSize;j++)
        {
            (*complexity)++;
            if(nums[i]+nums[j]==target)
            {
                returnSize[0]=i;
                returnSize[1]=j;
                return returnSize;
            }
        }
    return 0;
}

/*
 * smart
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
  //allocate return array
  returnSize=malloc(2*sizeof(int));
  returnSize[0]=0;
  returnSize[1]=0;
  //search array elem
  int complexity=0;
  for(int i=0;i<numsSize;i++)
  {

  }
  return returnSize;
}
int main()
{
  int nums[]={0,1,2,3,4,5,6,7,8,9};
  int numsSize=(int)sizeof(nums)/sizeof(int);
  printf("\nnumsSize=%d",numsSize);
  int target=17;
  int* returnSize=0;
  uint32_t compl=0;
  returnSize=twoSum_bf(nums,numsSize,target,returnSize,&compl);
  printf("\nfirst= %d",returnSize[0]);
  printf("\nsecond= %d",returnSize[1]);
  printf("\ncomplexity = %u",compl);
  printf("\n");
  free(returnSize);
  return 0;
}
