line = input()
line = line.split()
a = int(line[0])
b = float(line[1]) + 0.001
c = int(b * 100)
print((a * c) // 100)
