#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

struct node {
	char name[20];					// ѧ������ 
	int score;						// ѧ���ɼ� 
} a[20];

int main() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) {		// ����ѧ���������ͳɼ� 
		cin>>a[i].name>>a[i].score; 
	}
	
	for (int i=1; i<n; i++) {		// ѡ������ 
		for (int j=i+1; j<=n; j++) {
			if ((a[i].score<a[j].score) || 
				((a[i].score==a[j].score) && (strcmp(a[i].name,a[j].name)>0))) {		// ���� 
				swap(a[i], a[j]); 
			}
		}
	}
	
	for (int i=1; i<=n; i++) {		// ���ѧ���������ͳɼ���ÿ��һ�� 
		printf("%s %d\n", a[i].name, a[i].score);
	}
	
	return 0;
}


