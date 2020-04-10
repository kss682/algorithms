

def bubble_sort(array):
    length = len(array)
    for i in range(length):
        for j in range(i+1,length):
            if array[i] > array[j]:
                array[i], array[j] = array[j], array[i]
    print(array)


if __name__ == "__main__":
    array = input("Enter the numbers")
    array = [int(num) for num in array.split(" ")]
    bubble_sort(array)