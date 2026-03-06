#include<stdio.h>
#include<stdlib.h>

void swap(int*data,int i,int j){
    int temp=data[i];
    data[i]=data[j];
    data[j]=temp;
}
// 冒泡排序
void bubblesort(int*data,int len)
{
    for(int i=0;i<len;i++){


        for(int j=0;j<len-i-1;j++)
        {

            if(data[j]>data[j+1]){

                swap(data,j,j+1);
            }


        }



    }




}
// 插入排序

void insertsort(int*data,int len){
    int key;
    for(int i=0;i<len;i++){

        key=data[i];
        int j=i-1;
        while(j>=0&&data[j]>key){

            data[j+1]=data[j];
            j--;
        }
        data[j+1]=key;
    }


}

int main(){

    


}