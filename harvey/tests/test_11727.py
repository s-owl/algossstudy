import unittest
import importlib


class Test(unittest.TestCase):
    def test_11727(self):
        p = importlib.import_module('11727')
        self.assertEqual(p.solv(1), 1)
        self.assertEqual(p.solv(2), 3)
        self.assertEqual(p.solv(8), 171)
        self.assertEqual(p.solv(12), 2731)
