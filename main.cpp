#include <iostream>
#include "Strategy.h"

int main(int argc, char *argv[])
{
    /*
    Strategyģʽ��Templateģʽʵ����ʵ��һ������ӿڵ����ַ�ʽ���̳к����֮�������
    Ҫʵ��һ������ӿڣ��̳���һ�ַ�ʽ�����ǽ�����ӿ������ڻ����У��������ʵ�ַ��ھ��������С�
    ��ϣ�ί�У�������һ�ַ�ʽ�����ǽ��ӿڵ�ʵ�ַ��ڱ���϶����У�������ӿڷ���������С�
    �����ַ�ʽ������ȱ��
    */
    //����A��B���滻
    Strategy* pStr = new ConcreteStrategyA();
    Context* pcon = new Context(pStr);
    pcon->DoAction();

    pStr = new ConcreteStrategyB();
    pcon = new Context(pStr);
    pcon->DoAction();
	
	std::cin.get();

    return 0;
}