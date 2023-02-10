#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

#define STR_SAME  0
#define STR_DIFF  1

using namespace std;

struct tNode
{
    int iData;
    tNode* pNextNode;
};


class MyStack
{
private:
    tNode* pStack;
    tNode* pEnd;
    int m_iCount; // 원소 개수
    int m_iMaxCount; // 최대 개수

public:
    MyStack(){}
    MyStack(int _iInput)
    {
        pStack = pEnd = nullptr;
        m_iCount = 0;
        m_iMaxCount = 0;

        Initialize(_iInput);
    }
    ~MyStack(){}
public:
    void push(int _iNewElm);
    int pop();
    int size(); // 개수
    int empty();
    int top();
	int at(int _iIndx);

    void Initialize(int _iInput);
    void Resize();
    void CheckCapacity();

	tNode GetStack();
};


int main()
{
    int K = 0; // 명령 개수
    cin >> K;

    MyStack myStack(K);

    for (int i = 0; i < K; ++i)
    {
        char szFCall[10] = "";
		cin >> szFCall;
		
		if (strcmp(szFCall, "push") == STR_SAME)
		{
			int iTmpInput = 0;
			cin >> iTmpInput;
			myStack.push(iTmpInput);
		}
		else if (strcmp(szFCall, "pop") == STR_SAME)
		{
			myStack.pop();
		}
		else if (strcmp(szFCall, "size") == STR_SAME)
		{
			myStack.size();
		}
		else if (strcmp(szFCall, "empty") == STR_SAME)
		{
			myStack.empty();
		}
		else if (strcmp(szFCall, "top") == STR_SAME)
		{
			myStack.top();
		}
		else
		{
			cout << "wrong" << endl;
		}		
    }
	
    return 0;
}

void MyStack::push(int _iNewElm)
{
    // 자리 있는지 검증
    CheckCapacity();

    if (m_iCount <= 0) // 최초면
    {
        pStack[0] = tNode{_iNewElm, nullptr};
        pEnd = pStack + 1;
    }
    else
    {        
        pStack[m_iCount] = tNode{_iNewElm, nullptr};
        pStack[m_iCount - 1].pNextNode = pStack + m_iCount;
        pEnd = pStack + m_iCount + 1;
    }
    ++m_iCount;
}

int MyStack::pop()
{
	if (pEnd == nullptr)
	{
		cout << -1 << endl;
		return -1;
	}
	else
	{
		int iOutput = (pEnd - 1)->iData;

		//pop
		
		pStack[m_iCount - 2].pNextNode = nullptr; // 새로운 마지막 원소
		memset(pStack + m_iCount, 0, sizeof(tNode)); //빼기(없는 취급)
		--m_iCount;
		if (m_iCount <= 0) // 싹 다 뺐으면
		{
			pEnd = nullptr;
		}
		else
			pEnd = pStack + m_iCount; // 새로운 end
		
		cout << iOutput << endl;
		return iOutput;

	}
}

int MyStack::size()
{
	cout << m_iCount << endl; 
    return m_iCount;
}

int MyStack::empty()
{
    if (m_iCount == 0)
	{
		cout << 1 << endl;
		return 1;
	}
	else
	{
		cout << 0 << endl;
    	return 0;
	}
}

int MyStack::top()
{
    if (m_iCount <= 0)
	{
		cout << -1 << endl;
		return -1;
	}
	else
	{
		int iOutput = pStack[m_iCount - 1].iData;
		cout << iOutput << endl;
		return iOutput;
	}
}

void MyStack::Initialize(int _iInput)
{
    m_iMaxCount = _iInput;
    pStack = new tNode[_iInput];
}

void MyStack::Resize()
{
    m_iMaxCount *= 2;
    /*데이터 옮기기*/
    tNode* pTmpStack = new tNode[m_iMaxCount];
	memcpy(pTmpStack, pStack, sizeof(tNode) * m_iMaxCount);
	delete (pStack); // 스텍 노드가 연속적으로 있지 않아서 +주소연산 하면 안됨
	pStack = nullptr;
    pStack = pTmpStack;
}
void MyStack::CheckCapacity()
{
    if (m_iCount >= m_iMaxCount)
    {
        Resize();
    }
}

tNode MyStack::GetStack()
{
    return *pStack;
}

int MyStack::at(int _iIndx)
{
	return pStack[_iIndx].iData;
}
