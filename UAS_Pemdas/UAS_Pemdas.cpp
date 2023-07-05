#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return ; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
	/*lengkapi disini*/
};
class Lingkaran :public bidangDatar { /*lengkapi disini*/
public:
	void input() {
		cout << "Memasukan jari-jari: ";
		int r;
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
	virtual void cekUkuran() {
		float keliling(getX());
		if (keliling > 40) {
			cout << "Ukuran Lingkaran Adalah Besar\n" << endl;
		}
		else if (keliling < 20) {
			cout << "Ukuran Lingkaran Adalah Sedang\n" << endl;
		}
		else if (keliling < 10) {
			cout << "Ukuran Lingkaran Adalah Kecil\n" << endl;
		}
	}
};
class Persegipanjang :public bidangDatar { /*lengkapi disini*/
public:
	void input() {
		cout << "Memasukan Panjang: ";
		int p;
		cin >> p;
		setX(p);

		cout << "Memasukan Lebar: ";
		int l;
		cin >> l;
		setY(l);
	}

	float Luas(int p) {
		return p * getY();
	}

	float Keliling(int p) {
		return (2 * p) + (2 * getY());
	}
	void cekUkuran() {
		float keliling(getY()); 
		if (keliling > 40) {
			cout << "Ukuran Persegipanjang Adalah Besar\n" << endl;
		}
		else if (keliling < 20) {
			cout << "Ukuran Persegipanjang Adalah Sedang\n" << endl;
		}
		else if (keliling < 10) {
			cout << "Ukuran Persegipanjang Adalah Kecil\n" << endl;
		}
	}
};
int main() { /*lengkapi disini*/