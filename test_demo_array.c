#include "test-framework/unity.h"
#include "demo_array.h"

void setUp(void)
{
}

void tearDown(void)
{
}

static void test_array_sum_all(void)
{
   // TEST_IGNORE();   // delete this line to run test
   int array[] = {1, 2, 3, 4, 5};
   int length = sizeof(array)/sizeof(array[0]);
   TEST_ASSERT_EQUAL(15, array_sum_all(array, length)); //verifica que el resultado de la función array_sum_all sea 15
}

static void test_array_sum_even(void)
{
   // TEST_IGNORE();   // delete this line to run test
   int array[] = {1, 2, 3, 4, 5};
   int length = sizeof(array)/sizeof(array[0]);
   TEST_ASSERT_EQUAL(6, array_sum_even(array, array+length));
}

static void test_arrays_are_equal(void)
{
   // TEST_IGNORE();   // delete this line to run test
   int array1[] = {1, 2, 3, 4, 5};
   int array2[] = {1, 2, 3, 4, 5};
   int length1 = sizeof(array1)/sizeof(array1[0]);
   int length2 = sizeof(array2)/sizeof(array2[0]);
   TEST_ASSERT_TRUE(array_are_equal(array1, array1+length1, array2, array2+length2));
}

static void test_arrays_are_not_equal(void)
{
   // TEST_IGNORE();   // delete this line to run test
   int array1[] = {1, 2, 3, 4, 5};
   int array2[] = {1, 2, 3, 4};
   int length1 = sizeof(array1)/sizeof(array1[0]);
   int length2 = sizeof(array2)/sizeof(array2[0]);
   TEST_ASSERT_FALSE(array_are_equal(array1, array1+length1, array2, array2+length2));
}

int main(void)
{
   UnityBegin("test_sublist.c");

   RUN_TEST(test_array_sum_all);
   RUN_TEST(test_array_sum_even);
   RUN_TEST(test_arrays_are_equal);
   RUN_TEST(test_arrays_are_not_equal);

   return UnityEnd();
}
