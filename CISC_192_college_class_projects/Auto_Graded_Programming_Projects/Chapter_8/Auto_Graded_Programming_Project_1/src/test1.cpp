int findMissingNumber(int arr[], int size) {
    // Calculate the expected sum of numbers from 0 to size (inclusive)
    int expectedSum = size * (size + 1) / 2;

    // Calculate the actual sum of the array elements
    int actualSum = 0;
    for (int i = 0; i < size; ++i) {
        actualSum += arr[i];
    }

    // The missing number is the difference between the expected sum and the actual sum
    return expectedSum - actualSum;
}
