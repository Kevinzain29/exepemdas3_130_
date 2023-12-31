
#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {
public:
	void input() {
		int r;
		cout << "Masukan jejari : ";
		cin >> r;
		setX(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
};
class Bujursangkar :public bidangDatar {
public:
	void input() {
		int sisi;
		cout << "Masukan sisi : ";
		cin >> sisi;
		setX(sisi);
	}

	float Luas(int sisi) {
		return sisi * sisi;
	}

	float Keliling(int sisi) {
		return 4 * sisi;
	}
};
int main() {
	Lingkaran lingkaran;
	Bujursangkar bujursangkar;

	cout << "Lingkaran dibuat" << endl;
	lingkaran.input();
	cout << "Luas lingkaran = " << lingkaran.Luas(lingkaran.getX()) << endl;
	cout << "Keliling lingkaran = " << lingkaran.Keliling(lingkaran.getX()) << endl;

	cout << endl;

	cout << "Bujursangkar dibuat" << endl;
	bujursangkar.input();
	cout << "Luas bujursangkar = " << bujursangkar.Luas(bujursangkar.getX()) << endl;
	cout << "Keliling bujursangkar = " << bujursangkar.Keliling(bujursangkar.getX()) << endl;

	return 0;
}