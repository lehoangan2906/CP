#include <bits/stdc++.h>
using namespace std;

int n;
int a[11];
bool check[11]; // neu su dung i trong hoan vi roi thi check[i] = true

void backtrack (int i) {
    if (i == n){
        for (int i = 1; i<= n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }else{
        for (int j = 1; j <= n; j++){
            if (!check[j]){
                a[i + 1] = j;
                check[j] = true;
                backtrack(i + 1);
                check[j] = false;
            }
        }
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++) check[i] = false;
    backtrack(0);
}
