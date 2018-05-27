#include<iostream>
using namespace std;
#define M 2
#define N 3
#define P 4
int main()
{
    int a[M][N]={{1,2,3},{4,5,6}};
    int b[N][P]={{7,8,9,1},{2,3,4,5},{6,7,8,9}};
    int c[M][P];
    int i,j,k;

    for(i=0;i<M;i++)
     for(j=0;j<P;j++)
       c[i][j]=0;

    for(i=0;i<M;i++)
     for(j=0;j<P;j++)
      for(k=0;k<N;k++)
       c[i][j]+=a[i][k]*b[k][j];
    cout<<"矩阵相乘结果是："<<endl;

    for(i=0;i<M;i++){
     for(j=0;j<P;j++)
        cout<<c[i][j]<<" ";
     cout<<endl; 
    }   
    system("pause"); 
    return 0; 
	
}