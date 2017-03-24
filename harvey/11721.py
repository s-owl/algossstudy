from math import ceil
text = input()
count = ceil(len(text)/10)

for i in range(count):
    print(text[i*10:(i+1)*10])
