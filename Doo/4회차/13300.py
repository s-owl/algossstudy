import sys

def countRoom(l, stu_count, max) :
    guest_count = [0] * 12
    room_count = 0
    
    for i in range(stu_count) :
        if l[i][1] == 1 :
            if l[i][0] == 0 :
                guest_count[0] += 1
            else :
                guest_count[1] += 1
        elif l[i][1] == 2 :
            if l[i][0] == 0 :
                guest_count[2] += 1
            else :
                guest_count[3] += 1
        elif l[i][1] == 3 :
            if l[i][0] == 0 :
                guest_count[4] += 1
            else :
                guest_count[5] += 1
        elif l[i][1] == 4 :
            if l[i][0] == 0 :
                guest_count[6] += 1
            else :
                guest_count[7] += 1
        elif l[i][1] == 5 :
            if l[i][0] == 0 :
                guest_count[8] += 1
            else :
                guest_count[9] += 1
        else :
            if l[i][0] == 0 :
                guest_count[10] += 1
            else :
                guest_count[11] += 1

    for i in guest_count :
        room_count += i // max
        if i % max > 0 :
            room_count += 1

    print(room_count)

def main() :
    count = list(map(int, sys.stdin.readline().split()))
    l = []

    for i in range(count[0]) :
        l.append(list(map(int, sys.stdin.readline().split())))

    countRoom(l, count[0], count[1])

if __name__ == '__main__' :
    main()
