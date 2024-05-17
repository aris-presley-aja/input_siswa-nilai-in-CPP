#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Deklarasi Vektor untuk menyimpan Nama dan Nilai
  vector<pair<string, int>> Mahasiswaa;

  // Input data Mahasiswa (Nama dan Nilai)
  int numMahasiswaa;
  cout << "Masukkan Jumlah Mahasiswaa: ";
  cin >> numMahasiswaa;

  for (int i = 0; i < numMahasiswaa; i++) {
    string nama;
    int nilai;

    cout << "Enter Mahasiswa " << i + 1 << "'s nama: ";
    cin >> nama;

    cout << "Enter Mahasiswa " << i + 1 << "'s nilai: ";
    cin >> nilai;

    Mahasiswaa.push_back({nama, nilai});
  }

  // Menampilkan nama dan nilai Mahasiswaa
  // pada cOut \n itu dimaksudkan untuk ke newline character
  cout << "\nMahasiswa nama and nilai:\n";
  for (auto Mahasiswa : Mahasiswaa) {
    cout << Mahasiswa.first << ": " << Mahasiswa.second << endl;
  }

  return 0;
}
