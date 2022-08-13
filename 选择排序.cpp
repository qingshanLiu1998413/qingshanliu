#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

struct node {
	char name[20];					// 学生姓名 
	int score;						// 学生成绩 
} a[20];

int main() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) {		// 输入学生的姓名和成绩 
		cin>>a[i].name>>a[i].score; 
	}
	
	for (int i=1; i<n; i++) {		// 选择排序 
		for (int j=i+1; j<=n; j++) {
			if ((a[i].score<a[j].score) || 
				((a[i].score==a[j].score) && (strcmp(a[i].name,a[j].name)>0))) {		// 降序 
				swap(a[i], a[j]); 
			}
		}
	}
	
	for (int i=1; i<=n; i++) {		// 输出学生的姓名和成绩，每行一个 
		printf("%s %d\n", a[i].name, a[i].score);
	}
	
	return 0;
}


