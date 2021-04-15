#include "unity_internals.h"
#include "unity.h"
#include "bank.h"
void setUp(){}
void tearDown(){}
void testadd(void){
	TEST_ASSERT_EQUAL(0,check("archana1","archana1"));
	
}
int main()
{
	UNITY_BEGIN();
	RUN_TEST(testadd);
	return UNITY_END();
}
