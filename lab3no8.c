#include <stdio.h>

int main() {
	int h,m,s,n;
	scanf("%d:%d:%d",&h,&m,&s);
	printf("Hour:%d\nMinute:%d\nSecond:%d\n",h,m,s);
	printf("Next minutes: ");
	scanf("%d",&n);
	m += h*60 +n;
	h = m/60;
	m = m%60;
	if (h>23){
		h -= 24;
	}
	printf("Hour:%d\nMinute:%d\nSecond:%d\n",h,m,s);
	return 0;
}
