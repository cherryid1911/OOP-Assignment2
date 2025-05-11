#include <iostream>
#include <string> 
#include <vector>
#include "Person.h"  
#include "Wholesaler.h" 
#include "Grower.h" 
#include "Gardener.h" 
#include "Florist.h" 
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

int main() {
    Person* Chris = new Person("Chris");
    Person* Robin = new Person("Robin");
    Gardener* Garett = new Gardener("Garett");
    Grower* Gray = new Grower("Gray", Garett);
    Wholesaler* Watson = new Wholesaler("Watson", Gray);
    FlowerArranger* Flora = new FlowerArranger("Flora");
    DeliveryPerson* Dylan = new DeliveryPerson("Dylan");
    Florist* Fred = new Florist("Fred", Watson, Flora, Dylan);

    Chris->orderFlowers(Fred, Robin, { "Roses", "Violets", "Gladiolus" });

    // Cleanup
    delete Chris;
    delete Robin;
    delete Fred;
    delete Dylan;
    delete Flora;
    delete Watson;
    delete Gray;
    delete Garett;

    return 0;
}
