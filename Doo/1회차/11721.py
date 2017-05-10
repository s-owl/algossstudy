input_str = input()
count = len(input_str) // 10

for i in range(0, count) :
    print(input_str[i*10:(i*10)+10])

print(input_str[count * 10 :])
