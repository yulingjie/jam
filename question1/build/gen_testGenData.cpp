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
bool suite_TestGenerateData_init = false;
#include "../test/TestGenerateData.h"

static TestGenerateData suite_TestGenerateData;

static CxxTest::List Tests_TestGenerateData = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGenerateData( "/home/ylj/jam/question1/test/TestGenerateData.h", 14, "TestGenerateData", suite_TestGenerateData, Tests_TestGenerateData );

static class TestDescription_suite_TestGenerateData_testGenData : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestGenerateData_testGenData() : CxxTest::RealTestDescription( Tests_TestGenerateData, suiteDescription_TestGenerateData, 36, "testGenData" ) {}
 void runTest() { suite_TestGenerateData.testGenData(); }
} testDescription_suite_TestGenerateData_testGenData;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
