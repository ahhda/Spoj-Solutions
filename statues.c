#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=1;
    int res[51];
    while(n!=0){
        int arr[n];
        int i;
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
            }
        
        int sum=0;
        for(i=0; i<n; i++){
            sum+=arr[i];
            }
        int each;
        each=sum/n;
        int count=0;
        for(i=0; i<n; i++){
            while(arr[i]>each){
                count++;
                arr[i]--;
                }
            }
        res[t]=count;
        
        scanf("%d",&n);
        if(n!=0)
        t++;
        }
    int i;
    for(i=1;i<=t;i++){
        printf("Set #%d\n",i);
        printf("The minimum number of moves is %d.\n\n",res[i]);
    }
    return 0;
}
