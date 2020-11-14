void merge(int array[],int ptr[],int start,int end){
    if(start>=end)
    return;
    int mid=(end-start)/2+start;
    int end1=mid-1;
    int start1=mid;
    merge(array,ptr,start,end1);
    merge(array,ptr,start1,end);
    int i=0;
    while(start<=end1&&start1<=end){
        if(array[start]<array[start1])
        ptr[i++]=array[start++];
        else
        ptr[i++]=array[start1++];
    }
    while(start<end1)
    ptr[i++]=start[start++];
    while(start1<=end)
    ptr[i++]=array[start1++];
    for(int i=0;i<=end;i++)
    array[i]=ptr[i];
}


void mergeSort(int array[],int len){
    int*ptr=new int [len];
    merge(array,ptr,0,len-1);
    delete ptr;
}