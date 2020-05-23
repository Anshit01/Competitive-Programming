n = int(input())
arr = input().split()
arr = [int(i) for i in arr]
dic = {}
for i in arr:
    if i in dic.keys():
        dic[i] += 1
    else:
        dic[i] = 1

dic2 = {}
for i in dic:
    sum = 0
    if dic[i] > 2:
        sum = (dic[i] - 1) * (dic[i] - 2) // 2
    for j in dic:
        if i != j and dic[j] > 1:
            sum += dic[j] * (dic[j] - 1) // 2
    dic2[i] = sum
for i in arr:
    print(dic2[i])