#include<stdio.h>
int main(){
	int i=1,j=5,k,l;
	k = !(i>j) && (j>=i);
	l = (j<=k) || !(k>=j);
	printf("value of k==%d\n",k);
	printf("value of l==%d\n",l);
}
