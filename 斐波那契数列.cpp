1.long long Fib1(long long num)  
{  
    assert(num >= 0);  
  
    //递归  
    if ((num == 1) || (num == 0))  
    {  
        return num;  
    }  
    return Fib1(num-1)+Fib1(num-2);  
}  


2.void Fib2(int num);
long array[] ={0};  

int main()
{
	int num=8;
	Fib2(8);
	for(int k=0;k<=num;k++)
		cout<<array[k]<<",";
	system("pause");
}
void Fib2(int num) 
{   
    //非递归  
	array[0] = 0;  
    array[1] = 1;  
    for (int i=2; i<=num; i++)  
    {  
      array[i] = array[i-1] + array[i-2];  
    }  
}  


3.long long Fib3(long long num)  
{  
    assert(num >= 0);  
    long long first = 0;  
    long long second = 1;  
    long long third = 0;  
    for(int i=2; i<=num; i++)  
    {  
        third = first + second;  
        first = second;  
        second = third;  
    }  
    return third;  
}  

4.int main()
  {
      vector <unsigned int> v;
      unsigned int n;
      v.push_back(0);
      v.push_back(1);
    for(int i=2; i<50; i++)
        {
            v.push_back(v[i-1]+v[i-2]);
        }
        while(cin >> n)
        {
            cout << v[n] << endl;
        }
        return 0;
    }

