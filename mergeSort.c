/*#include<stdio.h>
void mergeSort(int a[],int n1,int b[],int n2);
int main(){
    int low,mid,high;
    int n1,n2,a[50],b[50],c[50];
    printf("\nEnter the number of elements for first array:");
    scanf("%d",&n1);
    printf("\nEnter the number of elements for second array:");
    scanf("%d",&n2);
    printf("Enter elements for first array:");
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements for second array:");
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    mergeSort(a,n1,b,n2);
    return 0;
}
void mergeSort(int a[],int n1,int b[],int n2){
    int c[50],i=0,j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }
        else{
            c[k]=a[i];
            c[k+1]=b[j];
            i++;
            j++;
            k=k+2;
        }
    }
        while(i<n1){
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<n2){
            c[k]=a[j];
            j++;
            k++;
        }


    printf("\nMerged array:");
    for(int x=0;x<(n1+n2);x++){
        printf("%d ",c[x]);
    }
}*/
