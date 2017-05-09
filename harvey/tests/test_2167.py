import unittest
import importlib


class Test(unittest.TestCase):
    def test_2167(self):
        p = importlib.import_module('2167')
        b = [
            [1, 2, 4],
            [8, 16, 32]
        ]
        self.assertEqual(p.solv(b, [1, 1, 2, 3]), 63)
        self.assertEqual(p.solv(b, [1, 2, 1, 2]), 2)
        self.assertEqual(p.solv(b, [1, 3, 2, 3]), 36)
