#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <memory>
#include "UnitConversion.h"

using ::testing::_;
using ::testing::DoAll;
using ::testing::Eq;
using ::testing::FloatEq;
using ::testing::AtLeast;
using ::testing::AnyNumber;

class UnitConversionTest : public ::testing::Test {
protected:
  UnitConversionTest() {}

  ~UnitConversionTest() {}

  void SetUp() {}

  void TearDown() {}
};

TEST_F(UnitConversionTest, KilometresToMiles) {
  EXPECT_THAT(UnitConversion::KilometresToMiles(9999), FloatEq(6213.09f));
}

TEST_F(UnitConversionTest, MetresToMiles) {
  EXPECT_THAT(UnitConversion::MetresToMiles(9999000), FloatEq(6213.09f));
}

TEST_F(UnitConversionTest, CelsiusToFahrenheit1) {
  EXPECT_THAT(UnitConversion::CelsiusToFahrenheit(-40), Eq(-40));
}

TEST_F(UnitConversionTest, CelsiusToFahrenheit2) {
  EXPECT_THAT(UnitConversion::CelsiusToFahrenheit(0), Eq(32));
}

TEST_F(UnitConversionTest, CelsiusToFahrenheit3) {
  EXPECT_THAT(UnitConversion::CelsiusToFahrenheit(50), Eq(122));
}

int main(int argc, char **argv) {
  // The following line must be executed to initialise Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock( &argc, argv );

  int exitCode = -1;
  try {
      exitCode = RUN_ALL_TESTS( );
  }
  catch ( const std::exception &e ) {
      std::cerr << e.what() << std::endl;
  }

  fclose( stdin );
  fclose( stdout );
  fclose( stderr );

  return exitCode;
}
