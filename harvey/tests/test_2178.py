import importlib
import unittest


class Test(unittest.TestCase):
    def test_2178(self):
        p = importlib.import_module('2178')
        maze = [
            [1, 0, 1, 1, 1, 1],
            [1, 0, 1, 0, 1, 0],
            [1, 0, 1, 0, 1, 1],
            [1, 1, 1, 0, 1, 1],
        ]
        self.assertEqual(p.solv(maze), 15)
        maze = [
            [1, 1, 0, 1, 1, 0],
            [1, 1, 0, 1, 1, 0],
            [1, 1, 1, 1, 1, 1],
            [1, 1, 1, 1, 0, 1],
        ]
        self.assertEqual(p.solv(maze), 9)
