// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1


#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout<<"Enter any integer : ";
    cin >> a;
    cout << "Integer = " << a << " And the size is : "<< sizeof(a) <<"bytes"<<endl ;
    
    float b;
    cout<<"Enter any decimal number : ";
    cin >> b;
    cout << "Decimal = " << b << " And the size is : "<< sizeof(b) <<"bytes"<<endl ;
    
    string c;
    cout<<"Enter any String : ";
    cin >> c;
    cout << "String = " << c << " And the size is : "<< sizeof(c) <<"bytes"<<endl ;
    
    double d;
    cout << "Enter any double : ";
    cin >> d;
    cout << "Double = " << d << " And the size is : " << sizeof(d) << "bytes" << endl;
    
    char e;
    cout << "Enter any character : ";
    cin >> e;
    cout << "Char =  " << e << " And the size is : " << sizeof(e) << "bytes" << endl;
    
    bool f;
    cout << "Enter boolean : ";
    cin >> f;
    cout << "Bolean = " << f << " And the size is : " << sizeof(f) <<" bytes "<< endl;
    
    return 0;
}

/*
Enter any integer : 67
Integer = 67 And the size is : 4bytes
Enter any decimal number : 23.56
Decimal = 23.56 And the size is : 4bytes
Enter any String : heyyy
String = heyyy And the size is : 32bytes
Enter any double : 34.756
Double = 34.756 And the size is : 8bytes
Enter any character : a
Char =  a And the size is : 1bytes
Enter boolean : 0
Bolean = 0 And the size is : 1 bytes 


=== Code Execution Successful ===
*/
