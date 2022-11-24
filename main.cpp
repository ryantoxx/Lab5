#include "Header Files/Restaurant.h"
#include "Header Files/Menu.h"
#include "Header Files/People.h"
#include "Header Files/Customer.h"
#include "Header Files/Staff.h"
#include "Header Files/Hostess.h"
#include "Header Files/Waiter.h"
#include "Header Files/Sommelier.h"
#include "Header Files/Chef.h"
#include "Header Files/BaseMenu.h"
#include "Header Files/HardMenu.h"
#include <iostream>
#include <ctime>

using std::string;

int randNumber(int min, int max) {
    int randomNumber;
    randomNumber = (rand() % (max - min + 1)) + min;
    return randomNumber;
}

int main() {

    srand(time(NULL));

    Restaurant rest;
    rest.setTitle("Fancy Restaurant");
    rest.setFoundation("The restaurant was built on 1st November of 1995");

    int day = 1;
    int customers = 7;

    Customer customer;
    Hostess hostess;
    Waiter waiter;
    Menu menu;
    BaseMenu basemenu = BaseMenu("Pepperoni", 12, "BigBurger", 10, "Beef Steak", 15, "Vinegred", 5, "Borsch", 8, "Latte", 5, "Apple Juice", 3, "Cola", 3, "Water", 1);
    Sommelier sommelier;
    Chef chef;

    while (true) {
        int IncomeOverall = randNumber(70, 100);
        std::cout << "Day: " << day << std::endl;
        std::cout << "Number of customers: " << customers << std::endl;
        std::cout << " " << std::endl;
        for (int i = 0; i < customers; i++) {
            int birth = randNumber(16, 30);
            int time = randNumber(30, 50);
            int miss = randNumber(5, 20);
            int dayIncome = randNumber(5, 25);
            int totalIncome = dayIncome++;


            customer.Cname(randNumber(1, 90));
            customer.setAge(birth);
            customer.Introduce();
            customer.setBalance(randNumber(100, 1500));
            customer.checkBalance();
            hostess.Introduce();
            hostess.checkReservation();
            waiter.Introduce();
            waiter.waiterLate(randNumber(1, 100));
            waiter.waiterForget(randNumber(9, 100));
            menu.setQuantity(2);
            menu.setType1("common");
            menu.setType2("hard");
            menu.Introduce();
            basemenu.Introduce();
            if (birth > 20) {
                int item = randNumber(1, 4);
                std::cout << " " << std::endl;
                sommelier.Introduce();
                HardMenu hardmenu = HardMenu("Irish Whiskey", 100, "Spicusor", 20, "Gallo Vine", 120, "McDowells", 150, "Blanco Tequila", 80);
                hardmenu.Introduce();
                sommelier.OfferDiscount(item);
            }else {
                std::cout << "Sorry, you are too young to order something from the hard menu"<<std::endl;
            }

            customer.makeOrder(randNumber(1, 90));
            chef.setName("Oliver");
            chef.Introduce();
            chef.delayMeal(randNumber(20, 80));
            chef.missingIngredients(randNumber(40, 90));

            if (time > 40) {
                std::cout << "Sorry for inconvenience you will have a 10% discount!" << std::endl;
                chef.PrepareMeal();
            }
            else if (miss > 19){
                std::cout << "You dont have to pay for your meal" << std::endl;
                chef.PrepareMeal();
            }
            else {
                chef.PrepareMeal();
            }
            customer.Payment(randNumber(1,90));
            hostess.leave();
            std::cout << "Income for this day: " << totalIncome <<"$." << std::endl;
            std::cout << "=========================================" << std::endl;
        }
        std::cout << " " << std::endl;
        std::cout << "Total Income: " << IncomeOverall << "$."<< std::endl;

        return 0;
    }

}

