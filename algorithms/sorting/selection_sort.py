

def selection_sort(array):
    length = len(array)
    min_index = 0
    for i in range(length):
        min_index = i
        for j in range(i+1,length):
            if array[j] < array[min_index]:
                min_index = j
        if i != min_index:
            array[i], array[min_index] = array[min_index],array[i]
    print(array)


if __name__ == "__main__":
    array = input("Enter the numbers")
    array = [int(num) for num in array.split(" ")]
    selection_sort(array)