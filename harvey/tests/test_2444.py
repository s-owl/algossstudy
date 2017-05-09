import unittest
import importlib


class Test(unittest.TestCase):
    def test_2444(self):
        p = importlib.import_module('2444')
        self.assertEqual(p.solv(3), "  *\n ***\n*****\n ***\n  *")

