#include <iostream>

using namespace std;
void test_static()
{
    static int va=0;//注意初始化的问题，如果另起一行会出现结果都是0的问题
    //va=0;
    cout<<va<<'\n';
    ++va;

}
int main()
{
    for(int i=1;i<5;i++)
    {
        test_static();
    }
    cout << "Hello world!" << endl;
    return 0;//不加这个有什么关系吗？疑问
    //不加最后结果一样
}
/*void main()
{
    for(int i=1;i<5;i++)
    {
        test_static();
    }
    cout << "Hello world!" << endl;

}*/
//为什么这样会提示必须返回int报错
