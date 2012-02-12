#include <cstdio>

int main()
{
	int d;
	while(~scanf("%d\n", &d)){
		long long total = 0;
		for(int i = d; i < 600; i += d)
			total += (long long)i * i * d;
		printf("result:%d %d %d\n",i,d,total);
		printf("%lld\n", total);
	}
	return 0;
}
