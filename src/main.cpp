#include <iostream>
#include "SkipList.h"

int main(){
    std::cout << "Hello World! How are you\n";
    // Mrigank says hi

    // SkipList* sl = new SkipList();

    // sl->add(10, 1);
    // sl->display();

    OrderedStructs::SkipList::HeadNode<int> sl;

    sl.insert(10);
    sl.insert(4);
    sl.insert(10);
    sl.insert(56);
    sl.insert(2);

    std::cout<< sl.size() << "\n";

    std::cout<< sl.remove(100) << "\n";

    std::cout<< sl.size() << "\n";

    std::cout<< sl.has(5) << "\n";

    std::cout<< sl.has(10) << "\n";

}