numberOfStone = int(input())
stones = list(map(int,input().split()))
sumOfStones = sum(stones)
if sumOfStones % 2 != 0:
    print("Alice")
else:
    print("Bob")