#include <stdio.h>

void exchange(int a[],int n,int k)
{
	int i,j = k;
	for(i = 1;i < j;i++){		//逆置元素 1 ~ k 
		a[0] = a[i];
		a[i] = a[j];
		a[j] = a[0];
		j--;
	}	
	j = n;
	for(i = k+1;i < j;i++){		//逆置元素 K+1 ~ n 
		a[0] = a[i];
		a[i] = a[j];
		a[j] = a[0];
		j--;
	}	
	j = n;
	for(i = 1;i < j;i++){		//逆置数组 a 
		a[0] = a[i];
		a[i] = a[j];
		a[j] = a[0];
		j--;
	}	
}

int main() {
	int n;
	scanf("%d",&n);			// 数据个数
	
	int a[n+1];
	int i;
	for(i = 1;i <= n;i++)
		scanf("%d",&a[i]);			//输入数据
		
	int k;
	scanf("%d",&k);			//输入交换点K
	
	if(k == n){			//若K是最后一个元素，则数组不变
		for(i = 1;i <= n;i++)
			printf("%d",a[i]);
	}else{
		exchange(a,n,k);
		for(i = 1;i <= n;i++)
			printf("%d ",a[i]);
	}
	
} 
