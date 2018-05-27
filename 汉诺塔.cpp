#include <iostream>
#include <cstdio>

using namespace std;
 
void hannoi (int n, char A, char B, char C)
{
    if (n == 1)   //�����һ��Բ����������ƶ���Ŀ���̡�
    {
        cout << "�ƶ�ԲȦ" << n << "����" << A << "����" << C << endl; 
    }
    else
    {
        hannoi (n-1, A, C, B);   // ��N-1��Բ����������ƶ�������ǰ��û���κ�Բ���Ĺ����̣�ͨ��B��C���ڴ˺��������е���λ�õĻ�������ʵ�ְ�N-1��Բ����A�̵�B�̵�ת�ơ�A--B����
        cout << "�ƶ�ԲȦ" << n << "����" << A << "����" << C << endl;
        hannoi (n-1, B, A, C);   //��N-1��Բ���ӹ������ƶ���Ŀ���̣�ģ��1��2�Ĳ���������ʵ�֣���ͨ��A��B���ڴ˺���������λ�õĻ�������ʵ��N-1��Բ����B�̵�C�̵�ת�ơ�B--C����
    }
}
 
int main()
{
    int n;
    cin >> n;

    hannoi (n, 'a', 'b', 'c');

    system("pause");
    return 0;
}