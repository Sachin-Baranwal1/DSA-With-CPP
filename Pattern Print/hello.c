#include <stdio.h>

int main() {
	 int n;
	scanf("%d",&n);
	int a[50][50]={3,1,5,8,2,1,4,6,0};
	for(int i=0;i<n;i++){
	    for(int j=n;j<0;j--){
	        printf("%d",a[j][i]);
	    }
	}

}
