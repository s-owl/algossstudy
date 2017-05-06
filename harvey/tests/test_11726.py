import unittest
import importlib


class Test(unittest.TestCase):
    def test_11726(self):
        p = importlib.import_module('11726')
        self.assertEqual(p.solv(1), 1)
        self.assertEqual(p.solv(2), 2)
        self.assertEqual(p.solv(9), 55)
