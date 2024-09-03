#include "unity.h"
#include "vertex.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_get_key(void)
{
    vertex_t *v = createVertex(10);
    // TEST_ASSERT_EQUAL_INT(v->key, 10);
    freeVertex(v);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_get_key);
    return UNITY_END();
}