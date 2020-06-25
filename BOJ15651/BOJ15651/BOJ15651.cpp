#include <iostream>
#include <vector>
#define MAX 8
using namespace std;

int N, M;
int n = 0;
int arr[MAX] = { 0,0,0,0,0,0,0,0 };
//bool visited[MAX];


void dfs(int cnt, int b){
    n = 0;
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else {
        for (int i = 1; i <= N; i++) {
            if (i < b) continue;
            arr[cnt] = i;
            dfs(cnt + 1,i);
        }
    }
    return;
}



int main()
{
    cin >> N >> M;
    dfs(0,0);
    return 0;
}