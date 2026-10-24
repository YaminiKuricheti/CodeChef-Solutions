// Problem: SESO35
// Platform: codechef
// Language: function radixSort(array):
    maxValue = findMaxValue(array)
    digitPlace = 1

    while maxValue // digitPlace > 0:
        countingSortByDigit(array, digitPlace)
        digitPlace *= 10

function countingSortByDigit(array, digitPlace):
    n = length(array)
    output = array of size n initialized to 0
    count = array of size 10 initialized to 0

    // Count occurrences of digits
    for i from 0 to n - 1:
        digit = (array[i] // digitPlace) % 10
        count[digit] += 1

    // Accumulate counts
    for i from 1 to 9:
        count[i] += count[i - 1]

    // Build the output array
    for i from n - 1 down to 0:
        digit = (array[i] // digitPlace) % 10
        output[count[digit] - 1] = array[i]
        count[digit] -= 1

    // Copy the output array to the original array
    for i from 0 to n - 1:
        array[i] = output[i]
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH10/problems/SESO35
// Solved on: 2026-10-24T07:06:25.607Z

// source not captured automatically - copy it from the editor and use Manual Push