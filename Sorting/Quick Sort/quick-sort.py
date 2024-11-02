def quick_sort(arr):
    n = len(arr)
    if n <= 1:
        return arr

    pivot = arr[-1]
    i = -1
    for j in range(n - 1):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    # Place the pivot after the last smaller element
    i += 1
    arr[i], arr[-1] = arr[-1], arr[i]

    # Recursively sort left and right parts
    left = quick_sort(arr[:i])
    right = quick_sort(arr[i + 1:])
    return left + [arr[i]] + right

arr = [10, 7, 8, 9, 1, 5]
sorted_arr = quick_sort(arr)
print("Sorted array:", sorted_arr)