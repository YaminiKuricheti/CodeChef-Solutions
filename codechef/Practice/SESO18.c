// Problem: SESO18
// Platform: codechef
// Language: SelectionSort(A)
    for i = 0 to length(A) - 2 do
        minIndex = i
        for j = i + 1 to length(A) - 1 do
            if A[j] < A[minIndex] then
                minIndex = j
            end if
        end for
        if minIndex != i then
            swap A[i] with A[minIndex]
        end if
    end for
end SelectionSort
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH5/problems/SESO18
// Solved on: 2026-10-19T17:06:28.624Z

// source not captured automatically - copy it from the editor and use Manual Push