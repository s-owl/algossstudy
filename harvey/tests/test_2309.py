import unittest
import importlib


class Test(unittest.TestCase):
    def test_2309(self):
        p = importlib.import_module('2309')
        self.assertEqual(p.solv([20, 7, 23, 19, 10, 15, 25, 8, 13]),
                         [7, 8, 10, 13, 19, 20, 23])