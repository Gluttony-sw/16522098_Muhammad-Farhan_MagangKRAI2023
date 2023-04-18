#include "../header/Stock.hpp"

// ctor
Stock :: Stock(){
    this->code = "Unknown";
    this->price = 0;
    this->quantity = 0;
    this->company = Company();
} 

Stock :: Stock(string name, int price, Company company, int quantity){
    this->code = name;
    this->price = price;
    this->quantity = quantity;
    this->company = Company(company);
}

//cttor
Stock :: Stock(const Stock& other){
    this->code = other.code;
    this->price = other.price;
    this->quantity = other.quantity;
    this->company = other.company;
}

//dtor
Stock :: ~Stock(){}

// assignment operator
Stock& Stock::operator=(const Stock& other) {
    if (this != &other) {
        this->code = other.code;
        this->price = other.price;
        this->quantity = other.quantity;
        this->company = other.company;
    }
    return *this;
}


// getter
string Stock :: getCode(){
    return this->code;
}
int Stock :: getPrice(){
    return this-> price;
}
Company Stock :: getCompany(){
    return this-> company;
}
int Stock :: getQuantity(){
    return this-> quantity;
}

// setter
void Stock :: setPrice(int price){
    this-> price = price;
}
void Stock :: setCompany(Company company){
    this -> company = company;
}
void Stock :: setQuantity(int quantity){
    this -> quantity = quantity;
}

// additional method
void Stock :: printInfo(){
    cout<< "Code: " << this-> code << endl;
    cout<< "Price: " << this-> price << endl;
    cout<< "Quantity: " << this-> quantity << endl;
    cout<< "company: " << company.getName() << endl;
    cout << endl;
}

void Stock :: rightIssue(int nStock){
    this->quantity += nStock;
} // tambah stock dengan harga yang sama sebanyak nstock

void Stock :: splitStock(int multiplier){
    // Memecah stok menjadi nStok dengan rasio 1:multiplier dan mengubah harga stok menjadi price/multiplier
    if (multiplier > 0 && this->quantity > 0) {
        int newQuantity = this->quantity * multiplier;
        int newPrice = this->price / multiplier;
        this->quantity = newQuantity;
        this->price = newPrice;
        }
} 

void Stock::reverseSplitStock(int divisor) {
    // Menggabungkan divisor stok menjadi 1 stok dengan harga price*divisor
    if (divisor > 0 && this->quantity % divisor == 0) {
        int newQuantity = this->quantity / divisor;
        int newPrice = this->price * divisor;
        this->quantity = newQuantity;
        this->price = newPrice;
    }
}