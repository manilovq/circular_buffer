#define BUFFER_SIZE 8;
#include <iostream>

using namespace std;

void cbuf_add(int * buffer, int * count, int number);
int* cbuf_read(int * buffer);
void cbuf_print(int * buffer);

int main() {

    int cbuf[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int count = 0;
    cbuf_print(cbuf);
    cbuf_add(cbuf, &count, 11);
    cbuf_print(cbuf);
    cbuf_add(cbuf, &count, 22);
    cbuf_print(cbuf);
    cbuf_add(cbuf, &count, 33);
    cbuf_print(cbuf);
    cbuf_add(cbuf, &count, 44);
    cbuf_print(cbuf);
    cbuf_add(cbuf, &count, 55);
    cbuf_print(cbuf);
    cbuf_add(cbuf, &count, 66);
    cbuf_print(cbuf);
    cbuf_add(cbuf, &count, 77);
    cbuf_print(cbuf);
    cbuf_add(cbuf, &count, 88);
    cbuf_print(cbuf);
    cbuf_add(cbuf, &count, 99);
    cbuf_print(cbuf);
}

void cbuf_add(int * buffer, int * count, int number) {
    if (*count > 7) {
        *count = 0;
    }
    //cout << "before *count= " << *count << endl;
    //cout << "number= " << number << endl;
    buffer[*count] = number;
    *count += 1;
    //cout << "after *count=" <<  *count << endl;
}

int* cbuf_read(int * buffer) {
    int *new_buffer = new int[8];
        for(int i = 0; i < 8; i++) {
            new_buffer[i] = buffer[i];
        }
        return new_buffer;
}

void cbuf_print(int * buffer) {
    //cout << "buffer: ";
    for (int i = 0; i < 8; i++) {
        cout << buffer[i] << ' ';
    }
    cout << endl;
}
