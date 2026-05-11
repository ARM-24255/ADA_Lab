/*#include<stdio.h>
void heapify(int a[],int n,int p){
    int c,item;
    item=a[p];
    c=2*p+1;
    while(c<=n-1){
        if((c+1)<=(n-1)){
            if(a[c]<a[c+1]){
                c++;
            }
        }
        if(item<a[c]){
            a[p]=a[c];
            p=c;
            c=2*p+1;
        }
        else{
            break;
        }
        a[p]=item;
    }
}
void build_heap(int a[],int n){
    int i;
    for(i=(n-1)/2;i>=0;i--){
        heapify(a,n,i);
    }
}
void heap_sort(int a[],int n){
    int i,temp;
    build_heap(a,n);
    for(i=n-1;i>0;i--){
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapify(a,i,0);
    }
}
int main(){
    int arr[50],n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    heapify(arr,n,0);
    build_heap(arr,n);
    heap_sort(arr,n);
    printf("\nSorted array elements:");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}*/
