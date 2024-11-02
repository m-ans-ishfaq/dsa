def insertion_sort(arr, i = 1):
  n = len(arr)
  if i == n:
    return
  key = arr[i]
  j = i - 1
  while j >= 0 and arr[j] > key:
    arr[j + 1] = arr[j]
    j -= 1
  arr[j + 1] = key
  insertion_sort(arr, i + 1)

arr = [2,5,5,7,3,-5,6]
# [-5, 2, 3, 5, 5, 6, 7]
insertion_sort(arr)
print(arr)