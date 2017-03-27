num = input()
if len(num) == 1:
    num = '0'+num
tmp = num
result = ''
count = 0
while(num!=result):
    result = tmp[-1] + str(int(tmp[0]) + int(tmp[-1]))[-1]
    tmp = result
    count += 1

print(count)
