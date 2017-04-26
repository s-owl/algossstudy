import asyncio
import aiohttp
import requests
from bs4 import BeautifulSoup


base_url = 'https://www.acmicpc.net/user/'
USER = ['vaporize93', 'doo9713', '21pori30', 'blackhead',
        'cnrjsdn', 'iowa329', 'qlqhqlqh125', ]
WEEK = {
        1: [2557, 1000, 2558, 10950, 10951, 10953, 11021,
            11022, 11718, 11719, 11720, 11721],
        2: [2750, 2751, 11650, 11651, 10814, 10828, 9012,
            10430, 2609, 1934, 9613],
        3: [10825, 10989, 11652, 11004, 1427, 1181, 10799],
        4: [1874, 2504, 1157, 10809, 13300, 13301, 2920, 1026],
        }

problem = {}

async def get_user_solved_problem(u):
    async with aiohttp.ClientSession() as session:
        async with session.get(base_url+u) as response:
            html_doc = await response.text()
    soup = BeautifulSoup(html_doc, 'html.parser')
    solvs = soup.find('div', class_='panel-body').find_all('span', class_='problem_number')
    problem[u] = []

    for solv in solvs:
        num = solv.a.string
        problem[u].append(num)


loop = asyncio.get_event_loop()
loop.run_until_complete(
    asyncio.gather(
        *(get_user_solved_problem(u) for u in USER)
    )
) 
loop.close()


for i in WEEK.keys():
    print(f'==== {i}주차 아직 못 푼 문제 ====')
    for (u, ps) in problem.items():
        l = [x for x in WEEK[i] if x not in list(map(int, ps))]
        if l:
            print(f' - {u} {l}')
        else:
            print(f' - {u} 다풀었어요!')

