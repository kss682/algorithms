# https://codeforces.com/problemset/problem/71/A

def main():
    N = int(input())
    while N > 0:
        string = input()
        length = len(string)
        if length > 10:
            print(string[0] + str(length-2) + string[length-1])
        else:
            print(string)
        N -= 1

main()