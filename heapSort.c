/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void heapify(int a[],int n,int p){
    int c,item;

    item=a[p];
    c=2*p+1;

    while(c<=n-1){

        if((c+1)<=n-1){
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
    }

    a[p]=item;
}

void build_heap(int a[],int n){
    for(int i=(n-1)/2;i>=0;i--){
        heapify(a,n,i);
    }
}

void heap_sort(int a[],int n){
    int temp;

    build_heap(a,n);

    for(int i=n-1;i>0;i--){
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;

        heapify(a,i,0);
    }
}

int main(){

    int arr[50000],n;

    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    printf("Enter the elements: ");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    clock_t start=clock();

    heap_sort(arr,n);

    clock_t end=clock();

    printf("\nSorted array elements: ");

    for(int i=n-1;i>=0;i--){   
        printf("%d ",arr[i]);
    }

    double time_taken=
    ((double)(end-start))/CLOCKS_PER_SEC;

    printf("\n\nExecution Time = %lf seconds\n",time_taken);

    printf("\nObservation Table\n");
    printf("n\tTime(seconds)\n");

    int sizes[]={1000,5000,10000,20000,50000};

    for(int s=0;s<5;s++){

        int size=sizes[s];

        start=clock();

        for(int r=0;r<20;r++){

            int *temp=(int *)malloc(size*sizeof(int));

            for(int i=0;i<size;i++){
                temp[i]=rand();
            }

            heap_sort(temp,size);

            free(temp);
        }

        end=clock();

        double obs_time=
        ((double)(end-start))/CLOCKS_PER_SEC;

        printf("%d\t%lf\n",size,obs_time);
    }

    return 0;
}
*/
