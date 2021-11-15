#include "vector.hpp"
#include<vector>
using namespace std;
 
int main()
{
    MyVector mv;
    size_t n;
    cout << "Unesite capacity:" << endl;
    cin >> mv.capacity;
    mv.vector_new(mv.capacity);
    cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
    mv.size = 0;
    while (cin >> n) 
        mv.vector_push_back(n);
    cout << "-----------------" << endl;
    mv.print_vector();
    cout << "Unesite prvi element " << mv.vector_front() << endl;
    cout << "Unesite zadnji element " << mv.vector_back() << endl;
    cout << "Ukloni zadnji element:" << endl;
    mv.vector_pop_back();
    mv.print_vector();
    cout << "size " << mv.vector_size() << endl;
    cout << "capacity " << mv.vector_capacity() << endl;
    mv.vector_delete();
    system("pause");
}
