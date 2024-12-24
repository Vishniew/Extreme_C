#include <stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Person {
    char name[50];
    int age;
    struct Address address; 
};

int main() {
    struct Person person = {"Vishniew", 13, {"Hyderabad", 500074}};
    
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("City: %s\n",person.address.city);
    printf("Pincode: %d\n", person.address.pincode);

    return 0;
}

