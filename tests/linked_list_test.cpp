#include <iostream>

#include "tm/test_manager.hpp"

#include "../include/list/LinkedList.hpp"

#define YES 1
#define NO 0

#define DEFAULT_CONSTRUCTOR YES
#define SIZE_CONSTRUCTOR YES
#define SIZE_WITH_VALUE_CONSTRUCTOR YES

#define EMPTY_METHOD YES
#define SIZE_METHOD YES

using value_type = int;         ///!> value_type
using syze_type = std::size_t; ///!> size_type

int run_linked_list_tests()
{
    TestManager tm{"TESTING METHODS OF CAPACITY/STATUS"};

#if DEFAULT_CONSTRUCTOR
    {
        BEGIN_TEST(tm, "DEFAULT_CONSTRUCTOR", "Testing default constructor.");

        ds::LinkedList<value_type> source;

        EXPECT_EQ(source.size(), 0);
    }
#endif

#if SIZE_CONSTRUCTOR
    {
        BEGIN_TEST(tm, "SIZE_CONSTRUCTOR", "Testing size constructor.");

        syze_type source_size{5};
        ds::LinkedList<value_type> source(source_size);

        EXPECT_EQ(source.size(), source_size);
    }
#endif

#if SIZE_WITH_VALUE_CONSTRUCTOR
    {
        BEGIN_TEST(tm, "SIZE_WITH_VALUE_CONSTRUCTOR", "Testing size with value constructor.");

        value_type default_value{10};
        syze_type source_size{5};
        ds::LinkedList<value_type> source(source_size, default_value);

        EXPECT_EQ(source.size(), source_size);
    }
#endif

#if EMPTY_METHOD
    {
        BEGIN_TEST(tm, "EMPTY_METHOD", "Testing empty() method.");

        ds::LinkedList<value_type> source;

        EXPECT_TRUE(source.empty());
    }
#endif

#if SIZE_METHOD
    {
        BEGIN_TEST(tm, "SIZE_METHOD", "Testing size() method.");

        ds::LinkedList<value_type> source;

        EXPECT_EQ(source.size(), 0);
    }
#endif

    tm.summary();
    std::cout << '\n';

    return EXIT_SUCCESS;
}