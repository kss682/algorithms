

def merge(array, start, mid, end):
    temp_list = list()
    i = start
    j = mid + 1
    while i <= mid and j <= end:
        if array[i] > array[j]:
            temp_list.append(array[j])
            j += 1
        else:
            temp_list.append(array[i])
            i += 1
    while i <= mid:
        temp_list.append(array[i])
        i += 1
    while j <= end:
        temp_list.append(array[j])
        j += 1
    
    array[start:end+1] = temp_list


def merge_sort(array, start, end):
    if start < end:
        mid = (start + end)//2
        merge_sort(array, start, mid)
        merge_sort(array, mid+1, end)
        merge(array, start, mid, end)


if __name__ == "__main__":
    array = input("Enter the numbers")
    array = [int(num) for num in array.split(" ")]
    merge_sort(array, 0, len(array)-1)
    print(array)
