import itertools
from fractions import Fraction

def P(event, space):
    return Fraction(len(event & space) / len(space))

# Exercise 1:
def exercise1():
    S = {'MMM', 'MMF', 'MFM', 'MFF', 'FMM', 'FMF', 'FFM', 'FFF'}
    len_S = len(S)
    print("1b. " + str(len_S))
    B = {s for s in S if 'F' in s}
    A = {s for s in S if s.count('F') == 3}
    P_B = P(B, S)
    print("1c. {}".format(P_B))
    P_A_B = P(A, S)
    print("1d. {}".format(P_A_B))
    P_A_with_B = P_A_B / P_B
    print("1e. {}".format(P_A_with_B))

exercise1()

