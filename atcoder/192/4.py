x = input()
n = int(x)
x = str(n)
m = int(input())
if len(x) == 1:
    if n > m:
        print(0)
        exit()
    print(1)
    exit()
d = 0
for c in x:
    d = max(d, int(c))

ans = 0

def check(di):
    num = 0
    for i in range(len(x)):
        num += int(x[-(i+1)])* (di**i)
    if num > m:
        return False
    return True

l = d
r = m
maxd = l
while l <= r:
    mid = (l+r)//2
    if check(mid):
        maxd = mid
        l = mid + 1
    else:
        r = mid - 1
print(maxd - d)
