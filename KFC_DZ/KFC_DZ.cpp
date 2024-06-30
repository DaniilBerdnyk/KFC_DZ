#include <iostream>
#include"Order.h"
#include"OrdersSystem.h"


int main()
{
   
    OrdersSystem ordersSystem;

   
    Order order1("01.07.2024", "10:00", 30, "Заказ №1", 100.0);
    Order order2("01.07.2024", "10:30", 20, "Заказ №2", 200.0);
    Order order3("01.07.2024", "11:00", 40, "Заказ №3", 150.0);

   
    ordersSystem.createOrder(order1);
    ordersSystem.createOrder(order2);
    ordersSystem.createOrder(order3);

   
    ordersSystem.sortOrders();

   
    ordersSystem.executeFirstOrder();

    return 0;
}
