#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[100];
	int n,D;
	scanf("%d %d",&n,&D);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}

	int x = a[0];
	int earn = 0;
	int have = 1;
	for(int i = 1;i < n;i++){
		if(have == 1){
			if(a[i] >= x + D){
				earn += a[i] - x;
				have = 0;
				x = a[i];
			}
		}
		else{
			if(a[i] <= x - D){
				x = a[i];
				have = 1;
			}
		}
		
	}
	printf("%d\n",earn);
	return 0;
}
