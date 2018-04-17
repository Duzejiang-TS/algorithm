#include <stdio.h>

void caozuo(int a[],int k,int n){
	int i=n;
	while(k!=n){
		if(i==n){
			a[0]=a[i--];
		}else{
			a[i+1]=a[i--];
		}
		if(i==-1){
			i=n;
			++k;	
		}	
	}
}

int main() {
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i = 1;i<=n;i++)
		scanf("%d",&a[i]);
	int k;
	scanf("%d",&k);
	while(k<1 || k>n)
	{
		printf("k值有误，重新输入：");
		scanf("%d",&k);
	}
	if(k==n){
		for(int i = 1;i<=n;i++)
			printf("%d",a[i]);
	}else{
		caozuo(a,k,n);
		for(int i = 1;i<=n;i++)
			printf("%d",a[i]);
	}
} 
