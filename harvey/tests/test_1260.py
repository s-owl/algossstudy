import unittest
import importlib


class Test(unittest.TestCase):
    def test_1260(self):
        p = importlib.import_module('1260')
        l = [(1, 2), (1, 3), (1, 4), (2, 4), (3, 4)]
        graph = {1: [2, 3, 4],
                 2: [1, 4],
                 3: [1, 4],
                 4: [1, 2, 3]}

        self.assertEqual(p.make_graph(l), graph)
        self.assertEqual(p.dfs(graph, 1), [1, 2, 4, 3])
        self.assertEqual(p.bfs(graph, 1), [1, 2, 3, 4])
        self.assertEqual(p.solv(l, 1), ([1, 2, 4, 3], [1, 2, 3, 4]))
