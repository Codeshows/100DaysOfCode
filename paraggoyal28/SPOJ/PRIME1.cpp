#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
 
int main() {
    int primes[4000];
    int numprimes = 0;
 
    primes[numprimes++] = 2;
    for (int i = 3; i <= 32000; i+=2) {
        bool isprime = true;
        int cap = sqrt(i)+1;
        for (int j = 0; j < numprimes; j++) {
            if (primes[j] >= cap) break;
            if (i % primes[j] == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) primes[numprimes++] = i;
    }
 
    int T,N,M;
    scanf("%d",&T);
 
    for (int t = 0; t < T; t++) {
        if (t) printf("\n");
        scanf("%d %d",&M,&N);
        if (M < 2) M = 2;
 
        int cap = sqrt(N) + 1;
 
        bool isprime[100001];
        memset(isprime,true,sizeof(isprime));
 
        for (int i = 0; i < numprimes; i++) {
            int p = primes[i];
 
            if(p >= cap) break;
 
            int start;
 
            if (p >= M) start = p*2;
            else start = M + ((p - M % p) % p);
 
            for (int j = start; j <= N; j += p) {
                isprime[j - M] = false;
            }
        }
 
        int start = (M % 2)?M:M+1;
 
        if (M == 2) {
            printf("2\n");
        }
        for (int i = start; i <= N; i+=2) {
            if (isprime[i-M]) printf("%d\n",i);
        }
    }
    return 0;
} 