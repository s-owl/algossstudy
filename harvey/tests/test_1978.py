import unittest
import importlib


class Test(unittest.TestCase):
    def test_1978(self):
        p = importlib.import_module('1978')
        self.assertEqual(p.solv([1, 3, 5, 7]), 3)

