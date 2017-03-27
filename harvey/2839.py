import unittest

def solution(sugar):
    # sugar = int(input())

    for a in range((sugar//5), -1, -1):
        for b in range((sugar//3)+1):
            if ((a*5) +(b*3)) == sugar:
                print(f'five : {a}, three : {b}, sum : {a+b}')
                return a+b

    return -1


class SolutionTest(unittest.TestCase):
    def test_solution(self):
        self.assertEqual(solution(10),2)
        self.assertEqual(solution(3),1)
        self.assertEqual(solution(4),-1)
        self.assertEqual(solution(15),3)
        self.assertEqual(solution(5),1)
        self.assertEqual(solution(30),6)
        self.assertEqual(solution(40),8)
        self.assertEqual(solution(97),21)

if __name__ == '__main__':
    unittest.main()

