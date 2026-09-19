class Solution:
    def minAreaRect(self, points: list[list[int]]) -> int:
        seen = set()
        res = float('inf')

        for xi, yi in points:
            for xj, yj in seen:
                if (xi, yj) in seen and (xj, yi) in seen:
                    area = abs(xi - xj) * abs(yi - yj)
                    res = min(area, res)
                    
            seen.add((xi, yi))
        
        return res if res != float('inf') else 0