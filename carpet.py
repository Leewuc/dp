def solution(brown, yellow):
    answer = []
    alsum = brown + yellow
    for a in range(1,alsum):
        if alsum % a == 0:
            b = alsum // a
            if a < b:
                a,b = b,a
            if yellow == alsum - (2*a+2*b-4):
                return [a,b]
