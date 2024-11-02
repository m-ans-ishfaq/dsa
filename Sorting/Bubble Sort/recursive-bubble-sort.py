def bubble_sort(arr, n):
    if n == 1:
      return
    for j in range(0, n - 1):
      if arr[j] > arr[j + 1]:
        arr[j], arr[j + 1] = arr[j + 1], arr[j]
    bubble_sort(arr, n - 1)

arr = [2,5,5,7,3,-5,6]
# [-5, 2, 3, 5, 5, 6, 7]
bubble_sort(arr, 7)
print(arr)