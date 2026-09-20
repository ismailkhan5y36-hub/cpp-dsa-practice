#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double price1;
    int qty1;
    double price2;
    int qty2;
    double total;
    char membership='A';
//   hello this is ismail
    cout<<"membership: ";
    cin>>membership;
    cout<<"item 1 price: ";
    cin>>price1;
    cout<<"item 1 qty: ";
    cin>>qty1;
    cout<<"item 2 price: ";
    cin>>price2;
	cout<<"item 2 qty: ";
    cin>>qty2;
    total = (price1 * qty1) + (price2 * qty2);
    cout<<"total bill= "<<"$"<< total<<endl;
    int total_item;
    total_item = qty1 + qty2;
    cout<<"total item= "<<total_item<<endl;
    double average_price;
    average_price = total/total_item; 
    cout<<"avarage price: "<<average_price<<endl;
   
   
    return 0;
}

