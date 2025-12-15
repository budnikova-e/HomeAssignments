
#include "gtest/gtest.h"
#include "Transformer.hpp"
#include "Autobot.hpp"
#include "Decepticon.hpp"
#include "Dinobot.hpp"
#include "Weapon.hpp"
#include "Ally.hpp"

// Тесты для класса Weapon
TEST(WeaponTest, ConstructorAndGetters) {
    Weapon gun("GUN", 100);
    ASSERT_EQ(gun.getName(), "GUN");
    ASSERT_EQ(gun.getDamage(), 100);
}

TEST(WeaponTest, Setters) {
    Weapon sword("SWORD1", 50);
    sword.setName("SWORD2");
    sword.setDamage(120);
    ASSERT_EQ(sword.getName(), "SWORD2");
    ASSERT_EQ(sword.getDamage(), 120);
}

// Тесты для класса Ally
TEST(AllyTest, ConstructorAndGetters) {
    Ally testAlly1("testAlly", "Human");
    ASSERT_EQ(testAlly1.getName(), "testAlly");
    ASSERT_EQ(testAlly1.getType(), "Human");
}

TEST(AllyTest, Setters) {
    Ally testAlly2("testAlly2", "SomeType");
    testAlly2.setName("NewName");
    testAlly2.setType("SomeOtherType");
    ASSERT_EQ(testAlly2.getName(), "NewName");
    ASSERT_EQ(testAlly2.getType(), "SomeOtherType");
}

// Тесты для базового класса Transformer
TEST(TransformerTest, ConstructorAndGetters) {
    Weapon weapon = Weapon("GUN", 80);
    Ally ally("testAlly", "Human");
    Transformer testTransformer(10, 100, 200, 200, 50, &weapon, &ally);

    ASSERT_EQ(testTransformer.getLevel(), 10);
    ASSERT_EQ(testTransformer.getStrength(), 100);
    ASSERT_EQ(testTransformer.getRange(), 200);
    ASSERT_EQ(testTransformer.getFuel(), 200);
    ASSERT_EQ(testTransformer.getAmmo(), 50);
    ASSERT_NE(testTransformer.getWeapon(), nullptr);
    ASSERT_EQ(testTransformer.getWeapon()->getName(), "GUN");
    ASSERT_NE(testTransformer.getAlly(), nullptr);
    ASSERT_EQ(testTransformer.getAlly()->getName(), "testAlly");
}

TEST(TransformerTest, Setters) {
    Transformer defaultBot;
    defaultBot.setLevel(5);
    defaultBot.setStrength(70);
    defaultBot.setRange(15);
    defaultBot.setFuel(150);
    defaultBot.setAmmo(30);

    ASSERT_EQ(defaultBot.getLevel(), 5);
    ASSERT_EQ(defaultBot.getStrength(), 70);
    ASSERT_EQ(defaultBot.getRange(), 15);
    ASSERT_EQ(defaultBot.getFuel(), 150);
    ASSERT_EQ(defaultBot.getAmmo(), 30);

    Weapon weapon("GUN", 80);
    defaultBot.setWeapon(&weapon);
    ASSERT_NE(defaultBot.getWeapon(), nullptr);
    ASSERT_EQ(defaultBot.getWeapon()->getName(), "GUN");

    Ally newAlly("newAlly", "Human");
    defaultBot.setAlly(&newAlly);
    ASSERT_NE(defaultBot.getAlly(), nullptr);
    ASSERT_EQ(defaultBot.getAlly()->getName(), "newAlly");
}

TEST(TransformerTest, Methods) {
    Transformer defaultBot;

    ASSERT_TRUE(defaultBot.move());

    Direction dir(3,5);
    ASSERT_TRUE(defaultBot.turn(dir));

    ASSERT_TRUE(defaultBot.fire());
    ASSERT_TRUE(defaultBot.ultimate());
    ASSERT_TRUE(defaultBot.transform());
}

// Тесты для класса Autobot
TEST(AutobotTest, ConstructorAndGetters) {
    Weapon weapon("GUN", 80);
    Ally ally("testAlly", "Human");
    Autobot testAutoBot(8, 85, 18, 180, 40, &weapon, &ally, "Car", "MyTeam");

    ASSERT_EQ(testAutoBot.getVehicleMode(), "Car");
    ASSERT_EQ(testAutoBot.getTeam(), "MyTeam");
}

TEST(AutobotTest, Setters) {
    Autobot sideswipe;
    sideswipe.setVehicleMode("Car");
    sideswipe.setTeam("MyTeam");
    ASSERT_EQ(sideswipe.getVehicleMode(), "Car");
    ASSERT_EQ(sideswipe.getTeam(), "MyTeam");
}

TEST(AutobotTest, Methods) {
    Weapon weapon("GUN", 80);
    Ally ally("testAlly", "Human");
    Autobot testAutoBot(8, 85, 18, 180, 40, &weapon, &ally, "Car", "MyTeam");
    ASSERT_TRUE(testAutoBot.assist());
    ASSERT_FALSE(testAutoBot.transform()); 
}

// Тесты для класса Decepticon
TEST(DecepticonTest, ConstructorAndGetters) {
    Weapon weapon("GUN", 80);
    Ally ally("testAlly", "Human");
    Decepticon testDecepticon(10, 100, 25, 180, 60, &weapon, &ally, "Tank", 10);

    ASSERT_EQ(testDecepticon.getAltMode(), "Tank");
    ASSERT_EQ(testDecepticon.getTerrorFactor(), 10);
}

TEST(DecepticonTest, Methods) {
    Decepticon testDecepticon;
    ASSERT_TRUE(testDecepticon.intimidate());
    ASSERT_FALSE(testDecepticon.transform());
}

// Тесты для класса Dinobot
TEST(DinobotTest, ConstructorAndGetters) {
    Weapon weapon("GUN", 80);
    Ally ally("testAlly", "Human");
    Dinobot testDinobot(12, 120, 10, 100, 20, &weapon, nullptr, "Car", "MyTeam", "Dino");

    ASSERT_EQ(testDinobot.getDinoType(), "Dino");
    ASSERT_EQ(testDinobot.getVehicleMode(), "Car"); 
}

TEST(DinobotTest, Methods) {
    Dinobot testDinobot;
    ASSERT_TRUE(testDinobot.stomp());
    ASSERT_FALSE(testDinobot.transform()); 
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
