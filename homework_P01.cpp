#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 10;
    int *p1 = nullptr;
    int *p2 = nullptr;

    // jawaban no 1 A (value, point,alamat)
    // berisi lamat memori dan value yg ditunjuk y = 10

    cout <<"Nilai dari x adalah : "<< x << endl;
    cout <<"lokasi dari x adalah : "<< &x << endl;
    cout <<"Nilai dari y adalah : "<< y << endl;
    cout <<"lokasi dari y adalah : "<< &y << endl;
    cout <<"--------------------------------------"<< endl;

    p1 = &y;
    cout <<"Jawaban 1 A"<<endl;
    cout <<"Value dari p1 adalah : "<< p1 << endl;
    // value dari p1 adalah alamat y
    cout <<"Nilai dari yg dituju p1 adalah : "<< *p1 << endl;
    // harusnya 10, karena yg dituju adalah y
    cout <<"alamat memori dari p1 adalah : "<< &p1 << endl;
    cout <<"--------------------------------------"<< endl;
   
    // jawaban no 1 B
    p2 = &x;
    cout <<"Jawaban 1 B"<<endl;
    cout <<"Value dari p2 adalah : "<< p2 << endl;
    cout <<"Nilai dari yg dituju p2 adalah : "<< *p2 << endl;
    cout <<"alamat memori p2 adalah : "<< &p2 << endl;
    cout <<"--------------------------------------"<< endl;

    // jawaban no 1 C
    *p1 = *p2;
    cout <<"Jawaban 1 C"<<endl;
    cout <<"Value dari p1 adalah : "<< *p1 << endl;
    cout <<"Nilai dari yg dituju p1 adalah : "<< *p1 << endl;
    cout <<"Alamat memori dari p1 adalah : "<< &*p1 << endl;
    cout <<"nilai dari y adalah : "<< y << endl;
    cout <<"--------------------------------------"<< endl;

    //jawaban no 2 A
    p2 = &x;
    cout <<"Jawaban 2 A"<<endl;
    cout <<"Value dari p2 adalah : "<< p2 << endl;
    // berisi alamat memori x
    cout <<"Nilai dari yg dituju p2 adalah : "<< *p2 << endl;
    // isinya 5, value x
    cout <<"Alamat memori dari p2 adalah : "<< p2 << endl;
    // alamatnya dia sendiri
    cout <<"--------------------------------------"<< endl;

    //jawaban no 2 B
    *p2 = 7;
    cout <<"Jawaban 2 B"<<endl;
    cout <<"Value dari p2 adalah : "<< *p2 << endl;
    cout <<"Nilai dari yg dituju p2 adalah : "<< *p2 << endl;
    cout <<"Nilai dari x adalah : "<< x << endl;
    cout <<"Alamat memori dari p2 adalah : "<< &*p2 << endl;
    cout <<"--------------------------------------"<< endl;

    // jawaban no 2 C
    p1 = p2;
    cout <<"Jawaban no 2 C"<<endl;
    cout <<"value dari p1 adalah : "<< p1 << endl;
    // berisi alamat x
    cout <<"Nilai dari yg dituju dari p1 adalah : "<< *p1 << endl;
    // isinya 5, karena p1 berisi alamat memo x
    cout <<"alamat memori dari p1 adalah : "<< &p1 << endl;
    // alamat dia sendiri
    cout <<"--------------------------------------"<< endl;

    // jawaban no 3 a
    p1 = &x;
    cout <<"Jawaban no 3 A"<<endl;
    cout <<"Value dari p1 adalah : "<< p1 << endl;
    cout <<"Nilai value yg dituju dari p1 adalah : "<< *p1 << endl;
    cout <<"Alamat memori dari p1 adalah : "<< &p1 << endl;
    cout <<"--------------------------------------"<< endl;
    // jawaban no 3 b
    *p1 = y;
    cout <<"Jawaban no 3 B"<<endl;
    cout <<"Nilai dari p1 adalah : "<< *p1 << endl;
    // Harusnya berisikan 
    cout <<"alamat memori dari p1 adalah : "<< &*p1 << endl;
    cout <<"Value dari nilai yg dituju adalah : "<< *p1 << endl;
    cout <<"--------------------------------------"<< endl;


    // Jawaban dari tugas ke 2
    
    

}