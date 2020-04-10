

def binary_search(array,left_index,right_index,search_num):
    if left_index > right_index:
        print(f"No such element {search_num}")
    else:
        mid = (left_index + right_index)//2
        if array[mid] == search_num:
            print(f"{search_num} is at position {mid}")
        elif array[mid] > search_num:
            right_index = mid - 1
            binary_search(array,left_index,right_index,search_num)
        elif array[mid] < search_num:
            left_index = mid + 1
            binary_search(array,left_index,right_index,search_num)


if __name__ == "__main__":
    array = input("Enter the elements in sorted order ")
    array = [int(num) for num in array.split(" ")]
    search_num = int(input("\n Enter the number to be searched "))
    left_index = 0
    right_index = len(array)
    binary_search(array,left_index,right_index,search_num)