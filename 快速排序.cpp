#include <iostream>
#include<string>
using namespace std;

void quick_sort(int a[], int l, int r);
int main()
{
	int a[6]={30,40,60,10,20,50},k;
	cout<<"The orginal arrayare:"<<endl;  
	for(k=0;k<=5;k++)  
        cout<<a[k]<<",";  
    cout<<endl;
	quick_sort(a,0,5); 
	cout<<"排列顺序："<<endl;
	for(int i=0;i<=5;i++)
	  cout<<a[i]<<",";
	cout<<endl;
	system("pause");
	return 0;
	
}

void quick_sort(int a[], int l, int r)
{    
    if (l < r)
    {        
        int i,j,x;

        i = l;
        j = r;
        x = a[i];        
        while (i < j)
        {            
            while(i < j && a[j] > x)
                j--; // 从右向左找第一个小于x的数
            if(i < j)
                a[i++] = a[j];            
 
            while(i < j && a[i] < x)
                i++; // 从左向右找第一个大于x的数
            if(i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quick_sort(a, l, i-1); /* 递归调用 */
        quick_sort(a, i+1, r); /* 递归调用 */
    }
}
