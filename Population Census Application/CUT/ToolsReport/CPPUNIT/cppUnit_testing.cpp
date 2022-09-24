#include <iostream>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <netinet/in.h>
#include <string>
////////////
#include "validation_file.cpp"


using namespace CppUnit;
using namespace std;

class testdr: public CppUnit::TestFixture
{	
	CPPUNIT_TEST_SUITE(testdr);
	CPPUNIT_TEST(test_check_ssid);
	CPPUNIT_TEST(test_check_gender);
	CPPUNIT_TEST_SUITE_END();
	
	protected:
		void test_check_ssid(void);
		void test_check_gender(void);
};

void testdr::test_check_ssid(void)
{
	CPPUNIT_ASSERT(1==check_ssid("123456789"));
	CPPUNIT_ASSERT(1==check_ssid("afdfdf54")); // should be failed
	CPPUNIT_ASSERT(1==check_ssid("000000000"));
	CPPUNIT_ASSERT(0==check_ssid("456546545465465454"));
}

void testdr::test_check_gender(void)
{
	CPPUNIT_ASSERT(1==check_gender("m"));
	CPPUNIT_ASSERT(1==check_gender("F"));
	CPPUNIT_ASSERT(0==check_gender("vdf"));
	CPPUNIT_ASSERT(1==check_gender("4654")); // to be failed
}


CPPUNIT_TEST_SUITE_REGISTRATION(testdr);

int main(int argc,char* argv[])
{
	CPPUNIT_NS::TestResult testresult;
	CPPUNIT_NS::TestResultCollector collectedresults;
	testresult.addListener(&collectedresults);
	CPPUNIT_NS::BriefTestProgressListener progress;
	testresult.addListener(&progress);
	CPPUNIT_NS::TestRunner testrunner;
	testrunner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
	testrunner.run(testresult);
	CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults,std::cerr);
	compileroutputter.write();
	return collectedresults.wasSuccessful()?0:1;

}


