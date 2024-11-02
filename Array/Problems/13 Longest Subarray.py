def longest_subarray(arr, k):
  n = len(arr)
  max = -1
  for i in range(n):
    j = i + 1
    count = arr[i]
    while (count < k and j < n):
      count += arr[j]
      j += 1
    l = j - i
    if (count == k and l > max):
      max = l
  return max

print(longest_subarray([2,5,1,1,3,-1], 5))