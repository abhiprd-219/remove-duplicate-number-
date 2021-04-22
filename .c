#include <stdio.h>

int main() {
    return 0;
}int visit[100] = {0};
    int mp[100] = {0};
    int t;
    
    scanf("%d",&t);
    int arr[t];
    for(int i = 0;i<t;++i){
            scanf("%d",&arr[i]);
        int p = arr[i];
        mp[p]++;
        visit[p] = 1;
    }
    for(int i = 0;i<t;i++){
        if(visit[arr[i]] == 1){
            printf("%d ",arr[i]);
        visit[arr[i]] = 0;
        }
    }
    printf("\n");
