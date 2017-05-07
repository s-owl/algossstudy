import unittest
import importlib


class Test(unittest.TestCase):
    def test_2747(self):
        p = importlib.import_module('2747')
        self.assertEqual(p.solv(1), 1)
        self.assertEqual(p.solv(2), 1)
        self.assertEqual(p.solv(3), 2)
        self.assertEqual(p.solv(10), 55)
        self.assertEqual(p.solv(12), 144)
