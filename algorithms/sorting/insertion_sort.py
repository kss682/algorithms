

def insertion_sort(array):
    length = len(array)
    for i in range(1,length):
        key = array[i]
        j = i - 1
        while j >= 0 and array[j] > key:
            array[j+1] = array[j]
            j -= 1
        array[j+1] = key
    print(array)

if __name__ == "__main__":
    array = input("Enter the numbers")
    array = [int(num) for num in array.split(" ")]
    insertion_sort(array)