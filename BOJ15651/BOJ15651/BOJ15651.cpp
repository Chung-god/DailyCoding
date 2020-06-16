#include <iostream>
#include <vector>
#define MAX 8
using namespace std;

int N, M;
int b; //그전 값
int arr[MAX];
//bool visited[MAX];


void dfs(int cnt){
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else {
        for (int i = 1; i <= N; i++) {
            arr[cnt] = i;
            dfs(cnt + 1);
            
        }
    }
    return;
}



int main()
{
    cin >> N >> M;
    dfs(0);
    return 0;
}