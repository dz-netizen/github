#include<stdio.h>
int n,a[100],mark[100];
void dfs(int depth);
int main(){
    scanf("%d",&n);
    dfs(1);
    return 0;
}
void dfs(int depth){
    if(depth>n){
        for(int i=1;i<=n;i++){
            printf("%d",a[i]);
            if(i!=n){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }else{
        for(int i=1;i<=n;i++){
            if(mark[i]==0){
                mark[i]=1;
                a[depth]=i;
                dfs(depth+1);
                mark[i]=0;
            }
        }
    }
}