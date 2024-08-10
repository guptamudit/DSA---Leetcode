class UnionFind:
    def __init__(self): self.parent = defaultdict(tuple); self.size = defaultdict(int)
    
    
    def add(self, i, j, p): self.parent[(i, j, p)] = (i, j, p); self.size[(i, j, p)] = 1

    
    def find(self, a):
        if self.parent[a] != a: self.parent[a] = self.find(self.parent[a])
        return self.parent[a]

   
    def union(self, x, y):
        rx, ry = self.find(x), self.find(y)
        if rx != ry:
            if self.size[rx] >= self.size[ry]: 
                self.size[rx] += self.size[ry]; self.parent[ry] = rx
            else: self.size[ry] += self.size[rx]; self.parent[rx] = ry
    
    
    def getNoReps(self):
        count = 0
        
        for key, val in self.parent.items(): count += key == val
        return count


class Solution:
    def regionsBySlashes(self, grid: List[str]) -> int:
        
        n = len(grid); posparts = defaultdict(list); uf = UnionFind()
        
        partneighbors = {
            "lt": [(-1, 0, ["lb", "rb", "fl"]), (0, -1, ["rt", "rb", "fl"])],
            "rt": [(-1, 0, ["lb", "rb", "fl"]), (0, 1, ["lt", "lb", "fl"])], 
            "lb": [(1, 0, ["lt", "rt", "fl"]), (0, -1, ["rt", "rb", "fl"])],
            "rb": [(1, 0, ["lt", "rt", "fl"]), (0, 1, ["lt", "lb", "fl"])],
            "fl": [
                (-1, 0, ["lb", "rb", "fl"]), (0, -1, ["rt", "rb", "fl"]),
                (1, 0, ["lt", "rt", "fl"]), (0, 1, ["lt", "lb", "fl"])
            ]
        }
        
        for i in range(n):
            for j in range(n):
                if grid[i][j] == ' ': posparts[(i, j)].append("fl")
                elif grid[i][j] == '/': posparts[(i, j)].extend(["lt", "rb"])
                else: posparts[(i, j)].extend(["lb", "rt"])
                for part in posparts[(i, j)]: uf.add(i, j, part)

        def valid(i, j): return i >= 0 and j >= 0 and i < n and j < n

        
        for i in range(n):
            for j in range(n):
                for part in posparts[(i, j)]:
                    for ci, cj, nparts in partneighbors[part]:
                        ni, nj = i + ci, j + cj
                        if not valid(ni, nj): continue
                        for npart in nparts:
                            if npart in posparts[(ni, nj)]: 
                                uf.union((i, j, part), (ni, nj, npart))
        return uf.getNoReps()