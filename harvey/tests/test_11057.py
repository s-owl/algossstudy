import unittest
import importlib


class Test(unittest.TestCase):
    def test_11057(self):
        p = importlib.import_module('11057')
        self.assertEqual(p.solv(1), 10)
        self.assertEqual(p.solv(2), 55)
        self.assertEqual(p.solv(3), 220)
