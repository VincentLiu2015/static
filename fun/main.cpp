#include <iostream>

using namespace std;
void test_static()
{
    static int va=0;//ע���ʼ�������⣬�������һ�л���ֽ������0������
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
    return 0;//���������ʲô��ϵ������
    //���������һ��
}
/*void main()
{
    for(int i=1;i<5;i++)
    {
        test_static();
    }
    cout << "Hello world!" << endl;

}*/
//Ϊʲô��������ʾ���뷵��int����
