#include <iostream>
#include<string>
using namespace std;

void bubble_sort(int a[], int n);
void bubble_sort2(int a[], int n);
int main()
{
	int a[6]={20,40,30,10,60,50};
	cout<<"The orginal arrayare:"<<endl;  
	for(int k=0;k<=5;k++)  
        cout<<a[k]<<",";  
    cout<<endl;

	//bubble_sort(a,6); 
	bubble_sort2(a,6);

	cout<<"排列顺序："<<endl;
	for(int i=0;i<=5;i++)
	  cout<<a[i]<<",";
	cout<<endl;
	system("pause");
	return 0;
	
}

void bubble_sort(int a[], int n)
{
    int i,j;

    for (i=n-1; i>0; i--)
    {
        // 将a[0...i]中最大的数据放在末尾
        for (j=0; j<i; j++)
        {
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}
void bubble_sort2(int a[], int n)
{
    int i,j;
    int flag;     // 标记一趟是否发生交换

    for (i=n-1; i>0; i--)
    {
        flag = 0;     // 初始化标记为0

        // 将a[0...i]中最大的数据放在末尾
        for (j=0; j<i; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                flag = 1; //发生交换，设flag为1
            }
        }

        if (flag==0)
            break; // 若无交换，说明数列已有序
    }
}