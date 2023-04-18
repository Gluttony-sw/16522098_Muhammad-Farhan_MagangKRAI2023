#include "../header/Investor.hpp"

// Deklarasi variabel
int Investor::nInvestor = 0;

//ctor
Investor :: Investor(){
        this -> id      = nInvestor;
        this -> name    = "Unknown";
        this -> age     = 0;
        this -> balance = 0;
        this -> stocks  = new Stock[10];
        this -> nStock  = 0;
        nInvestor++;
}

Investor :: Investor(string name, int age, int balance){
        this -> id      = nInvestor;    
        this -> name    = name;
        this -> age     = age;
        this -> balance = balance;
        stocks  = new Stock[10];
        this -> nStock  = 0;
        nInvestor++;
}

// cctor
Investor :: Investor(const Investor& other){
        this -> id      = other.id;    
        this -> name    = other.name;
        this -> age     = other.age;
        this -> balance = other.balance;
        this -> stocks  = other.stocks;
        this -> nStock  = other.nStock;
        nInvestor++;
}

// dtor
Investor :: ~Investor(){}

// assignment operator
Investor& Investor::operator=(const Investor& other) {
    if (this != &other) {
        this->id = other.id;
        this->name = other.name;
        this->age = other.age;
        this->balance = other.balance;
        this->nStock = other.nStock;
        this->stocks = new Stock[10];
        for (int i = 0; i < nStock; i++) {
            this->stocks[i] = other.stocks[i];
        }
    }
    return *this;
}

// getter
string Investor :: getName(){
    return this->name;
}
int Investor :: getAge(){
    return this->age;
}
int Investor :: getBalance(){
    return this-> balance;
}
Stock Investor :: getStock(int i){
    return this-> stocks[i];
} // Mengembalikan stock ke-i
Stock* Investor :: getStocks(){
    return this->stocks;
} // Mengembalikan array of stock
int Investor :: getNStock(){
    return this->nStock;
}

// setter
void Investor :: setName(string name){
    this->name = name;
}
void Investor :: setAge(int age){
    this->age = age;
}

// Fungsi Tambahan
void Investor :: printInfo(){
    cout<< "Name: " << this-> name << endl;
    cout<< "Age: " << this-> age << endl;
    cout<< "Balance: " << this-> balance << endl;
    // print stock
    if (this->nStock == 0) {
        cout << "Stocks:" << endl;
    } else {
        cout << "Stocks: " << endl;
        for (int i = 0; i < this->nStock; i++) {
            cout << this->stocks[i].getCode() << " " << this->stocks[i].getQuantity() << endl;
        }
        cout << endl;
    }
}


void Investor::buyStock(Stock stock) {
    if (balance < stock.getPrice() * stock.getQuantity()) {
        // investor tidak memiliki saldo yang cukup
        cout << "Insufficient balance" << endl;
        return;
    }

    // mencari apakah investor sudah memiliki stock dengan kode yang sama
    bool found = false;
    for (int i = 0; i < nStock; i++) {
        if (stocks[i].getCode() == stock.getCode()) {
            // investor sudah memiliki stock dengan kode yang sama, update quantity
            stocks[i].setQuantity(stocks[i].getQuantity() + stock.getQuantity());
            found = true;
            break;
        }
    }

    if (!found) {
        if (nStock == 10) {
            // array of stock investor sudah penuh
            cout << "Batas pembelian sudah mencapai batas" << endl;
            return;
        }

        stocks[nStock] = stock;
        nStock++;
    }

    balance -= stock.getPrice() * stock.getQuantity();
}

void Investor::sellStock(string code) {
    bool found = false;
    int i;
    for (i = 0; i < nStock; i++) {
        if (stocks[i].getCode() == code) {
            // investor memiliki stock dengan kode yang sama
            found = true;
            break;
        }
    }

    if (!found) {
        // stock tidak ditemukan
        cout << "Stock not found" << endl;
        return;
    }

    // menjual stock dan menambahkan saldo
    balance += stocks[i].getPrice() * stocks[i].getQuantity();

    // menghapus stock dari array of stock investor
    for (int j = i; j < nStock - 1; j++) {
        stocks[j] = stocks[j + 1];
    }

    nStock--;
}

void Investor::topUpBalance(int amount) {
    if (amount < 0) {
        // amount tidak valid
        cout << "Invalid amount" << endl;
        return;
    }

    balance += amount;
    cout << "Successfully topped up " << amount << " berry" << endl;
}


void Investor::withdrawBalance(int amount) {
    if (amount < 0) {
        // amount tidak valid
        cout << "Invalid amount" << endl;
        return;
    } else if (amount > balance) {
        // tidak cukup saldo
        cout << "Insufficient balance" << endl;
        return;
    }

    balance -= amount;
    cout << "Successfully withdraw " << amount << " berry" << endl;
}
