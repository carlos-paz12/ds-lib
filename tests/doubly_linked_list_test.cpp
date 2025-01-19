#include <iostream>

#include "tm/test_manager.hpp"

#include "../include/list/DoublyLinkedList.hpp"

#define YES 1
#define NO 0

#define EMPTY_METHOD YES
#define SIZE_METHOD YES

int run_doubly_linked_list_tests()
{
    TestManager tm{"TESTING METHODS OF CAPACITY/STATUS"};

#if EMPTY_METHOD
    {
        BEGIN_TEST(tm, "EMPTY_METHOD", "Testing size method.");

        ds::DoublyLinkedList<int> source;

        EXPECT_TRUE(source.empty());
    }
#endif

#if SIZE_METHOD
    {
        BEGIN_TEST(tm, "SIZE_METHOD", "Testing size method.");

        ds::DoublyLinkedList<int> source;

        EXPECT_EQ(source.size(), 0);
    }
#endif

    tm.summary();
    std::cout << '\n';

    return EXIT_SUCCESS;
}