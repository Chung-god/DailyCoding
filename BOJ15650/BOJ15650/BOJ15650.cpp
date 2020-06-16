#include <iostream>
#include <vector>
#define MAX 9
using namespace std;

int N, M;
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
            if (visited[i])
                continue;
            else if (i < b)
                continue;
            else {
                visited[i] = true;
                arr[cnt] = i;
                dfs(cnt + 1, i);
                arr[cnt] = 0;
                visited[i] = false;
            }
        }

    }
    
    return;
}



int main()
{
    cin >> N >> M;
    dfs(1, 0);
    return 0;
}