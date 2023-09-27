#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float radius, omega, alpha, v, t, n, T, f;

    cout << "Apa yang diketahui? (Masukkan nomornya saja. Contoh: 1)\n";
    cout << "0. Selesai\n";
    cout << "1. Jari-jari (radius)\n";
    cout << "2. Waktu (t)\n";
    cout << "3. Jumlah putaran (n)\n";
    cout << "4. Kecepatan (v)\n";
    cout << "5. Kecepatan sudut (omega)\n";
    cout << "6. Percepatan sudut (alpha)\n";
    cout << "7. Periode (T)\n";
    cout << "8. Frekuensi (f)\n";

    int diketahui;

    do {
        cout << "Diketahui (0 untuk selesai): ";
        cin >> diketahui;

        switch (diketahui) {
            case 1:
                cout << "Masukkan jari-jari lingkaran (meter): ";
                cin >> radius;
                break;
            case 2:
                cout << "Masukkan waktu (detik): ";
                cin >> t;
                break;
            case 3:
                cout << "Masukkan jumlah putaran (n): ";
                cin >> n;
                break;
            case 4:
                cout << "Masukkan kecepatan linier (meter/detik): ";
                cin >> v;
                break;
            case 5:
                cout << "Masukkan kecepatan sudut (radian/detik): ";
                cin >> omega;
                break;
            case 6:
                cout << "Masukkan percepatan sudut (radian/detik^2): ";
                cin >> alpha;
                break;
            case 7:
            	cout << "Masukkan periode (detik): ";
            	cin >> T;
            	break;
            case 8:
            	cout << "Masukkan frekuensi (Hz): ";
            	cin >> f;
            	break;
            case 0:
                cout << "Terima kasih. Mengakhiri program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (diketahui != 0);

    cout << "Apa yang ingin Anda cari? (Masukkan nomornya saja. Contoh: 1)\n";
    cout << "1. Periode (T)\n";
    cout << "2. Frekuensi (f)\n";
    cout << "3. Frekuensi Sudut (omega dalam rotasi per detik)\n";
    cout << "4. Kecepatan Sudut (omega dalam derajat per detik)\n";
    cout << "5. Rotasi per Menit (rpm)\n";
    cout << "6. Jarak Tempuh (s)\n";
    cout << "7. Kecepatan Linier (v)\n";
    cout << "8. Percepatan Tangensial (at)\n";
    cout << "9. Percepatan Sentripetal (ac)\n";
    int ditanya;
    cout << "Ditanya: ";
    cin >> ditanya;

    if (ditanya == 1) {
    	if (f != 0) {
    		float T = 1 / f;
    		cout << "Periode (T): " << T << " detik\n";
		}
        else if (t != 0 && n != 0) {
        	float T = t / n;
        	cout << "Periode (T): " << T << " detik\n";
		}
		else {
			cout << "Tidak valid.";
		}
    }
    else if (ditanya == 2) {
    	if (T != 0) {
    		float f = 1 / T;
    		cout << "Frekuensi (f): " << f << " Hz\n";
		}
        else if (t != 0 && n != 0) {
        	float f = n / t;
        	cout << "Frekuensi (f): " << f << " Hz\n";
		}
		else {
			cout << "Tidak valid.";
		}
    }
    else if (ditanya == 3) {
        float omega_rotasi = omega / (2 * M_PI);
        cout << "Frekuensi Sudut (omega dalam rotasi per detik): " << omega_rotasi << " rotasi/detik\n";
    }
    else if (ditanya == 4) {
    	if (n != 0 && t != 0) {
    		float omega = (2 * M_PI) * (n / t);
   			cout << "Kecepatan Sudut (omega dalam derajat per detik): " << omega << " radian/detik\n";
		}
    	else if (v != 0 && radius != 0) {
    		float omega = v / radius;
    		cout << "Kecepatan Sudut (omega dalam derajat per detik): " << omega << " radian/detik\n";
		}
		else if (f != 0) {
			float omega = (2 * M_PI) * f;
			cout << "Kecepatan Sudut (omega dalam derajat per detik): " << omega << " radian/detik\n";
		}
		else if (T != 0) {
			float omega = (2 * M_PI) / T;
			cout << "Kecepatan Sudut (omega dalam derajat per detik): " << omega << " radian/detik\n";
		}
		else {
			cout << "Tidak valid.";
		}
    }
    else if (ditanya == 5) {
        float omega_rotasi = omega / (2 * M_PI);
        float rpm = omega_rotasi * 60;
        cout << "Rotasi per Menit (rpm): " << rpm << " rpm\n";
    }
    else if (ditanya == 6) {
        float s = radius * omega;
        cout << "Jarak Tempuh (s): " << s << " meter\n";
    }
    else if (ditanya == 7) {
        float v = radius * omega;
        cout << "Kecepatan Linier (v): " << v << " meter/detik\n";
    }
    else if (ditanya == 8) {
        float at = radius * alpha;
        cout << "Percepatan Tangensial (at): " << at << " meter/detik^2\n";
    }
    else if (ditanya == 9) {
    	if (omega != 0 && radius != 0) {
    		float ac = radius * omega * omega;
        	cout << "Percepatan Sentripetal (ac): " << ac << " meter/detik^2\n";
		}
        else if (v != 0 && radius != 0) {
        	float ac = (v * v) / radius;
        	cout << "Percepatan Sentripetal (ac): " << ac << " meter/detik^2\n";
		}
		else {
			cout << "Tidak valid.";
		}
    }
    else {
        cout << "Pilihan tidak valid.\n";
    }

    return 0;
}

