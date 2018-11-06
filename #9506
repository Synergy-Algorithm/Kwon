#include <stdio.h>

int main(){
	int n;
	int i , check = 0;
	
	do{
		scanf("%d",&n);
		for(i=1; i<n ; i++){
			if(n%i==0)
			check += i; 	
		}
		
		if(n==check&&n>2&&n<100000){
			printf("%d = 1 ",n);
			for(i=2;i<n;i++)
			if(n%i==0)
				printf("+ %d ",i);
			printf("\n");
		}
		
		else{
			if (n==-1)
				return 0;
			else if(n<=2||n>=100000)
				printf("%d is Wrong Input. \n",n);
			else
				printf("%d is NOT perfect. \n",n);
		}
		
		check = 0;

	}
	while(n!=-1); //100,000의 공약수는 36개

	return 0;
}
