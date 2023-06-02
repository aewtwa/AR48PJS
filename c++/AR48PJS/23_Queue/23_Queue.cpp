#include <iostream>

// 큐
// first in -> first out

// 템플릿 클래스
// 내가 어떤자료형이든지 간에
// 템플릿을 이용해서 만들어놓으면
// 사용할떄 사용할 자료형을 명시해주면
// 해당자료형으로 클래스가 구성이된다.

template <typename T>
class Queue
{
public:
    Queue()
        : mDatas{}
        , mFront(0)
        , mEnd(0)
    {

    }

    void Push(T data)
    {
        mDatas[mEnd] = data;
        mEnd++;
    }

    T Pop()
    {
        return mDatas[mFront++];
    }

private:
    T mDatas[256];
    int mFront;
    int mEnd;
};

int main()
{
    Queue<int> queue;
    queue.Push(1);
    queue.Push(2);
    queue.Push(3);
    queue.Push(4);

    int pop = queue.Pop();

    //Queue<char> queue;


    return 0;
}

