#!/usr/bin/python3
def square_matrix_map(matrix=[]):
    return list(map(lambda s: list(map(lambda j: j**2, s)), matrix))
