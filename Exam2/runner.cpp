/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "newCxxTest.h", 24, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_newCxxTest_test_push : public CxxTest::RealTestDescription {
public:
 TestDescription_newCxxTest_test_push() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 29, "test_push" ) {}
 void runTest() { suite_newCxxTest.test_push(); }
} testDescription_newCxxTest_test_push;

static class TestDescription_newCxxTest_test_push_front : public CxxTest::RealTestDescription {
public:
 TestDescription_newCxxTest_test_push_front() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 41, "test_push_front" ) {}
 void runTest() { suite_newCxxTest.test_push_front(); }
} testDescription_newCxxTest_test_push_front;

static class TestDescription_newCxxTest_test_set_get_tail : public CxxTest::RealTestDescription {
public:
 TestDescription_newCxxTest_test_set_get_tail() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 54, "test_set_get_tail" ) {}
 void runTest() { suite_newCxxTest.test_set_get_tail(); }
} testDescription_newCxxTest_test_set_get_tail;

#include <cxxtest/Root.cpp>
