class Solution:
    def minJumps(self, arr: List[int]) -> int:
        n = len(arr)

        graph = defaultdict(list)

        for i in range(n):
            graph[arr[i]].append(i)

        q = deque([(0, 0)])
        visited = set([0])

        while q:
            node, jumps = q.popleft()

            if node == n - 1:
                return jumps

            for nei in [node - 1, node + 1]:
                if 0 <= nei < n and nei not in visited:
                    visited.add(nei)
                    q.append((nei, jumps + 1))

            for nei in graph[arr[node]]:
                if nei not in visited:
                    visited.add(nei)
                    q.append((nei, jumps + 1))

            graph[arr[node]] = []

        return -1