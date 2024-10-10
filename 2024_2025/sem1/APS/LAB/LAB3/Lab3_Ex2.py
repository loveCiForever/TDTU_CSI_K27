def exercise2():
    S = [
        ('Thanh', 'Nữ'), 
        ('Hồng', 'Nữ'), 
        ('Thương', 'Nữ'), 
        ('Đào', 'Nữ'), 
        ('My', 'Nữ'), 
        ('Yến', 'Nữ'), 
        ('Hạnh', 'Nữ'),
        ('My', 'Nữ'), 
        ('Vy', 'Nữ'), 
        ('Tiên', 'Nữ'), 
        ('Thanh', 'Nam'), 
        ('Thanh', 'Nam'), 
        ('Bình', 'Nam'), 
        ('Nhật', 'Nam'), 
        ('Hào', 'Nam'), 
        ('Đạt', 'Nam'), 
        ('Minh', 'Nam')
    ]

    A = [s for s in S if s[0] == 'Thanh']
    B = [s for s in S if s[1] == 'Nữ']

    A_B = []

    for i in A:
        for j in B:
            if (i[0] == j[0] and i[1] == j[1]):
                A_B.append(i)

    P_A = len(A) / len(S)
    P_B = len(B) / len(S)
    P_A_B = len(A_B) / len(S)
    print("1d. {} {} {}".format(P_A, P_B, P_A_B))
    P_A_with_B = P_A_B / P_B
    print("1e. {}".format(P_A_with_B))

exercise2()