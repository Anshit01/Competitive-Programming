n = [i for i in range(100000)]
s = {}
for i in n:
    for j in n:
        if(j >= i):
            s[j*j - i*i] = 1

with open('out.txt', 'w') as f:
    for i in range(100000):
        if(i not in s):
            f.write(str(i) + '\n')
