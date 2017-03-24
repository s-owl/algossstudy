count = int(input())

for i in range(count):
    print('{: >{}}'.format('*'*(i+1),count))
