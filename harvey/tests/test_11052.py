import unittest
import importlib


class Test(unittest.TestCase):
    def test_11052(self):
        p = importlib.import_module('11052')
        self.assertEqual(p.solv(4, [1, 5, 6, 7]), 10)
        self.assertEqual(p.solv(5, [10, 9, 8, 7, 6]), 50)
        self.assertEqual(p.solv(10, [1, 1, 2, 3, 5, 8, 13, 21, 34, 55]), 55)
        self.assertEqual(p.solv(10, [5, 10, 11, 12, 13, 30, 35, 40, 45, 47]), 50)
        self.assertEqual(p.solv(4, [5, 2, 8, 10]), 20)
        self.assertEqual(p.solv(4, [3, 5, 15, 16]), 18)
