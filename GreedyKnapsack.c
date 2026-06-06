/*#include<stdio.h>
int i,j,p[50],w[50],n,m;
float x[50];
int main(){
    printf("\nEnter the number of objects:");
    scanf("%d",&n);
    printf("\nEnter the weights of all objects:");
    for(i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    printf("\nEnter the profits associated with the weights:");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if((float)(p[i])/w[i] < (float)(p[j])/w[j]){
                int t1=p[i];
                p[i]=p[j];
                p[j]=t1;
                int t2=w[i];
                w[i]=w[j];
                w[j]=t2;
            }
        }
    }
    printf("\nEnter the maximum capacity:");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        x[i]=0;
    }
    int rem_cap=m;
    for(i=0;i<n;i++){
        if(w[i]>rem_cap){
            break;
        }
        x[i]=1;
        rem_cap=rem_cap-w[i];
    }
    if(i<n){
        x[i]=(float)(rem_cap)/w[i];
    }
    float sum=0;
    for(i=0;i<n;i++){
        sum=sum+(p[i]*x[i]);
    }
    printf("\nThe total profit earned is:%f",sum);
}*/
