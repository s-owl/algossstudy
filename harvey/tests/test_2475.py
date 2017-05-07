import unittest
import importlib


class Test(unittest.TestCase):
    def test_2475(self):
        p = importlib.import_module('2475')
        self.assertEqual(p.solv([0, 4, 2, 5, 6]), 1)

