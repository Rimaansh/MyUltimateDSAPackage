class Solution(object):
    def solve(self, board):
        n = len(board)
        m = len(board[0])
        q = collections.deque()

        for i in range(n):
            for j in range(m):
                if i == n - 1 or j == m - 1 or i == 0 or j == 0:
                    if board[i][j] == 'O':
                        q.append((i, j))
    
        #multi-source bfs from the borders

        while q:
            r, c = q.popleft()
            # if board[r][c] == ‘O’:
            board[r][c] = 'T'
            directions = [[0, 1], [1, 0], [0, -1], [-1, 0]]
            
            for dr, dc in directions:
                nr = r + dr
                nc = c + dc
                
                if (nr >= 0 and nc >= 0 and nr < n and nc < m) \
                and board[nr][nc] == 'O':
                    q.append((nr, nc))

        for i in range(n):
            for j in range(m):
                if board[i][j] == 'O':
                    board[i][j] = 'X'

        for i in range(n):
            for j in range(m):
                if board[i][j] == 'T':
                    board[i][j] = 'O'		
