import sys
from collections import deque


def solv(maze):
    n = len(maze)
    m = len(maze[0])
    wrap_maze = [[0]*(m+2) for _ in range(n+2)]
    for i in range(n):
        for j in range(m):
            wrap_maze[i+1][j+1] = maze[i][j]
    goal = (n, m)
    x = 1
    y = 1
    q = deque([(1, (x, y))])
    visited = []
    while q:
        length, curr = q.popleft()
        x, y = curr
        if curr == goal:
            return length
        if curr in visited:
            continue
        visited.append(curr)
        if (x+1, y) not in visited and wrap_maze[x+1][y]:
            q.append((length+1, (x+1, y)))
        if (x, y+1) not in visited and wrap_maze[x][y+1]:
            q.append((length+1, (x, y+1)))
        if (x-1, y) not in visited and wrap_maze[x-1][y]:
            q.append((length+1, (x-1, y)))
        if (x, y-1) not in visited and wrap_maze[x][y-1]:
            q.append((length+1, (x, y-1)))

    return "None"


if __name__ == '__main__':
    read = lambda : sys.stdin.readline().strip()
    n, m = map(int, read().split())

    maze = [list(map(int, list(read()))) for _ in range(n)]
    print(solv(maze))

