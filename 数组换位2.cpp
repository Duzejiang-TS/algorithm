#include <stdio.h>

void exchange(int a[],int n,int k)
{
	int i,j = k;
	for(i = 1;i < j;i++){		//����Ԫ�� 1 ~ k 
		a[0] = a[i];
		a[i] = a[j];
		a[j] = a[0];
		j--;
	}	
	j = n;
	for(i = k+1;i < j;i++){		//����Ԫ�� K+1 ~ n 
		a[0] = a[i];
		a[i] = a[j];
		a[j] = a[0];
		j--;
	}	
	j = n;
	for(i = 1;i < j;i++){		//�������� a 
		a[0] = a[i];
		a[i] = a[j];
		a[j] = a[0];
		j--;
	}	
}

int main() {
	int n;
	scanf("%d",&n);			// ���ݸ���
	
	int a[n+1];
	int i;
	for(i = 1;i <= n;i++)
		scanf("%d",&a[i]);			//��������
		
	int k;
	scanf("%d",&k);			//���뽻����K
	
	if(k == n){			//��K�����һ��Ԫ�أ������鲻��
		for(i = 1;i <= n;i++)
			printf("%d",a[i]);
	}else{
		exchange(a,n,k);
		for(i = 1;i <= n;i++)
			printf("%d ",a[i]);
	}
	
} 
