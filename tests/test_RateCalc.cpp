#include <gtest/gtest.h>
#include "../code/RateCalc.h"

#include <iostream>
#include <string>

using namespace std;

class test_RateCalc : public ::testing::Test {
protected:
// 	// This function runs only once before any TEST_F function
	static void SetUpTestCase(){
	}

// 	// This function runs after all TEST_F functions have been executed
	static void TearDownTestCase(){
	}
    
// 	// this function runs before every TEST_F function
	void SetUp() override {
    }

// 	// this function runs after every TEST_F function
	void TearDown() override {
	}
};

TEST_F(test_RateCalc, TestInitialization){
    RateCalc myCalc;
	
	// ASSERT_TRUE(root); // expect root to have pointer
}