#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int penjualan, pengeluaran;
    float bp_awal, bp_final;
    
    cout    << "Input Prnjualan \n"; 
    cin     >> penjualan;
    cout    << "Input Pengeluaran \n";
    cin     >> pengeluaran;
    
    bp_awal = (penjualan-pengeluaran)*0.1;
    if(penjualan<1000){
        bp_final = bp_awal+((penjualan-pengeluaran)*0.15);
    }
    else if(penjualan>=1000 && penjualan<2000){
        bp_final = bp_awal+((penjualan-pengeluaran)*0.125);
    }
    else if(penjualan>=2000 && penjualan<3000){
        bp_final = bp_awal+((penjualan-pengeluaran)*0.1);
    }
    else if(penjualan>=3000 && penjualan<4000){
        bp_final = bp_awal+((penjualan-pengeluaran)*0.075);
    }
    else if(penjualan>=4000 && penjualan<5000){
        bp_final = bp_awal+((penjualan-pengeluaran)*0.05);
    }
    else{
        bp_final = bp_awal;
    }
    
    cout    << "Hasil :";
    cout    << bp_final;
    
    return 0;
}
