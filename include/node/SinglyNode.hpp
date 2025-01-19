#ifndef __SINGLY_NODE__
#define __SINGLY_NODE__

template <typename T>
struct SinglyNode
{
    T m_data;
    SinglyNode *m_next;

    SinglyNode(T data = T(), SinglyNode *node = nullptr) : m_data(data), m_next(node) { /* empty */ }
};

#endif