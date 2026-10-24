// Problem: SESO32
// Platform: codechef
// Language: function countingSort(array):
    if array is empty:
        return
    
    maxValue = findMaxValue(array)
    minValue = findMinValue(array)
    range = maxValue - minValue + 1

    // Create and initialize the counting array
    count = array of size range initialized to 0
    output = array of the same size as input

    // Count occurrences of each element
    for each element num in array:
        index = num - minValue
        count[index] = count[index] + 1

    // Accumulate counts
    for i from 1 to range - 1:
        count[i] = count[i] + count[i - 1]

    // Build the output array
    for i from length(array) - 1 down to 0:
        num = array[i]
        index = num - minValue
        output[count[index] - 1] = num
        count[index] = count[index] - 1

    // Copy the output array to the original array
    for i from 0 to length(array) - 1:
        array[i] = output[i]
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH9/problems/SESO32
// Solved on: 2026-10-24T07:05:24.903Z

// source not captured automatically - copy it from the editor and use Manual Push