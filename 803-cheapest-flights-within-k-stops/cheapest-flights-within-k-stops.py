class Solution(object):
    def findCheapestPrice(self, n, flights, src, dst, k):
        dist = [1e9] * n
        dist[src] = 0

        adj = {i:[] for i in range(n)}
        for u, v, wt in flights:
            adj[u].append((v, wt))

        q = deque([(0, src, 0)]) # no. of hops, src and weight

        while q:
            hops, node, tWt = q.popleft()

            if hops > k:
                break

            for nei, wt in adj[node]:
                if tWt + wt < dist[nei]:
                    dist[nei] = tWt + wt
                    q.append((hops + 1, nei, dist[nei]))

        return dist[dst] if dist[dst] != 1e9 else -1