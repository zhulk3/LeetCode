void selectSort(int a[],int length){
    for(int i=0;i<length-1;i++){
        int minIndex=i;
        for(int j=0;j<length-1;j++){
            if(array[j]<array[minIndex])
            minIndex=j;
        }
        if(i!=minIndex){
            int temp=array[minIndex];
            array[minIndex]=array[i];
            array[i]=temp;
        }
    }
}