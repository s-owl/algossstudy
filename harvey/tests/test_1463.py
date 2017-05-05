import unittest
import importlib


class Test(unittest.TestCase):
    def test_1463(self):
        p = importlib.import_module('1463')
        self.assertEqual(p.solv(2), 1)
        self.assertEqual(p.solv(10), 3)
