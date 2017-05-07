import unittest
import importlib


class Test(unittest.TestCase):
    def test_9461(self):
        p = importlib.import_module('9461')
        self.assertEqual(p.solv(1), 1)
        self.assertEqual(p.solv(2), 1)
        self.assertEqual(p.solv(3), 1)
        self.assertEqual(p.solv(4), 2)
        self.assertEqual(p.solv(5), 2)
        self.assertEqual(p.solv(6), 3)
        self.assertEqual(p.solv(7), 4)
        self.assertEqual(p.solv(12), 16)
