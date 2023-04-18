# Tugas 1 Magang KRAI 2023 OOP
## Deskripsi
Program ini merupakan penerapan OPP. yang mencakup tiga kelas yaitu Company, Investor, dan Stocks.

Kelas Company merepresentasikan perusahaan yang memiliki atribut nama dan alamat, serta memiliki method untuk menambahkan investor dan menghitung jumlah investor yang dimiliki.

Kelas Investor merepresentasikan investor yang memiliki atribut nama, umur, saldo, dan daftar saham yang dimilikinya. Kelas Investor juga memiliki method untuk membeli saham, menjual saham, menambah saldo, dan menarik saldo. Kelas ini juga memiliki method untuk mencetak informasi investor.

Kelas Stocks merepresentasikan saham yang memiliki atribut nama, harga, perusahaan yang menerbitkan, dan jumlah saham yang tersedia. Kelas ini juga memiliki method untuk mengubah harga saham dan mencetak informasi saham.
## Running Command
### Compile
Gunakan args dibawah ini di terminal
>g++ main.cpp src\Company.cpp src\Investor.cpp src\Stock.cpp -o main
### Run Code
Jalankan main.exe di folder main.py
>./main