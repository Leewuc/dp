def dfs(cur,wires,ch):
    global tmp
    for i in range(len(ch)-1):
        if ch[i] == 0:
            for j in range(2):
                if wires[i][j] == cur:
                    ch[i] = 1
                    tmp += 1
                    dfs(wires[i][(j+1)%2],wires,ch)
                    ch[i] = 0
def solution(n, wires):
    ch = [0]*n
    res = []
    global tmp
    for i in range(n-1):
        tmp = 1
        ch[i] = 1
        a,b = wires[i][0],wires[i][1]
        dfs(a,wires,ch)
        ch[i] = 0
        res.append(abs(2*tmp-n))
    return min(res)
