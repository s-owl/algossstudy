import sys
from collections import deque


def make_graph(l):
    graph = {}
    for elem in l:
        if elem[0] not in graph.keys():
            graph[elem[0]] = []
        if elem[1] not in graph.keys():
            graph[elem[1]] = []
        graph[elem[0]].append(elem[1])
        graph[elem[1]].append(elem[0])
    return graph


def dfs(graph, start):
    visited, stack = [], [start]
    while stack:
        v = stack.pop()
        if v in visited:
            continue
        visited.append(v)
        l = list(graph[v])
        l.sort(reverse=True)
        for i in l:
            stack.append(i)

    return visited


def bfs(graph, start):
    visited, q = [], deque([start])
    while q:
        v = q.popleft()
        if v in visited:
            continue
        visited.append(v)
        l = list(graph[v])
        l.sort()
        for i in l:
            q.append(i)

    return visited


def solv(l, start):
    graph = make_graph(l)
    return dfs(graph, start), bfs(graph, start)


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    n, m, v = map(int, read().split())
    l = [tuple(map(int, read().split())) for _ in range(m)]
    a, b = solv(l, v)
    print(*a)
    print(*b)
