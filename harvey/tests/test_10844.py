import unittest
import importlib


class Test(unittest.TestCase):
    def test_10844(self):
        p = importlib.import_module('10844')
        self.assertEqual(p.solv(1), 9)
        self.assertEqual(p.solv(2), 17)
