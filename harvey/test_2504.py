import unittest
import importlib


class Test(unittest.TestCase):

    def test_2504(self):
        p = importlib.import_module('2504')
        self.assertEqual(p.solv('(())'), 4)
        self.assertEqual(p.solv('(()())'), 8)
        self.assertEqual(p.solv('[][]()'), 8)
        self.assertEqual(p.solv('(()[[]])([])'), 28)
        self.assertEqual(p.solv('(()[[]])([]))'), 0)
        self.assertEqual(p.solv('('), 0)
        self.assertEqual(p.solv('())'), 0)
        self.assertEqual(p.solv('(((('), 0)
        self.assertEqual(p.solv(']['), 0)
        self.assertEqual(p.solv('(())(())[[]][[]]'), 26)
        self.assertEqual(p.solv('()'), 2)
