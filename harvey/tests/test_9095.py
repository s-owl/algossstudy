import unittest
import importlib


class Test(unittest.TestCase):
    def test_9095(self):
        p = importlib.import_module('9095')
        self.assertEqual(p.solv(1), 1)
        self.assertEqual(p.solv(4), 7)
        self.assertEqual(p.solv(7), 44)
        self.assertEqual(p.solv(10), 274)
