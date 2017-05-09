import unittest
import importlib


class Test(unittest.TestCase):
    def test_2579(self):
        p = importlib.import_module('2579')
        self.assertEqual(p.solv([10, 20, 15, 25, 10, 20]), 75)
