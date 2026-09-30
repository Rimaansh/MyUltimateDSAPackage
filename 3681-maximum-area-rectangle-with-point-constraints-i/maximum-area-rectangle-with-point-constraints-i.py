class Solution(object):
    def maxRectangleArea(self, points):
        seen = {tuple(point) for point in points}
        res = -1

        for i, point in enumerate(points):
            xi, yi = point

            for j in range(i + 1, len(points)):
                xj, yj = points[j]

                if (xi, yj) in seen and (xj, yi) in seen:
                    # check if nothing is inside the rectangle
                    flag = True

                    min_x = min(xi, xj)
                    max_x = max(xi, xj)
                    min_y = min(yi, yj)
                    max_y = max(yi, yj)

                    for ii, ij in points:
                        if (ii, ij) not in [(xi, yi), (xi, yj), (xj, yi), (xj, yj)]:
                            if min_x <= ii <= max_x and min_y <= ij <= max_y:
                                flag = False
                                break

                    if flag:
                        area = abs(xi - xj) * abs(yi - yj)
                        res = max(area, res)

        return res if res > 0 else -1