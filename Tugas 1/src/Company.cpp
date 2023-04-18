#include "../header/Company.hpp"

// ctor
// default value
Company :: Company(){
    this->name = "Unknown";
    this->address = "Unknown";
    this->phone = "NaN";
    this->email = "Not-Set";
    this->sector = "Unknown";
    this->profitable = false;
}

//user value
Company :: Company(string name, string address, string phone, string email, string sector, bool profitable) {
    this->name = name;
    this->address = address;
    this->phone = phone;
    this->email = email;
    this->sector = sector;
    this->profitable = profitable;
}

// cctor
Company :: Company(const Company& other){
    this->name = other.name;
    this->address = other.address;
    this->phone = other.phone;
    this->email = other.email;
    this->sector = other.sector;
    this->profitable = other.profitable;    
}

// dtor
Company :: ~Company(){}

// assignment operator
Company& Company::operator=(const Company& other) {
    if (this != &other) {
        this->name = other.name;
        this->address = other.address;
        this->phone = other.phone;
        this->email = other.email;
        this->sector = other.sector;
        this->profitable = other.profitable;
    }
    return *this;
}

// getter
string Company :: getName(){
    return this->name;
}
string Company :: getAddress(){
    return this->address;
}
string Company ::getPhone(){
    return this->phone;
}
string Company ::getEmail(){
    return this->email;
}
string Company ::getSector(){
    return this->sector;
}
bool Company :: isProfitable(){
    return this->profitable;
}

// setter
void Company :: setAddress(string address){
    this->address = address;
}
void Company :: setPhone(string phone){
    this->phone = phone;
}
void Company :: setEmail(string email){
    this->email = email;
}
void Company :: setSector(string sector){
    this->sector = sector;
}
void Company :: setProfitable(bool profitable){
    this->profitable = profitable;
}

// additional method
void Company :: printInfo(){
    cout<< "Company Name: " << this-> name << endl;
    cout<< "Address: " << this-> address << endl;
    cout<< "Phone: " << this-> phone << endl;
    cout<< "Email: " << this-> email << endl;
    cout<< "Sector: " << this-> sector << endl;
    cout<< "Profitable: " << this-> profitable << endl;
}