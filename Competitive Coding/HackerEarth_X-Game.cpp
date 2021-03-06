/*~~~~~~~~~~~~~~~~~~*
*                  *
* $Dollar Akshay$  *
*                  *
*~~~~~~~~~~~~~~~~~~*/

//https://www.hackerearth.com/imsec-march-challenge/algorithm/x-game/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007
#define gc getchar_unlocked
struct Edge{ int v, w; };

int a[100000];

int powMOD(int b, int e){

	int res = 1;
	while (e--)
		res = ((ll int)res*b) % MOD;
	return res;

}

int main(){

	int t, n;
	scanf("%d", &t);
	REP(tc, t){
		scanf("%d", &n);
		int res = 0;
		REP(i, n){
			scanf("%d", &a[i]);
			res |= a[i];
		}
		res = ((ll int)res*powMOD(2, n - 1)) % MOD;
		printf("%d\n", res);
	}
	return 0;
}

//Solved