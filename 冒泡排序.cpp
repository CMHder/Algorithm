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

	cout<<"����˳��"<<endl;
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
        // ��a[0...i]���������ݷ���ĩβ
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
    int flag;     // ���һ���Ƿ�������

    for (i=n-1; i>0; i--)
    {
        flag = 0;     // ��ʼ�����Ϊ0

        // ��a[0...i]���������ݷ���ĩβ
        for (j=0; j<i; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                flag = 1; //������������flagΪ1
            }
        }

        if (flag==0)
            break; // ���޽�����˵������������
    }
}