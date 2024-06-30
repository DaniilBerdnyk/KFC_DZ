#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include"Order.h"

class OrdersSystem {
public:
    
    void createOrder(const Order& order) {
        orders.push_back(order);
    }

    
    void sortOrders() {
        std::sort(orders.begin(), orders.end(), [](const Order& a , const Order& b){return a.getDuration() < b.getDuration();
            });
    }

    
    void executeFirstOrder() {
        if (!orders.empty()) {
            Order firstOrder = orders.front();
            std::cout << "Виконання замовлення №" << firstOrder.getOrderNumber() << "\n";
            orders.erase(orders.begin());
        }
        else {
            std::cout << "Немає замовлень для виконання.\n";
        }
    }

private:
    std::vector<Order> orders;
};