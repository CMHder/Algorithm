#include <iostream>    
using namespace std;
#define MAX 50  
#define inf 99999999  
int p[MAX+1];             //�洢��������������Լ���һ���������������Ϊ��0�������������   
int m[MAX][MAX];          //m[i][j]�洢����������Ž�    
int s[MAX][MAX];           //s[i][j]�洢���������ѷָ��  
int n;                    //�������  
 void matrix()    
{    
     
    int i,j,k;    
    for(i=0;i<n;i++)    
        m[i][i]=0;                  //��С�����������һ������ ���Խ���ȫΪ0   
                                 
    for(i=2;i<=n;i++)    
        for(j=0;j<n-i+1;j++)  
        {                           
            m[j][j+i-1]=inf;     
            for(k=0;k<i-1;k++)  
            {                                    //k����ָ��    
                if(m[j][j+i-1]>m[j][j+k]+m[j+k+1][j+i-1]+p[j]*p[j+k+1]*p[j+i])  
                {    
                    m[j][j+i-1]=m[j][j+k]+m[j+k+1][j+i-1]+p[j]*p[j+k+1]*p[j+i];    
                    s[j][j+i-1]=k;                           //��¼�ָ��    
                }    
            }    
        }    
}    
    
 void printmatrix(int leftindex,int rightindex)//�ݹ��ӡ���    
{    
    if(leftindex==rightindex)    
        cout<<leftindex;    
    else{    
        cout<<"(";    
        printmatrix(leftindex,leftindex+s[leftindex][rightindex]);    
        printmatrix(leftindex+s[leftindex][rightindex]+1,rightindex);    
        cout<<")";    
    }    
}    
int main()    
{    
    int i;  
    cout<<"�����������˵ľ������";  
    cin>>n;  
    cout<<"���������������к��ң���A*B��A=20*30��B=30*40��������20 30 40)\n" ;  
    for(i=0;i<n+1;i++)  
    {  
        cin>>p[i];  
    }  
    matrix();    
  cout<<"����������С����"<<m[0][n-1];    
    printmatrix(0,n-1);    
 cout<<"\n";    
     
	system("pause"); return 0;  
} 