/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TestDataCorrect_init = false;
#include "../test/TestDataCorrect.h"

static TestDataCorrect suite_TestDataCorrect;

static CxxTest::List Tests_TestDataCorrect = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDataCorrect( "/home/ylj/jam/question1/test/TestDataCorrect.h", 9, "TestDataCorrect", suite_TestDataCorrect, Tests_TestDataCorrect );

static class TestDescription_suite_TestDataCorrect_testIntSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestDataCorrect_testIntSize() : CxxTest::RealTestDescription( Tests_TestDataCorrect, suiteDescription_TestDataCorrect, 19, "testIntSize" ) {}
 void runTest() { suite_TestDataCorrect.testIntSize(); }
} testDescription_suite_TestDataCorrect_testIntSize;

static class TestDescription_suite_TestDataCorrect_testDataOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestDataCorrect_testDataOrder() : CxxTest::RealTestDescription( Tests_TestDataCorrect, suiteDescription_TestDataCorrect, 23, "testDataOrder" ) {}
 void runTest() { suite_TestDataCorrect.testDataOrder(); }
} testDescription_suite_TestDataCorrect_testDataOrder;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
