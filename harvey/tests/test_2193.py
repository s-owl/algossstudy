import unittest
import importlib


class Test(unittest.TestCase):
    def test_2193(self):
        p = importlib.import_module('2193')
        self.assertEqual(p.solv(1), 1)
        self.assertEqual(p.solv(2), 1)
        self.assertEqual(p.solv(3), 2)
        # 1000 1001 1010
        self.assertEqual(p.solv(4), 3)
