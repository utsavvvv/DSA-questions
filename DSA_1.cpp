#include<stdio.h>

int result(int base, int L1, int L2, int w, int i, int j, int n){
	int ans=base-w*(n*(3-L2)+(2-L1));
	return ans;
}

int main(){
int base, i, j, w, n, L1, L2;
printf("Enter base address");
scanf("%d",&base);
printf("Enter lower bound: ");
scanf("%d",&L1);
printf("Enter the upper bound: ");
scanf("%d",&L2);
printf("Enter cell size:");
scanf("%d",&w);
printf("Enter the row and column: ");
scanf("%d %d",&i,&j);
printf("Enter the value of n: ");
scanf("%d",&n);

printf("Your result is %d",result(base,L1,L2,w,i,j,n));
return 0;
}
