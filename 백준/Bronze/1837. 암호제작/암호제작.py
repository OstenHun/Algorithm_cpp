def is_prime(n):
    sieve = [True] * (n + 1)
    sieve[0] = sieve[1] = False
    primes = []
    for i in range(2, n+1):
        if sieve[i]:
            primes.append(i)
            for j in range(i*i, n+1, i):
                sieve[j] = False
    return primes

p, k = map(int, input().split())

primes = is_prime(k-1)

for prime in primes:
    if p % prime == 0:
        print(f"BAD {prime}")
        break
else:
    print("GOOD")