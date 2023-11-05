#include <iostream>
#include <thread>

using namespace std;

void countUp() {
    int i;
    for(i = 0; i <= 20; i++) {
        cout << i << endl;
    }
    cout << endl << endl;
}

void countDown() {
    int i;
    for(i = 20; i >= 0; i--) {
        cout << i << endl;
    }
}

int main() {
    thread countUpThread(countUp);
    countUpThread.join();
    thread countDownThread(countDown);
    countDownThread.join();
    return 0;
}
