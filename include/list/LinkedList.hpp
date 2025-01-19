#ifndef __LINKED_LIST__
#define __LINKED_LIST__

#include "../node/SinglyNode.hpp"

namespace ds
{
    template <typename T>
    class LinkedList
    {
    public:
        using value_type = T;
        using size_type = std::size_t;
        using node = SinglyNode<value_type>;

        LinkedList() : m_head(nullptr), m_size(0) {}

        ~LinkedList()
        {
            while (m_head != nullptr)
            {
                node *temp{m_head};
                m_head = m_head->m_next;
                delete temp;
                --m_size;
            }
        }

        size_type size() const { return (m_size); }

        bool empty() const { return (m_size == 0); }

    private:
        node *m_head;
        size_type m_size;
    };
}

#endif