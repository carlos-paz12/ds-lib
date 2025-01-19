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
        using difference_type = std::ptrdiff_t;
        using reference = value_type &;
        using const_reference = const value_type &;
        using pointer = value_type *;
        using const_pointer = const value_type *;
        /// iterator
        /// const_iterator
        using node = SinglyNode<value_type>;

        explicit LinkedList(size_type count = size_type(), const_reference val = value_type()) : m_size(count)
        {
            if (count == 0)
            {
                m_head = nullptr;
                return;
            }

            m_head = new node(val);
            node *cur{m_head};

            for (size_type i{1}; i < count; ++i)
            {
                node *new_node{new node(val)};
                cur->m_next = new_node;
                cur = new_node;
            }
        }

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