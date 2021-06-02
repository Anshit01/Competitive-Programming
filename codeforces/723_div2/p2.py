def gen1(n):
    a = 0
    for i in range(n):
        a *= 10
        a += 1
    return a

st = set()
for j in range(100):
    for i in range(10000):
        st.add(i*11 + j * 111)
        # print(i*11 + j*111)
# cnt = 0
# for i in range(100, 200):
#     if i not in st:
#         print(i)
#         cnt += 1
# print('total:', cnt)
lst = list(st)[:8000]
a = 0
for i in range(8550):
    if i not in lst:
        print(i)
        a += 1
# print('total', a)