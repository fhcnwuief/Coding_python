def solution(left, right):
    return sum(-num if int(num ** 0.5) == num ** 0.5 else num for num in range(left, right + 1))