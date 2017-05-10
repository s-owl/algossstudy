import unittest
import importlib


class Test(unittest.TestCase):
    def test_1037(self):
        p = importlib.import_module('1037')
        self.assertEqual(p.solv([4, 2]), 8)
        self.assertEqual(p.solv([3]), 9)
        self.assertEqual(p.solv([3, 2, 4, 6]), 12)
