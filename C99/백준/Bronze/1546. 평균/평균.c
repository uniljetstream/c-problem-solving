#include <stdio.h>
int main() {
	int n, k;
	double m=0, aver=0, sum=0;
	scanf("%d", &n);
	
	double score[n];
	for(k=0;k<n;k++) {
		scanf("%lf", &score[k]);
		if (score[k] > m) {
			m = score[k];
		}
	}
	for(k=0;k<n;k++) {
		score[k] = score[k]/m*100;
		sum = sum+score[k];
	}
	
	aver = (double)sum/n;
	
	printf("%lf", aver);
	
	return 0;
}