#include<iostream>
using namespace std;
int max1(int a, int b)
{
    return (a > b ? a : b);
}
float max1(float a, float b)  
{
    return (a > b ? a : b);
}
int main()
{
    cout << max1(2, 5) << endl;       
    cout << max1(2.5f, 3.5f) << endl; 
    return 0;
}

