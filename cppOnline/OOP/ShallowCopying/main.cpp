#include <iostream>
using namespace std;
class Shallow {
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    Shallow(int d);
    Shallow(const Shallow &source);    
    ~Shallow();
};

Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

void display_shallow(Shallow s) {
    cout << s.get_data_value() << endl;
}
Shallow::~Shallow() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data) {
        cout << "Copy constructor - shallow" << endl;
}

int main() {
    Shallow obj1 {100};
    display_shallow(obj1);
    
    Shallow obj2 {obj1};
    obj2.set_data_value(10);
    
    return 0;
}