def selection_sort(arr):
  n = len(arr)
  for i in range(n-1):
    min = i
    for j in range(i+1, n):
      if arr[j] < arr[min]:
        min = j
    if min != i:
      arr[min], arr[i] = arr[i], arr[min]

arr = [2,5,5,7,3,-5,6]
# [-5, 2, 3, 5, 5, 6, 7]
selection_sort(arr)
print(arr)