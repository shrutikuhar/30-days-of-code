//FUNCTION TO PRINT SUM OF ARRAY ELEMENTS

int arraySum(int numbers[], int size){
    return accumulate(numbers, numbers+size, 0);
}
