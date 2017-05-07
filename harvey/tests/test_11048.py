import unittest
import importlib


class Test(unittest.TestCase):
    def test_11048(self):
        p = importlib.import_module('11048')
        self.assertEqual(p.solv([
            [1, 2, 3, 4],
            [0, 0, 0, 5],
            [9, 8, 7, 6]
        ]), 31)
        self.assertEqual(p.solv([
            [1, 0, 0],
            [0, 1, 0],
            [0, 0, 1]
        ]), 3)
        self.assertEqual(p.solv([
            [1, 2, 3],
            [6, 5, 4],
            [7, 8, 9],
            [12, 11, 10],
        ]), 47)
