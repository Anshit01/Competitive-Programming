import math

def isPrime(num):
    if num == 2:
        return False
    for i in range(2, int(math.sqrt(num) + 1)):
        if num % i == 0:
            return False
    return True

seven = 7
cnt = 1
num = int(input())
for i in range(1000):
    if seven % num == 0:
        print(cnt)
        quit()
    seven *= 10
    seven += 7
    cnt += 1
if isPrime(num):
    print(num -1)
else:
    print(-1)