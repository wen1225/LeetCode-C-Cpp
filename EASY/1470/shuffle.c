/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int* initialize(int* array, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        array[i] = 0;
    }
    return array;
}

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* newArray = malloc(sizeof(int)*numsSize);
    newArray = initialize(newArray, numsSize);
    
    //Populate newArray with nums's x elements
    for (int x = 0; x < n; x++) {
        newArray[2*x] = nums[x];
    }
    
    //Populate newArray with num's y elements
    int i = 1;
    for (int y = n; y < numsSize; y++) {
        newArray[i] = nums[y];
        i+=2;
    }
    
    *returnSize = numsSize;
    return newArray;
}
