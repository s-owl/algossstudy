import unittest
import importlib


class Test(unittest.TestCase):
    def test_1085(self):
        p = importlib.import_module('1085')
        self.assertEqual(p.solv(6, 2, 10, 3), 1)
