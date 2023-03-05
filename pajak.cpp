#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Pajak
{
private:
    int harga_barang;
    int harga_ongkir;
    int pajakLokal;
    int cukai;
    int pajakInter;

public:
    string namaBrg;
    int hrg;
    int ongkir;

    void setBarang()
    {
        cout << "Masukkan Nama Barang     : ";
        cin >> namaBrg;
    }

    // Memasukkan input harga dari user kedalam private variable
    int setHarga()
    {
        cout << "Masukkan Harga Barang    : ";
        cin >> hrga;
        cout << "Masukkan Ongkos Kirim    : ";
        cin >> ongkir;
        cout << endl;

        harga_barang = hrg;
        harga_ongkir = ongkir;

        return harga_barang;
        return harga_ongkir;
    }

    // Method Hitung Pajak Lokal
    int setPajakLokal()
    {
        pajakLokal = 0.11 * hrg;
        return pajakLokal;
    }

    // Method Hitung Bea Cukai
    int setCukai()
    {
        cukai = 0.06 * (hrg + ongkir);
        return cukai;
    }

    // Method Hitung Pajak Inter
    int setPajakInter()
    {
        pajakInter = 0.10 * hrg;
        return pajakInter;
    }

    // Menampilkan Detail harga dan Pajak Lokal untuk Barang User
    void getPajakLokal()
    {
        cout << "===========================================" << endl;
        cout << "Nama Barang : " << namaBrg << endl;
        cout << "================Pajak Lokal================" << endl;
        cout << "Harga Barang       : Rp. " << harga_barang << endl;
        cout << "Ongos Kirim        : Rp. " << harga_ongkir << endl;
        setPajakLokal();
        cout << "Pajak Lokal (11%)  : Rp. " << pajakLokal << endl;
        cout << "Total              : Rp. " << harga_barang + harga_ongkir + pajakLokal << endl;
        cout << "===========================================" << endl;
        cout << endl;
    }

    // Menampilkan Detail harga, cukai dan Pajak inter untuk barang User
    void getPajakInter()
    {
        cout << "===========================================" << endl;
        cout << "Nama Barang : " << namaBrg << endl;
        cout << "============Pajak Internasional============" << endl;
        cout << "Harga Barang       : Rp. " << harga_barang << endl;
        cout << "Ongos Kirim        : Rp. " << harga_ongkir << endl;
        setCukai();
        cout << "Cukai (6%)         : Rp. " << cukai << endl;
        setPajakInter();
        cout << "Pajak Inter (10%)  : Rp. " << pajakInter << endl;
        cout << "Total              : Rp. " << harga_barang + harga_ongkir + pajakInter + cukai << endl;
        cout << "===========================================" << endl;
        cout << endl;
    }
};

int main()
{

    Pajak barang;
    int pil;

    barang.setBarang();
    barang.setHarga();

menu:
    cout << "Menu: " << endl;
    cout << "1. Pajak Lokal" << endl;
    cout << "2. Pajak Inter" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukkan Pilihan Anda: ";
    cin >> pil;
    cout << endl;

    if (pil == 1)
    {
        barang.getPajakLokal();
        goto menu;
    }
    if (pil == 2)
    {
        barang.getPajakInter();
        goto menu;
    }
    if (pil == 0)
    {
        goto exit;
    }
    else
    {
        cout << "Pilihan yang anda masukkan salah" << endl;
        goto menu;
    }
exit:
    return 0;
}
