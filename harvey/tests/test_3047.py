import unittest
import importlib


class Test(unittest.TestCase):
    def test_3047(self):
        p = importlib.import_module('3047')
        self.assertEqual(p.solv([1, 5, 3], 'ABC'), [1, 3, 5])
        self.assertEqual(p.solv([1, 5, 3], 'CBA'), [5, 3, 1])
        self.assertEqual(p.solv([9, 5, 7], 'BAC'), [7, 5, 9])
