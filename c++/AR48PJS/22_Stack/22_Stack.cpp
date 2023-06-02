#include <iostream>


// 스택을 사용하는 자료구조 예시
// 호출스택, 지역변수

// first input -> last out

// 리스트 방식, 배열을 써서 구현하는 방식 2가지


class Stack
{
public:
    struct Node // 이너클래스
    {
        Node()
            : data(0)
            , next(nullptr)
            , prev(nullptr)
        {

        }

        int data;
        Node* prev;
        Node* next;
    };
    Stack()
        : mHead(nullptr)
        , mTail(nullptr)
    {

    }

    void Push(int number)
    {
        if (mHead == nullptr)
        {
            mHead = new Node();
            mHead->data = number;
            mHead->prev = nullptr;
            mHead->next = nullptr;
            mTail = mHead;
        }
        else
        {
            mTail->next = new Node();
            mTail->next->data = number;

            mTail->next->prev = mTail;
            mTail->next->next = nullptr;
            mTail = mTail->next;
        }
    }
    void Pop()
    {
        Node* last = mTail;

        mTail = mTail->prev;
        mTail->next = nullptr;

        delete last;
        last = nullptr;
    }
    int Top()
    {
        return mTail->data;
    }

private:
    Node* mHead;
    Node* mTail;
};

int main()
{
    Stack stack;

    stack.Push(1);
    stack.Push(2);
    stack.Push(3);

    int top = stack.Top();
    stack.Pop();

    return 0;
}
