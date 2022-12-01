// CSCI1300 Fall 2022
// Author: Vince Frazzini & Ali Haroon
// Recitation: 303 - Xuafei Recitation 101 - Morgan Byers
// Project 3 Inventory.cpp

#include "Inventory.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

Inventory::Inventory(){
    gold = 100;

    ingredients = 0;
    ceramic_pot = 0;
    frying_pan = 0;
    couldron = 0;
    cookware = {0,0,0};

    armor = 0;

    club = 0;
    spear = 0;
    rapier = 0;
    battle_axe = 0;
    longsword = 0;
    weapons = {0,0,0,0,0};
    treasures = {0,0,0,0,0};
}


void Inventory::printInventory(){
    string menu = "|-------------|\n|  INVENTORY  |\n|-------------|";
    string gold_print     =   "|  Gold       | " + to_string(gold);
    string cookware_print =   "|  Cookware   | P: " + to_string(cookware[0]) + " |  F: " + to_string(cookware[1]) + " |  C: " + to_string(cookware[2]) + " |";
    string weapon       =     "|  Weapons    | C: " + to_string(weapons[0]) + " |  S: " + to_string(weapons[1]) + " |  R: " + to_string(weapons[2]) + " | B: " + to_string(weapons[3]) + " | L: " + to_string(weapons[4]) + " |";
    string armor_print    =   "|  Armor      | " + to_string(armor);
    string treasure =        "|  Treasures  | R: " + to_string(treasures[0]) + " |  N: " + to_string(treasures[1]) + " |  B: " + to_string(treasures[2]) + " | C: " + to_string(treasures[3]) + " | G: " + to_string(treasures[4]) + " |";
    cout << menu << endl << gold_print << endl << cookware_print << endl << weapon << endl << armor_print << endl << treasure << endl;
}

int Inventory::getGold(){
    return gold;
}

void Inventory::setGold(int new_gold){
    gold = new_gold;
}

int Inventory::getIngredients()
{
    return ingredients;
}
void Inventory::setIngredients(int ingred)
{
    ingredients = ingred;
}

void Inventory::getCookware()
{
    cout << "Ceramic Pots: " << cookware[0] <<endl;
    cout << "Frying Pans: " << cookware[1] <<endl;
    cout << "Couldrons: " << cookware[2] <<endl;
    //return 0;
}
void Inventory::setCookware(int cookAmt, int cookIndex)
{
    cookware[cookIndex] += cookAmt;
}

int Inventory::getArmor()
{
    return armor;
}
void Inventory::setArmor(int armors){
    armor = armors;
}
vector<int> Inventory::getWeapons()
{
    return weapons;
}
void Inventory::setWeapons(int weaponAmt, int weaponIndex){
    weapons[weaponIndex] = weapons[weaponIndex] + weaponAmt;
}

void Inventory::setTreasures(int treasureAmt, int treasureIndex){
    treasures[treasureIndex] = treasureAmt;
}

int Inventory::getTreasures(int treasureIndex){
    return treasures[treasureIndex];
}