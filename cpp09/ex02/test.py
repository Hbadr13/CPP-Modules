def merge(left, right):

    return result
def mergsort(arr):

    if len(arr) <= 1:
        return arr
    mid = len(arr) // 2

    left =arr[:mid]
    right = arr[mid:]
    mergsort(left)
    mergsort(right)
    result = []
    i = j = k = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1
    while i < len(left):
        arr[k] = left[i]


        
        i += 1
        k += 1
    while j < len(right):
        arr[k] = right[j]
        j += 1
        k += 1
arr = [1,5,2,6,0]
mergsort(arr)
print(arr)
