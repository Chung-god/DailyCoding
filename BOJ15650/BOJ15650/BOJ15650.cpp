#include <iostream>
#include <vector>
#define MAX 9
using namespace std;

int N, M;
int b; //그전 값
int arr[MAX];
bool visited[MAX];


void dfs(int cnt, int b) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else {
        for (int i = 1; i <= N; i++) {
            if (!visited[i]) {//방문하지 않았을때
                if (b < i) {
                    visited[i] = true;
                    arr[cnt] = i;
                    b = i;
                    dfs(cnt + 1, b);
                    visited[i] = false;
                    
                }
            }
        }
    }
    
    return;
}



int main()
{
    cin >> N >> M;
    dfs(0, 0);
    return 0;
}