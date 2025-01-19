#ifndef __DOUBLY_NODE__
#define __DOUBLY_NODE__

template <typename T>
struct DoublyNode
{
    T m_data;
    DoublyNode *m_next;
    DoublyNode *m_prev;

    DoublyNode(T data = T(), DoublyNode *next = nullptr, DoublyNode *prev = nullptr) : m_data(data), m_next(next), m_prev(prev) {}
};

#endif
