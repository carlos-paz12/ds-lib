#ifndef __DOUBLY_LINKED_LIST__
#define __DOUBLY_LINKED_LIST__

#include "../node/DoublyNode.hpp"

namespace ds
{
    template <typename T>
    class DoublyLinkedList
    {
    public:
        using value_type = T;
        using size_type = std::size_t;
        using node = DoublyNode<value_type>;

        DoublyLinkedList() : m_head(new node), m_tail(new node), m_size(0)
        {
            m_head->m_next = m_tail;
            m_tail->m_prev = m_head;
        }

        ~DoublyLinkedList()
        {
            node *cur{m_head};
            while (cur != nullptr)
            {
                node *ahead{cur->m_next};
                delete cur;
                cur = ahead;
            }
        }

        size_type size() const
        {
            return (m_size);
        }

        bool empty() const
        {
            return (m_size == 0);
        }

    private:
        node *m_head;
        node *m_tail;
        size_type m_size;
    };
}

#endif