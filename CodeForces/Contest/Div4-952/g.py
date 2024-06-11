MOD = 10**9 + 7

def count_satisfying_numbers(l, r, k):
    if k == 1:
        # Si k = 1, cualquier número entre 10^l y 10^r - 1 es válido
        return (10**r - 10**l) % MOD
    else:
        # Para otros valores de k, contamos los números cuya suma de dígitos es divisible por k - 1
        total = 0
        for n in range(10**l, min(10**r, 10**(r-1) * k + 1)):
            if sum(int(d) for d in str(n)) % (k - 1) == 0:
                total += 1
        return total % MOD

# Input
t = int(input().strip())
for _ in range(t):
    l, r, k = map(int, input().split())
    print(count_satisfying_numbers(l, r, k))
