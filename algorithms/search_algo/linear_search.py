

def linear_search(array,search_num):
    flag = 0
    for i in range(len(array)):
        if array[i] == search_num:
            flag = 1
            break
    if flag == 1:
        print(f"{search_num} is at position {i}")
    else:
        print(f"No such element {search_num}")


if __name__ == "__main__":
    array = input("Enter the elements ")
    array = [int(num) for num in array.split(" ")]
    search_num = int(input("\nEnter the number to be searched "))
    linear_search(array,search_num)