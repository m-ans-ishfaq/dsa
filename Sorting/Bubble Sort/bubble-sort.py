def bubble_sort(arr):
  n = len(arr)
  for i in range(n - 1):
    swapped = False
    for j in range(i + 1, n):
      if arr[i] > arr[j]:
        swapped = True
        arr[i], arr[j] = arr[j], arr[i]
    if not swapped:
      break

arr = [2,5,5,7,3,-5,6]
# [-5, 2, 3, 5, 5, 6, 7]
bubble_sort(arr)
print(arr)