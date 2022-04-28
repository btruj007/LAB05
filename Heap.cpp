
#include "Heap.h"
#include <iostream>

using namespace std;


Heap::Heap() {
    numItems = 0;
}

void Heap::enqueue(PrintJob *item) {
//When queuing multiple PrintJobs, program prints only the job at priority 1
    if(numItems < MAX_HEAP_SIZE) {
        arr[numItems] = item;
        trickleDown(numItems);
        numItems++;
    }
}

void Heap::dequeue() {
    if(numItems == 1) {
        arr[0] = 0;
        numItems = 0;
        return;
    }
    if(numItems > 1) {
        arr[0] = arr[numItems-1];
        arr[numItems-1] = 0;
        numItems--;
        trickleDown(0);
    }
}

PrintJob* Heap::highest() {
    if(numItems == 0) {
        return 0;
    }
    return arr[0];
}

void Heap::print() {
    if(numItems == 0) {
        return;
    }
    else {
        cout << "Priority: " << highest()->getPriority();
        cout << ", Job Number: " << highest()->getJobNumber();
        cout << ", Number of Pages: " << highest()->getPages() << endl;
    }
    return;
}

void Heap::trickleDown(int val) {
//    for(unsigned i = 0; i < numItems; i++) {
//        if(arr[val]->getPriority() < arr[i]->getPriority())
//        {
//            PrintJob* temp = arr[val];
//            arr[val] = arr[i];
//            arr[i] = temp;
        }
    }
}
