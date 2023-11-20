def solution(park, routes):
    x = 0
    y = 0
    for i in range(len(park)):
        for j in range(len(park[i])):
            if park[i][j] == 'S':
                x = j
                y = i
                break
                
    for road in routes:
        dx = x
        dy = y
        for walk in range(int(road[2])):
            if road[0] == 'E' and dx != len(park[0])-1 and park[dy][dx+1] != 'X':
                dx += 1
                if walk == int(road[2])-1:
                        x = dx
            elif road[0] == 'W' and dx != 0 and park[dy][dx-1] != 'X':
                dx -= 1
                if walk == int(road[2])-1:
                    x = dx
            elif road[0] == 'S' and dy != len(park)-1 and park[dy+1][dx] != 'X':
                dy += 1
                if walk == int(road[2])-1:
                    y = dy
            elif road[0] == 'N' and dy != 0 and park[dy-1][dx] != 'X':
                    dy -= 1
                    if walk == int(road[2])-1:
                        y = dy
    return [y,x]
