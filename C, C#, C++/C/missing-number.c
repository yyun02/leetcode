int missingNumber(int* nums, int numsSize) {
    // size 3 - 0 1 2 3
    // size 4 - 0 1 2 3 4

    int sum = numsSize*((numsSize+1)/2);

    if (numsSize%2 ==0){
        sum+= numsSize/2;
    }

    int givenSum = 0;

    for (int i = 0; i < numsSize; i++){
        givenSum += nums[i];
    }

    return sum - givenSum;
}