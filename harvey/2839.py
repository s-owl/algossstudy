sugar = int(input())
basket = -1
flag = False

for a in range((sugar//5), -1, -1):
    for b in range((sugar//3)+1):
        if ((a*5) +(b*3)) == sugar:
            basket = a+b
            flag = ~flag
            break

    if flag:
        break

print(basket)
