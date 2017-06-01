import importlib
import unittest


class Test(unittest.TestCase):
    def test_1100(self):
        p = importlib.import_module('1100')
        chess = [
            '.F.F...F',
            'F...F.F.',
            '...F.F.F',
            'F.F...F.',
            '.F...F..',
            'F...F.F.',
            '.F.F.F.F',
            '..FF..F.',
        ]
        self.assertEqual(p.solv(chess), 1)