#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
  REQUIRE(inferBreach(16, 20, 30) == TOO_LOW);
  REQUIRE(inferBreach(40, 20, 30) == TOO_HIGH);
}
/*
  TEST_CASE("Classify temprature breach accordingly") 
{
  REQUIRE(classifyTemperatureBreach(PASSIVE_COOLING, 22) == NORMAL);
  REQUIRE(classifyTemperatureBreach(PASSIVE_COOLING, -5) == TOO_LOW);
  REQUIRE(classifyTemperatureBreach(PASSIVE_COOLING, 55) == TOO_HIGH);
  REQUIRE(classifyTemperatureBreach(HI_ACTIVE_COOLING, 35) == NORMAL);
  REQUIRE(classifyTemperatureBreach(HI_ACTIVE_COOLING, -7) == TOO_LOW);
  REQUIRE(classifyTemperatureBreach(HI_ACTIVE_COOLING, 47) == TOO_HIGH);
  REQUIRE(classifyTemperatureBreach(MED_ACTIVE_COOLING, 0) == NORMAL);
  REQUIRE(classifyTemperatureBreach(MED_ACTIVE_COOLING, -10) == TOO_LOW);
  REQUIRE(classifyTemperatureBreach(MED_ACTIVE_COOLING, 45) == TOO_HIGH);
  
}

  TEST_CASE("Check and Alert") 
  {
    BatteryCharacter batteryCharacter;
    batteryCharacter.coolingType = PASSIVE_COOLING;
    REQUIRE(checkAndAlert(TO_CONTROLLER,batteryCharacter, 45) == OK);
    REQUIRE(checkAndAlert(TO_EMAIL,batteryCharacter, 45) == NOT_OK);
    REQUIRE(checkAndAlert(TO_CONTROLLER,batteryCharacter, 45) == OK);
    batteryCharacter.coolingType = HI_ACTIVE_COOLING;
    REQUIRE(checkAndAlert(TO_CONTROLLER,batteryCharacter, 45) == OK);
    REQUIRE(checkAndAlert(TO_EMAIL,batteryCharacter, 45) == NOT_OK);
    REQUIRE(checkAndAlert(TO_CONTROLLER,batteryCharacter, 45) == OK);
    batteryCharacter.coolingType = MED_ACTIVE_COOLING;
    REQUIRE(checkAndAlert(TO_CONTROLLER,batteryCharacter, 45) == OK);
    REQUIRE(checkAndAlert(TO_EMAIL,batteryCharacter, 45) == NOT_OK);
    REQUIRE(checkAndAlert(TO_CONTROLLER,batteryCharacter, 45) == OK);
  }

 TEST_CASE("Send Alert") 
 {
    REQUIRE(SendAlert(TO_CONTROLLER,NORMAL) == OK);
    REQUIRE(SendAlert(TO_CONTROLLER,TOO_LOW) == OK);
    REQUIRE(SendAlert(TO_CONTROLLER,TOO_HIGH) == OK);
    REQUIRE(SendAlert(TO_EMAIL,NORMAL) == OK);
    REQUIRE(SendAlert(TO_EMAIL,TOO_LOW) == OK);
    REQUIRE(SendAlert(TO_EMAIL,TOO_HIGH) == OK);
 }
 */   
    
