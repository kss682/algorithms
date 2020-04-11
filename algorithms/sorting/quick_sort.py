

def partition(array, low, high):
    pivot = array[high]
    i = low - 1
    for j in range(low,high):
        if array[j] < pivot:
            i += 1
            array[i], array[j] = array[j], array[i]
            
    array[i+1], array[high] = array[high], array[i+1]
    return i + 1, array


def quick_sort(array, low, high):
    if low < high:
        partition_index, array = partition(array, low, high)
        quick_sort(array, low, partition_index-1)
        quick_sort(array, partition_index+1, high)
    
    return array


if __name__ == "__main__":
    array = input("Enter the numbers")
    array = [int(num) for num in array.split(" ")]
    array = quick_sort(array, 0, len(array)-1)
    print(array)