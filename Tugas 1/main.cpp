#include <iostream>
using namespace std;

// Include Class
#include "header/Company.hpp"
#include "header/Investor.hpp"

int main(){
    cout << "====== DAFTAR INVESTOR ======" << endl;
    Investor investor1("Goldwin", 17, 100000000);
    Investor investor2("Aldwin", 21, 500000000);
    Investor budi("Budi", 20, 1000000);
    Investor andi("Andi", 19, 2000000);
    Investor caca("Caca", 18, 2500000);
    Investor dedi("Dedi", 27, 3000000);
    Investor robert("Robert", 25, 5200000);
    Investor ronaldo("Ronaldo", 38, 100000000);
    Investor messi("Messi", 35, 15000000);

    budi.printInfo();
    cout << " " << endl;
    andi.printInfo();
    cout << " " << endl;
    caca.printInfo();
    cout << " " << endl;
    dedi.printInfo();
    cout << " " << endl;
    robert.printInfo();
    cout << " " << endl;
    ronaldo.printInfo();
    cout << " " << endl;
    messi.printInfo();
    cout << " " << endl;

    cout << "====== DAFTAR PERUSAHAAN ======" << endl;
    Company PTTLKM("PT Telkom Indonesia Tbk", "Jl. Jendral Gatot Subroto", "081487689900","telkom@gmail.com", "Infrastucture", true);
    Company PTBMRI("PT Bank Mandiri Tbk", "Jl. Jendral Gatot Subroto", "081488789111","mandiri@gmail.com", "Bank", true);
    Company PTANTM("PT Aneka Tambang Tbk", "Jl. TB Simatupang", "081490919111", "antam@gmail.com", "Materials", true);
    Company PTINDF("PT Indofood Sukses Makmur Tbk", "PT Indofood Sukses Makmur Tbk", "081490918822", "indofood@gmail.com", "Consumer Good", true);
    Company PTBBCA("PT Bank Central Asia Tbk", "Jl. M. H. Thamrin", "081490918833", "bca@gmail.com", "Bank", true);
    Company PTUNVR("PT Unilever Indonesia Tbk", "Jl. Soekarno Hatta", "081490918844", "unilever@gmail.com", "Consumer Good", true);
    Company PTCPIN("PT charoen pokphand indonesia Tbk", "Jl. Ancol", "081490918855", "pokphand@gmail.com", "Poultry", true);
    Company PTGIAA("PT Garuda Indonesia Tbk", "Jl. Kebon Sirih", "081490918866", "garuda@gmail.com", "Airlines", true);
    Company PTSIDO("PT Industri Jamu dan Farmasi Sido Muncul Tbk", "Jl. Gajah Mada", "081490918877", "081321349811", "Healthcare", true);

    PTTLKM.printInfo();
    cout << " " << endl;
    PTBMRI.printInfo();
    cout << " " << endl;
    PTANTM.printInfo();
    cout << " " << endl;
    PTINDF.printInfo();
    cout << " " << endl;
    PTBBCA.printInfo();
    cout << " " << endl;
    PTUNVR.printInfo();
    cout << " " << endl;
    PTCPIN.printInfo();
    cout << " " << endl;
    PTGIAA.printInfo();
    cout << " " << endl;
    PTSIDO.printInfo();
    cout << " " << endl;

    cout << "======= DAFTAR STOCK ========" << endl;
    Stock TLKM("TLKM", 4090, PTTLKM, 100);
    Stock BMRI("BMRI", 5175, PTBMRI, 100);
    Stock ANTM("ANTM", 2060, PTANTM, 100);
    Stock INDF("INDF", 6200, PTINDF, 100);
    Stock BBCA("BBCA", 8750, PTBBCA, 100);
    Stock UNVR("UNVR", 4250, PTUNVR, 100);
    Stock CPIN("CPIN", 4750, PTCPIN, 100);
    Stock GIAA("GIAA", 77, PTGIAA, 100);
    Stock SIDO("SIDO", 845, PTSIDO, 100);
    Stock TLKM2("TLKM", 4090, PTTLKM, 300);
    Stock BMRI2("BMRI", 5175, PTBMRI, 200);
    Stock ANTM2("ANTM", 2060, PTANTM, 1000);
    Stock INDF2("INDF", 6200, PTINDF, 500);
    Stock BBCA2("BBCA", 8750, PTBBCA, 400);
    Stock UNVR2("UNVR", 4250, PTUNVR, 400);
    Stock CPIN2("CPIN", 4750, PTCPIN, 800);

    TLKM.printInfo();
    BMRI.printInfo();
    ANTM.printInfo();
    INDF.printInfo();
    BBCA.printInfo();
    UNVR.printInfo();
    CPIN.printInfo();
    GIAA.printInfo();
    SIDO.printInfo();
    TLKM2.printInfo();
    BMRI2.printInfo();
    ANTM2.printInfo();
    INDF2.printInfo();
    BBCA2.printInfo();
    UNVR2.printInfo();
    CPIN2.printInfo();


    cout << "====== PEMBELIAN SAHAM ======" << endl;
    budi.buyStock(TLKM);
    budi.buyStock(BMRI);
    cout << "Investor 1 membeli saham" << endl;
    budi.printInfo();

    andi.buyStock(ANTM);
    andi.buyStock(INDF);
    cout << "Investor 2 membeli saham" << endl;
    andi.printInfo();

    caca.buyStock(BBCA);
    caca.buyStock(UNVR);
    cout << "Investor 3 membeli saham" << endl;
    caca.printInfo();

    dedi.buyStock(CPIN);
    dedi.buyStock(GIAA);
    cout << "Investor 4 membeli saham" << endl;
    dedi.printInfo();

    robert.buyStock(SIDO);
    robert.buyStock(TLKM2);
    cout << "Investor 5 membeli saham" << endl;
    robert.printInfo();

    ronaldo.buyStock(BMRI2);
    ronaldo.buyStock(ANTM2);
    cout << "Investor 6 membeli saham" << endl;
    ronaldo.printInfo();

    messi.buyStock(BBCA2);
    cout << "Investor 7 membeli saham" << endl;
    messi.printInfo();

    cout << "====== SAHAM RIGHT ISSUE ======" << endl;
    TLKM.rightIssue(100);
    TLKM.printInfo();

    cout << "====== SAHAM STOCK SPLIT ======" << endl;
    TLKM.splitStock(2);
    TLKM.printInfo();

    BMRI.splitStock(3);
    BMRI.printInfo();

    cout << "====== SAHAM REVERSE STOCK SPLIT ======" << endl;
    TLKM.reverseSplitStock(2);
    TLKM.printInfo();

    BMRI.reverseSplitStock(3);
    BMRI.printInfo();


    return 0;
}