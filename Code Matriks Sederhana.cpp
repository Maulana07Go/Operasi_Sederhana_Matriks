#include <iostream>
using namespace std;

int Pembukaan();
int MatBa();
int MatKo();
void Penjumlahan();
void Pengurangan();
void Perkalian();
void Transpose();
void Determinan();


int main()
{
    cout << "Selamat Datang !" << endl << endl;
    int Pilihan;
    bool Continu=true;
    while(Continu==true)
    {
        Pilihan = Pembukaan();
        if(Pilihan==1)
        {
            Penjumlahan();
        }
        else if(Pilihan==2)
        {
            Pengurangan();
        }
        else if(Pilihan==3)
        {
            Perkalian();
        }
        else if(Pilihan==4)
        {
            Transpose();
        }
        else if(Pilihan==5)
        {
            Determinan();
        }
        else if(Pilihan==6)
        {
            Continu=false;
            cout << "Sampai Jumpa !";
        }
    }
    return 0;
}

int Pembukaan()
{
    int Pilihan;
    cout << "Operasi Matriks Otomatis" << endl << "1. Penjumlahan" << endl << "2. Pengurangan" << endl << "3. Perkalian" << endl << "4. Transpose" << endl << "5. Determinan" << endl << "6. Exit" << endl;
    cout << "Pilih operasi Matriks! (masukkan nomor urut) : ";
    cin >> Pilihan;
    return Pilihan;
}

int MatBa()
{
    int JumlahBaris;
    cout << endl << "Masukkan ukuran matriks !" << endl << "banyak baris : ";
    cin >> JumlahBaris;
    return JumlahBaris;
}

int MatKo()
{
    int JumlahKolom;
    cout << "banyak kolom : ";
    cin >> JumlahKolom;
    cout << endl;
    return JumlahKolom;
}

void Penjumlahan()
    {
        int JumlahBaris,JumlahKolom,i,j;
        JumlahBaris=MatBa();
        JumlahKolom=MatKo();
        int z[JumlahBaris][JumlahKolom];
        int y[JumlahBaris][JumlahKolom];
        cout << "Masukkan angka untuk Matriks pertama !" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << "baris " << i+1 << " kolom " << j+1 << " : ";
                cin >> z[i][j];
            }
        }
        cout << "Matriks pertama" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << z[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Masukkan angka untuk Matriks kedua !" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << "baris " << i+1 << " kolom " << j+1 << " : ";
                cin >> y[i][j];
            }
        }
        cout << "Matriks kedua" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << y[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl << "Operasi penjumlahan matriks pertama dan matriks kedua" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << z[i][j] << "+" << y[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "Hasilnya" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << z[i][j]+y[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "==============================================================================================================" << endl;
    }

void Pengurangan()
    {
        int JumlahBaris,JumlahKolom,i,j;
        JumlahBaris=MatBa();
        JumlahKolom=MatKo();
        int z[JumlahBaris][JumlahKolom];
        int y[JumlahBaris][JumlahKolom];
        cout << "Masukkan angka untuk Matriks pertama !" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << "baris " << i+1 << " kolom " << j+1 << " : ";
                cin >> z[i][j];
            }
        }
        cout << "Matriks pertama" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << z[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Masukkan angka untuk Matriks kedua !" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << "baris " << i+1 << " kolom " << j+1 << " : ";
                cin >> y[i][j];
            }
        }
        cout << "Matriks kedua" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << y[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl << "Operasi pengurangan matriks pertama dan matriks kedua" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << z[i][j] << "-" << y[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "Hasilnya" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << z[i][j]-y[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "==============================================================================================================" << endl;
    }

void Perkalian()
    {
      int JumlahBarisPertama,JumlahKolomPertama,JumlahBarisKedua,JumlahKolomKedua,i,j,k,l;
        cout << endl << "Masukkan ukuran matriks pertama !" << endl << "banyak baris : ";
        cin >> JumlahBarisPertama;
        cout << "banyak kolom : ";
        cin >> JumlahKolomPertama;
        cout << endl;
        int z[JumlahBarisPertama][JumlahKolomPertama];
        cout << endl << "Masukkan ukuran matriks kedua !" << endl << "banyak baris : ";
        cin >> JumlahBarisKedua;
        cout << "banyak kolom : ";
        cin >> JumlahKolomKedua;
        cout << endl;
        int y[JumlahBarisKedua][JumlahKolomKedua];
        if(JumlahKolomPertama==JumlahBarisKedua)
        {
            cout << "Masukkan angka untuk Matriks pertama !" << endl;
            for(i=0;i<JumlahBarisPertama;i++)
            {
                for(j=0;j<JumlahKolomPertama;j++)
                {
                    cout << "baris " << i+1 << " kolom " << j+1 << " : ";
                    cin >> z[i][j];
                }
            }
            cout << "Matriks pertama" << endl;
            for(i=0;i<JumlahBarisPertama;i++)
            {
                for(j=0;j<JumlahKolomPertama;j++)
                {
                    cout << z[i][j] << "\t";
                }
                cout << endl;
            }
            cout << endl;
            cout << "Masukkan angka untuk Matriks kedua !" << endl;
            for(i=0;i<JumlahBarisKedua;i++)
            {
                for(j=0;j<JumlahKolomKedua;j++)
                {
                    cout << "baris " << i+1 << " kolom " << j+1 << " : ";
                    cin >> y[i][j];
                }
            }
            cout << "Matriks kedua" << endl;
            for(i=0;i<JumlahBarisKedua;i++)
            {
                for(j=0;j<JumlahKolomKedua;j++)
                {
                    cout << y[i][j] << "\t";
                }
                cout << endl;
            }
            cout << endl << "Operasi perkalian matriks pertama dan matriks kedua" << endl;
            for(i=0;i<JumlahBarisPertama;i++)
            {
                for(j=0;j<JumlahKolomKedua;j++)
                {
                    for(k=0;k<JumlahKolomPertama;k++)
                    {
                        for(l=0;l<JumlahBarisKedua;l++)
                        {
                            cout << z[i][k] << "." << y[l][j];
                            k++;
                            if(k<JumlahKolomPertama)
                            {
                                cout << "+";
                            }
                            else
                            {
                                cout << "\t";
                            }
                        }
                    }
                }
                cout << endl;
            }
            cout << endl << "Hasilnya" << endl;
            for(i=0;i<JumlahBarisPertama;i++)
            {
                for(j=0;j<JumlahKolomKedua;j++)
                {
                    for(k=0;k<JumlahKolomPertama;k++)
                    {
                        for(l=0;l<JumlahBarisKedua;l++)
                        {
                            cout << (z[i][k]*y[l][j])+(z[i][k+1]*y[l+1][j]) << "\t";
                            l++;
                            k++;
                        }
                    }
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Maaf Error!, tolong masukkan angka yang sama untuk banyak kolom matriks pertama dengan banyak baris matriks kedua." << endl;
        }
        cout << "==============================================================================================================" << endl;
    }

void Transpose()
    {
        int JumlahBaris,JumlahKolom,i,j;
        JumlahBaris=MatBa();
        JumlahKolom=MatKo();
        int z[JumlahBaris][JumlahKolom];
        cout << "Masukkan angka untuk matriks !" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << "baris " << i+1 << " kolom " << j+1 << " : ";
                cin >> z[i][j];
            }
        }
        cout << endl;
        cout << "Matriks" << endl;
        for(i=0;i<JumlahBaris;i++)
        {
            for(j=0;j<JumlahKolom;j++)
            {
                cout << z[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "Transpose matriks" << endl;
        for(j=0;j<JumlahKolom;j++)
        {
            for(i=0;i<JumlahBaris;i++)
            {
                cout << z[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "==============================================================================================================" << endl;
    }

void Determinan()
{
    int JumlahBaris,JumlahKolom,i,j;
    JumlahBaris=MatBa();
    JumlahKolom=JumlahBaris;
    cout << "Banyak Kolom akan disamakan dengan banyak baris." << endl;
    int z[JumlahBaris][JumlahKolom];
    cout << "Masukkan angka untuk matriks !" << endl;
    for(i=0;i<JumlahBaris;i++)
    {
        for(j=0;j<JumlahKolom;j++)
        {
            cout << "baris " << i+1 << " kolom " << j+1 << " : ";
            cin >> z[i][j];
        }
    }
    cout << endl;
    cout << "Matriks" << endl;
    for(i=0;i<JumlahBaris;i++)
    {
        for(j=0;j<JumlahKolom;j++)
        {
            cout << z[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "Determinan matriks" << endl << "Determinan = ";
    cout << "(";
    for(int k=0;k<JumlahBaris;k++)
    {
        j=k-1;
        for(i=0;i<JumlahBaris;i++)
        {
            j++;
            cout << z[i][j];
            if(i<JumlahBaris-1)
            {
                cout << ".";
            }
            else if(i>=JumlahBaris-1 and k<JumlahBaris-1)
            {
                if(JumlahBaris==2)
                {
                    cout << ")-(";
                }
                else if(JumlahBaris==3)
                {
                    cout << "+";
                }
            }
            if(j>=JumlahBaris-1)
            {
                j=j-JumlahBaris;
            }
        }
    }
    cout << ")";
    if(JumlahBaris==3)
    {
        j=JumlahBaris;
        cout << "-" << "(";
        for(int k=0;k<JumlahBaris;k++)
        {
            if(k>0)
            {
                j=k;
            }
            for(i=0;i<JumlahBaris;i++)
            {
                j--;
                cout << z[i][j];
                if(i<JumlahBaris-1)
                {
                    cout << ".";
                }
                else if(i>=JumlahBaris-1 and k<JumlahBaris-1)
                {
                    cout << "+";
                }
                if(j<=0)
                {
                    j=j+JumlahBaris;
                }
            }
        }
        cout << ")";
    }
    cout << endl << "Determinan = ";
    if(JumlahBaris==2)
    {
        cout << z[0][0]*z[1][1] << "-" << z[0][1]*z[1][0];
    }
    else if(JumlahBaris==3)
    {
        cout << "(" << z[0][0]*z[1][1]*z[2][2] << "+" << z[0][1]*z[1][2]*z[2][0] << "+" << z[0][2]*z[1][0]*z[2][1] << ")" << "-";
        cout << "(" << z[0][2]*z[1][1]*z[2][0] << "+" << z[0][0]*z[1][2]*z[2][1] << "+" << z[0][1]*z[1][0]*z[2][2] << ")";
    }
    cout << endl << "Determinan = ";
    if(JumlahBaris==2)
    {
        cout << (z[0][0]*z[1][1])-(z[0][1]*z[1][0]);
    }
    else if(JumlahBaris==3)
    {
        cout << (z[0][0]*z[1][1]*z[2][2])+(z[0][1]*z[1][2]*z[2][0])+(z[0][2]*z[1][0]*z[2][1]) << "-" << (z[0][2]*z[1][1]*z[2][0])+(z[0][0]*z[1][2]*z[2][1])+(z[0][1]*z[1][0]*z[2][2]) << endl;
        cout << "Determinan = " << ((z[0][0]*z[1][1]*z[2][2])+(z[0][1]*z[1][2]*z[2][0])+(z[0][2]*z[1][0]*z[2][1]))-((z[0][2]*z[1][1]*z[2][0])+(z[0][0]*z[1][2]*z[2][1])+(z[0][1]*z[1][0]*z[2][2]));
    }
    cout << endl << "==============================================================================================================" << endl;
}
