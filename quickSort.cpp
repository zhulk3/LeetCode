void quickSort(int array[],int start,int end){
    if(start>end)
    return;
    int pivot=array[start];
    int i=start;
    int j=end;
    while(i!=j){
        while(array[j]>=pivot&&j>i)
        j--;
        while(array[i<=pivot&&i<j])
        i++;
        if(i<j){
            int t=array[i];
            array[i]=array[j];
            array[j]=t;
        }
    }
    array[start]=array[i];
    array[i]=pivot;
    quickSort(array,start,i-1);
    quickSort(array,i+1,end);
}