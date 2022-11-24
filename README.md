# Laboboratory work nr.5: Wrapping Up the Simulation

## Simulation

I have decided to choose a Restaurant simulation.Here 
I am goint to implement different staff members that
usually work there, like waiter, chef, owner, hostess,
sommelier.So, I figured that this will be a good starting point.


## Used Classes

Here I implemented several classes that are going to be
the pillars of my simulation.

- Restaurant
- People
- Staff
- Customer
- Hostess
- Waiter
- Chef
- Sommelier
- Menu
- HardMenu
- BaseMenu

All these classes have their own attributes and methods designed for
themselves.Thus, this simulation lets you see how a customer 
gets his certain meal.

## Hierarchy Diagram
![image](https://user-images.githubusercontent.com/114425150/203718254-c329763e-fb65-4cf5-8ddf-73dbfed5286a.png)

## Implemented Scenarios
1.  Customers checks the balance.
2.  Customers makes an order.
3.  Customers denies alcohol.
4.  Hostess checks whether there are empty spots for customer to take.
5.  Waiter might be late and make the customer to wailt a while for him.
6.  Waiter might forget the order made by the customer.
7.  Sommelier offers a certain discount if the  customer is willing to buy to bottles of different type of alcohol.
8.  Cheff prepares the meal.
9.  Cheff might delay the meal.
10. Cheff might not start cooking meal, because there are missing certain ingredients.

## Updates
1.Sommelier is not providing the menu to people that are not older than 20 years.

2.Hostess is providing information whether the Restaurant is full or not. 

3.Chef will offer a discount is the meal is taking too long to prepare.

4.Customer will not have to pay for the meal if there are no certain ingredients.Thus, he may choose whatever he wants to.
