#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// constraints
#define MAXN 6

// input data
int N, i;
char L[MAXN];

// solution data
int Nsolutions, csv, s;

int main() {
//  uncomment the following lines if you want to read/write from files
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d\n", &N));
    for(i = 0; i < N; i++)
        assert(1 == scanf(" %c", &L[i]));

    // insert your code here
    csv = 0;
    for(i = 0; i < N; i++) {
        if(L[i] == '_') {
            csv++;
        }
    }
    s=1;
    i=0;
    while(i<csv) {
        s = s * (26 - (N - csv) - i);
        i = i+1;
    }
    printf("%i\n", s);
    return 0;
}

//C language version
