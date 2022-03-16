# Solutions to CSES problem set

## Introductory Problems

### 10. Trailing Zeroes -> In the factorial of n a zero is added whenever a pair of 2 and 5 comes in its prime fators. E.g. in 5! 1*2*3*4*5 = 2*2*2*3*5, it has one pair of 2*5 and for any number n, no. of pairs of 2 and 5 are the no. of trailing zeroes and we can assume that no. off 2s in a prime factor are always more than no. of 5. So we can just count no. of 5 in a prime factors of n! by doing floor(n/5). But, still there is a problem in numbers like 25, 125, 625, we have to handle such cases as they are giving extra 5's in the prime factors so the real answer will be => floor(n/5) + floor(n/25) + floor(n/25) + ...
