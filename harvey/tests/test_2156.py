import unittest
import importlib


class Test(unittest.TestCase):
    def test_2156(self):
        p = importlib.import_module('2156')
        self.assertEqual(p.solv([6, 10, 13, 9, 8, 1]), 33)
        self.assertEqual(p.solv([6]), 6)
        self.assertEqual(p.solv([6, 10]), 16)
        self.assertEqual(p.solv([6, 10, 13]), 23)
