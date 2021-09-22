#include "unity.h"
#include "list.h"

void setUp (void) {}
void tearDown (void) {}

/**
 * Try to destroy NULL and fail
 */
void test_fail_null(void) {
    ll_destroy(NULL);

    TEST_PASS();
}

/**
 * Create one item list and destroy it
 */
void test_one_done(void) {
    struct ll_node *head = ll_create(10);

    ll_destroy(head);
    head = NULL;

    TEST_PASS();
}

/**
 * Create four item list and destroy
 */
void test_four_done(void) {
    struct ll_node *head = ll_create(10);
    ll_append(head, 20);
    ll_append(head, 30);
    ll_append(head, 40);

    ll_destroy(head);
    head = NULL;
    TEST_PASS();
}


/**
 * The main function for this unit test runner
 */
int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_fail_null);
    RUN_TEST(test_one_done);
    RUN_TEST(test_four_done);
    return UNITY_END();
}
