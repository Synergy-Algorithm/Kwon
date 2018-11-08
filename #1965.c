#include <stdio.h>

int main(){
	int i, j, n, a[1000], d[1000], max = 0; 
	
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%d", &a[i]);
	} 
	
	for (i = 0; i<n; i++) {
		d[i] = 1;
		for (j=0; j<i; j++) {
			if (a[j] < a[i] && d[i] == d[j]){
				d[i] = d[j] + 1;
			}
		}
		if(max<d[i]) max = d[i];
	}
	printf("%d", max);
		
	return 0;
}
