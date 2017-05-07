import unittest
import importlib


class Test(unittest.TestCase):
    def test_1149(self):
        p = importlib.import_module('1149')
        self.assertEqual(p.solv([
            [26, 40, 83],
            [49, 60, 57],
            [13, 89, 99]
        ]), 96)
        self.assertEqual(p.solv([
            [10, 1, 10],
            [1, 10, 100],
            [1, 100, 100]
        ]), 21)
        self.assertEqual(p.solv([
            [2, 1, 3],
            [2, 1, 5],
            [5, 4, 3]
        ]), 6)

