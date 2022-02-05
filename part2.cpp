#include "dsexceptions.h"
#include "List.h"
#include "Vector2.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <typeinfo>
using namespace std;

double elapsed_time( clock_t start, clock_t end){
   // returns elapsed time in milliseconds
   return (end - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main() {

    clock_t start, end;
    const int N = 80000;
    const char unit[14] = "milliseconds";
    bool bl;
    int i;
    const char * type = typeid(bl).name();

    Vector<bool> v;
    List<bool> l;
    
    // Time taken for Vector Insertion
    start = clock();
    for (int i = 0; i < N; i++) {
        v.push_front(i);
    }
    end = clock();
    double v_insert = elapsed_time(start, end);

    // Time taken for Vector Visiting
    start = clock();
    v.visitAll();
    end = clock();
    double v_visit = elapsed_time(start, end);  

    // Time taken for List Insertion
    start = clock();
    for (int i = 0; i < N; i++) {
        l.push_front(i);
    }
    end = clock();
    double l_insert = elapsed_time(start, end);

    // Time taken for List Visiting
    start = clock();
    l.visitAll();
    end = clock();
    double l_visit = elapsed_time(start, end);

    cout << "Huy Nguyen" << endl;
    cout << "301405437" << endl;
    cout << "hnn3" << endl;
    cout << "Program: [part2]" << endl;
    cout << "Type of elements: " << type << endl;
    cout << "Number of elements: " << l.size() << endl;
    cout << "Time units: " << unit << endl;
    cout << "Time for Vector Insertion: " << v_insert << endl;
    cout << "Time for List Insertion: " << l_insert << endl;
    cout << "Time for Vector Visiting: " << v_visit << endl;
    cout << "Time for List Visiting: " << l_visit << endl;

}
