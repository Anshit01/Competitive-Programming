import math

series = []
for i in range(1000):
    series.append(int('7'*(i+1)))

count = 0
for i in range(1, 901):
    flag = True
    for seven in series:
        if seven % i == 0:
            print(i, int(math.log10(seven)+1))
            flag = False
            count += 1
            break
    if flag == True:
        print(i, -1)

print(count)