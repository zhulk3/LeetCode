void insertSort(int array[],int length){
    if(length==1)
    return;
    for(int i=1;i<length;i++){
        int val=arrray[i];
        for(int j=i;j>0&&array[j]>array[j-1];j--)
        array[j]=array[j-1];
        array[j]=val;
    }
}