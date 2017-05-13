import sys
import asyncio
import aiohttp
from bs4 import BeautifulSoup

base_url = 'https://www.acmicpc.net/user/'
USER_COLORS = {
    'vaporize93': 1,
    'doo9713': 2,
    '21pori30': 3,
    'blackhead': 4,
    'cnrjsdn': 5,
    'iowa329': 6,
    'qlqhqlqh125': 7,
}
PROBLEMS = {
    '1회차': [2557, 1000, 2558, 10950, 10951, 10953, 11021, 11022, 11718, 11719, 11720, 11721],
    '2회차': [2750, 2751, 11650, 11651, 10814, 10828, 9012, 10430, 2609, 1934, 9613],
    '3회차': [10825, 10989, 11652, 11004, 1427, 1181, 10799],
    '4회차': [1874, 2504, 1157, 10809, 13300, 13301, 2920, 1026],
    'DP-1': [1463, 11726, 11727, 9095, 11052, 10844, 11057, 2193, 2156, 2133, 9461, 11048],
    'level1': [1000, 1001, 2557, 1008, 2438, 2741, 2742, 2439, 2440, 2739,
               2441, 1003, 8393, 10998, 10430, 10869, 1924, 9498, 1110, 2558],
}

problem = {}


def colored_user(user):
    if user in USER_COLORS.keys():
        return colored(user, USER_COLORS[user])
    return user


def colored(string, color=7):
    if 0 < color < 8:
        string = '\x1b[1;%sm%s\x1b[0m' % (color + 30, string)
    return string


async def get_user_solved_problem(u):
    async with aiohttp.ClientSession() as session:
        async with session.get(base_url + u) as response:
            html_doc = await response.text()
    soup = BeautifulSoup(html_doc, 'html.parser')
    if soup.find('div', class_='error-v1'):
        print(f'{u} is Not Found!')
        exit(1)
    solvs = soup.find('div', class_='panel-body').find_all('span', class_='problem_number')
    problem[u] = []

    for solv in solvs:
        num = solv.a.string
        problem[u].append(num)


if __name__ == '__main__':

    if len(sys.argv) > 1:
        USER_COLORS = {}
        for i in range(1, len(sys.argv)):
            USER_COLORS[sys.argv[i]] = (i%7)+1

    print('getting list ...')
    loop = asyncio.get_event_loop()
    loop.run_until_complete(
        asyncio.gather(
            *(get_user_solved_problem(u) for u in USER_COLORS.keys())
        )
    )
    loop.close()

    for i in PROBLEMS.keys():
        print(f'======= {i} 아직 못 푼 문제 =======')
        for (u, ps) in problem.items():
            l = [x for x in PROBLEMS[i] if x not in list(map(int, ps))]
            if l:
                print(f' - {colored_user(u)} {l}')
