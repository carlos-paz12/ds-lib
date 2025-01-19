#include <iostream>

#include "doubly_linked_list_test.cpp"
#include "linked_list_test.cpp"
#include "node_test.cpp"

int main()
{
    std::cout << ">>> TESTING STRUCT NODE...\n";
    run_node_tests();

    std::cout << ">>> TESTING CLASS LINKED_LIST...\n";
    run_linked_list_tests();

    std::cout << ">>> TESTING DOUBLY_LINKED_LIST...\n";
    run_doubly_linked_list_tests();

    return EXIT_SUCCESS;
}
