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
bool suite_TestMergeInMemory_init = false;
#include "../test/TestMergeInMemory.h"

static TestMergeInMemory suite_TestMergeInMemory;

static CxxTest::List Tests_TestMergeInMemory = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMergeInMemory( "/home/ylj/jam/question1/test/TestMergeInMemory.h", 6, "TestMergeInMemory", suite_TestMergeInMemory, Tests_TestMergeInMemory );

static class TestDescription_suite_TestMergeInMemory_testMergeSort : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMergeInMemory_testMergeSort() : CxxTest::RealTestDescription( Tests_TestMergeInMemory, suiteDescription_TestMergeInMemory, 28, "testMergeSort" ) {}
 void runTest() { suite_TestMergeInMemory.testMergeSort(); }
} testDescription_suite_TestMergeInMemory_testMergeSort;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
