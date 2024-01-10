class Solution(object):
    def destCity(self, paths):
        """
        :type paths: List[List[str]]
        :rtype: str
        """

        graph = {}
        for i in range(len(paths)):
            graph[paths[i][0]] = paths[i][1]

        #search for a city doesn't have any destinations.
        for i in range(len(paths)):
            try:
                temp = graph[paths[i][1]]
            except KeyError:
                return paths[i][1]