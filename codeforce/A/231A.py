
def main():
    N = int(input())
    scores = 0
    while N>0:
        count = 0
        quest = input()
        quest = [int(num) for num in quest.split(" ")]
        for q in quest:
            if q == 1:
                count += 1
        if count >= 2:
            scores += 1
        N -= 1
    print(scores)

main()
