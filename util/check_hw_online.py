import requests
from bs4 import BeautifulSoup

USER = ['vaporize93', 'doo9713', '21pori30', 'blackhead', 'cnrjsdn',]
WEEK = {
        1: [2557, 1000, 2558, 10950, 10951, 10953, 11021,
            11022, 11718, 11719, 11720, 11721],
        2: [2750, 2751, 11650, 11651, 10814, 10828, 9012,
            10430, 2609, 1934, 9613],
        }

problem = {}

for u in USER:
    html_doc = requests.get('https://www.acmicpc.net/user/'+ u).text
    soup = BeautifulSoup(html_doc, 'html.parser')
    solvs = soup.find('div', class_='panel-body').find_all('span', class_='problem_number')
    problem[u] = []

    for solv in solvs:
        num = solv.a.string
        problem[u].append(num)
        

for i in WEEK.keys():
    print(f'==== {i}주차 아직 못 푼 문제 ====')
    for (u, ps) in problem.items():
        l = [x for x in WEEK[i] if x not in list(map(int, ps))]
        if l:
            print(f' - {u} {l}')
