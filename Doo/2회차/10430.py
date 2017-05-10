temp = input().split()
num = []
for i in temp :
    num.append(int(i))


print((num[0] + num[1]) % num[2])
print((num[0] % num[2] + num[1] % num[2]) % num[2])
print((num[0] * num[1]) % num[2])
print((num[0] % num[2] * num[1] % num[2]) % num[2])
