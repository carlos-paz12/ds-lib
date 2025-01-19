#include <iostream>

#include "test_manager.hpp"

#include "../include/node/SinglyNode.hpp"
#include "../include/node/DoublyNode.hpp"

#define YES 1
#define NO 0

#define ACCESS_DATA_SINGLY YES
#define ACCESS_NEXT_SINGLY YES

#define ACCESS_DATA_DOUBLY YES
#define ACCESS_NEXT_DOUBLY YES
#define ACCESS_PREV_DOUBLY YES

int run_node_tests()
{
    TestManager tm{"TESTING SINGLE_NODE"};

#if ACCESS_DATA_SINGLY
    {
        BEGIN_TEST(tm, "ACCESS_DATA_SINGLY", "Testing access of m_data.");

        SinglyNode<int> *head = new SinglyNode<int>(5, nullptr);

        EXPECT_EQ(head->m_data, 5);
    }
#endif

#if ACCESS_NEXT_SINGLY
    {
        BEGIN_TEST(tm, "ACCESS_NEXT_SINGLY", "Testing access of m_next.");

        SinglyNode<int> *n1 = new SinglyNode<int>(3, nullptr);
        SinglyNode<int> *n2 = new SinglyNode<int>(4, n1);

        EXPECT_EQ(n2->m_next, n1);
    }
#endif

    tm.summary();
    std::cout << '\n';

    TestManager tm2{"TESTING DOUBLY_NODE"};

#if ACCESS_DATA_DOUBLY
    {
        BEGIN_TEST(tm2, "ACCESS_DATA_DOUBLY", "Testing access of m_data.");

        DoublyNode<int> *head = new DoublyNode<int>(5, nullptr, nullptr);

        EXPECT_EQ(head->m_data, 5);
    }
#endif

#if ACCESS_NEXT_DOUBLY
    {
        BEGIN_TEST(tm2, "ACCESS_NEXT_DOUBLY", "Testing access of m_next.");

        DoublyNode<int> *n1 = new DoublyNode<int>(3);
        DoublyNode<int> *n2 = new DoublyNode<int>(4);

        n1->m_next = n2;
        n2->m_prev = n1;

        EXPECT_EQ(n1->m_next, n2);
        EXPECT_EQ(n2->m_next, nullptr);
    }
#endif

#if ACCESS_PREV_DOUBLY
    {
        BEGIN_TEST(tm2, "ACCESS_PREV_DOUBLY", "Testing access of m_prev.");

        DoublyNode<int> *n1 = new DoublyNode<int>(3);
        DoublyNode<int> *n2 = new DoublyNode<int>(4);

        n1->m_next = n2;
        n2->m_prev = n1;

        EXPECT_EQ(n2->m_prev, n1);
        EXPECT_EQ(n1->m_prev, nullptr);
    }
#endif

    tm2.summary();
    std::cout << '\n';

    return EXIT_SUCCESS;
}