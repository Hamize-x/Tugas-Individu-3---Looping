 #include <iostream>
 using namespace std;

 int main()
  {
    int angka = 0, input, jumlGanjil = 0, jumlGenap = 0;

    cout << "Masukan jumlah data : ";
    cin >> input;
    for(angka = 0; angka < input; angka++)
    {
      if(angka % 2 == 0)
      {
         jumlGenap += angka;
      }
      else
      {
         jumlGanjil += angka;
      }
    }
    cout << "jumlah total bilangan ganjil : " << jumlGanjil << '\n';
    cout << "Jumlah total bilangan genap : " << jumlGenap;
 }