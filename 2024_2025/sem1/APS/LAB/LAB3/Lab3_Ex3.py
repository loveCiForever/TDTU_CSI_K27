import itertools

def exercise3():
    ranks = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K'}
    suits = {'♠', '♣', '♦', '♥'}
    cards = list(itertools.product(ranks, suits))
    B = list(itertools.combinations(cards, 3))

    A1 = []
    for s in B:
        count = 0
        for card in s:
            if (card[0] == 'K'):
                count += 1
        if (count == 1 or count == 2):
            A1.append(s)

    A2 = []
    for s in B:
        count = 0
        for card in s:
            if (card[0] == 'K'):
                count += 1
        if (count >= 1):
            A2.append(s)

    P_A1 = len(A1) / len(B)
    P_A2 = len(A2) / len(B)

    print(round(P_A1, 4))
    print(round(P_A2, 4))

exercise3()