import unittest
import importlib


class Test(unittest.TestCase):
    def test_2133(self):
        p = importlib.import_module('2133')
        self.assertEqual(p.solv(1), 0)
        self.assertEqual(p.solv(2), 3)
        self.assertEqual(p.solv(3), 0)
        self.assertEqual(p.solv(4), 11)
        self.assertEqual(p.solv(8), 153)
        self.assertEqual(p.solv(12), 2131)
