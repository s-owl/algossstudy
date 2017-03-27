import unittest

def solution(sugar):
    # sugar = int(input())
    basket = 0

    if sugar >= 15:
        basket += sugar//5
        sugar = sugar - basket*5

    if sugar % 5 == 0:
        basket += int(sugar/5)
    elif sugar % 3 == 0:
        basket += int(sugar/3)
    else:
        basket = -1

    return basket

class SolutionTest(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(solution(10),2)
        self.assertEqual(solution(3),1)
        self.assertEqual(solution(4),-1)
        self.assertEqual(solution(15),3)
        self.assertEqual(solution(17),-1)
        self.assertEqual(solution(5),1)
        self.assertEqual(solution(30),6)
        self.assertEqual(solution(40),8)
        self.assertEqual(solution(97),21)

if __name__ == '__main__':
    unittest.main()

