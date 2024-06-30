#pragma once
#include <iostream>
#include <string>

class Order { 
    std::string date;
    std::string time;
    int duration;
    std::string description;
    double price;
    int orderNumber;

    static int totalOrders;
public:
    
    Order(std::string date, std::string time, int duration, std::string description, double price)
        : date(date), time(time), duration(duration), description(description), price(price) {
        orderNumber = ++totalOrders;
    }

    
    std::string getDate()const { return date; }
    std::string getTime() const { return time; }
    int getDuration()const { return duration; }
    std::string getDescription() const { return description; }
    double getPrice() const { return price; }
    int getOrderNumber()const { return orderNumber; }

  
    static int getTotalOrders() { return totalOrders; }
};

int Order::totalOrders = 0;
