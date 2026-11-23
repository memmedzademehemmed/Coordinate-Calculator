#include <bits/stdc++.h>
using namespace std;

double Asan(const double &birinciX, const double &ikinciX, const double &birinciY, const double &ikinciY, const double &birinciZ, const double &ikinciZ, int &secim) {

    if(secim == 2) {

        return sqrt(pow(ikinciX - birinciX, 2) + pow(ikinciY - birinciY, 2));

    }

    else {

        return sqrt(pow(ikinciX - birinciX, 2) + pow(ikinciY - birinciY, 2) +pow(ikinciZ - birinciZ, 2));

    }
}

void Orta(const double &birinciX, const double &ikinciX, const double &birinciY, const double &ikinciY, const double &birinciZ, const double &ikinciZ, int &secim) {

    if(secim == 2) {

        cout << "Orta noqte: " << endl << endl;

        cout << "(" << (birinciX + ikinciX) / 2 << ")," << "(" << (birinciY + ikinciY) / 2 << ")" << endl << endl;

        cout << "Parcanin Uzunlugu: " << endl << endl;

        cout << sqrt(pow(ikinciX - birinciX, 2) + pow(ikinciY - birinciY, 2)) << endl;
    }

    else if(secim == 3) {

        cout << "Orta noqte: ";

        cout << "(" << (birinciX + ikinciX) / 2 << ")," << "(" << (birinciY + ikinciY) / 2 << ")," << "(" << (birinciZ + ikinciZ) / 2 << ")";

        cout << endl << endl;

        cout << "Parcanin Uzunlugu: ";

        cout << sqrt(pow(ikinciX - birinciX, 2) + pow(ikinciY - birinciY, 2) + pow(ikinciZ - birinciZ, 2)) << endl;
    }
}

void Cetin(const double (&points)[100][3], const int &noqte, const int &secim){

    if(noqte < 2) {

        cout<<endl;

        cout << "En yaxin iki noqteni tapmaq olmur! (Minimum 2-noqte secmelisis)"<<endl;

        return;
    }

    double minMesafe = 1e15;

    int birinci = 0;
    int ikinci = 0;

    for(int i = 0; i < noqte; ++i) {

        for(int j = i + 1; j < noqte; ++j){

            double mesafe;

            if(secim == 2){

                mesafe = sqrt(pow(points[j][0] - points[i][0], 2) + pow(points[j][1] - points[i][1], 2));

            }

            else {

                mesafe = sqrt(pow(points[j][0] - points[i][0], 2) + pow(points[j][1] - points[i][1], 2) + pow(points[j][2] - points[i][2], 2));
            }

            if(mesafe < minMesafe) {

                minMesafe = mesafe;

                birinci = i;
                ikinci = j;

            }
        }
    }

    cout << endl << "En yaxin noqte cütü:" <<endl<<endl;

    cout << "Birinci noqte: (";

    for(int k = 0; k < secim; ++k) {

        cout << points[birinci][k];

        if(k < secim - 1){

            cout << ", ";

        } 

    }

    cout << ")"<<endl;

    cout << "Ikinci noqte: (";

    for(int k = 0; k < secim; ++k){

        cout << points[ikinci][k];

        if(k < secim - 1) cout << ", ";

    }

    cout << ")" << endl;

    cout << endl << "Minimum mesafe: "<<minMesafe<<endl;

}

int main() {

    cout << "--------------------------------------------------" <<endl<<endl;

    cout<<"Salam eziz Mujan mellimimiz ve eziz qrup yoldaslarimiz umid edirikki layihemizi beyenersis"<<endl<<endl;

    cout << "1. Asan Funksiya" << endl << endl;

    double x1, x2, y1, y2, z1 = 0, z2 = 0;
    int secim;

    cout << "Xahis edirik qiymetleri daxil edin" << endl << endl;

    cout << "x1: ";
    cin >> x1;

    cout << "x2: ";
    cin >> x2;

    cout << "y1: ";
    cin >> y1;

    cout << "y2: ";
    cin >> y2;

    cout << endl;

    cout << "Nece olculu fezada islemek isteyirsiniz? (2D yoxsa 3D): ";
    cin >> secim;

    cout << endl;

    if(secim == 2 or secim == 3) {

        if(secim == 3) {

            cout << "z1: ";
            cin >> z1;

            cout << "z2: ";
            cin >> z2;
        }

        cout << endl;

        cout << "Iki noqte arasindaki mesafe: "
             << Asan(x1, x2, y1, y2, z1, z2, secim) << endl << endl;
    }

    else {

        cout << "Yalnis Feza Secdiniz!";
    }

    cout << endl << endl;

    cout<< "--------------------------------------------------"<<endl<<endl;

    cout << "2. Orta Funksiya" << endl << endl;

    double X1, X2, Y1, Y2, Z1 = 0, Z2 = 0;
    int secim2;

    cout<<"Xahis edirik qiymetleri daxil edin: "<<endl<<endl;

    cout<<"x1: ";
    cin>>X1;

    cout<<"x2: ";
    cin>>X2;

    cout<<"y1: ";
    cin>>Y1;

    cout<< "y2: ";
    cin>>Y2;

    cout<<endl;

    cout<<"Nece olculu fezada islemek isteyirsiniz? (2D yoxsa 3D): ";
    cin>>secim2;

    cout<<endl;

    if(secim2 == 2 or secim2 == 3) {

        if(secim2 == 3){

            cout << "z1: ";
            cin >> Z1;

            cout << "z2: ";
            cin >> Z2;

        }

        cout <<endl;

        Orta(X1, X2, Y1, Y2, Z1, Z2, secim2);
    }

    else {

        cout << "Yalnis Feza Secdiniz!!!";
    }

    cout<<endl<<endl;

    cout<< "--------------------------------------------------" <<endl<<endl;

    cout << "3. Cetin Funksiya" <<endl<<endl;

    int noqte;
    int secim3;

    cout << "Nece olculu fezada islemek isteyirsiniz? (2D yoxsa 3D): ";
    cin >> secim3;

    cout<<endl;

    if(secim3 == 2 or secim3 == 3) {

        cout << "Nece noqte daxil edeceksiniz? ";
        cin >> noqte;

        if(noqte > 0 and noqte <= 100) {

            double points[100][3] = {};

            for(int i = 0; i < noqte; ++i) {

                cout << endl << i + 1 << "-ci noqtenin koordinatlari:" << endl<<endl;

                cout << "X: ";
                cin >> points[i][0];

                cout << "Y: ";
                cin >> points[i][1];

                if(secim3 == 3) {

                    cout << "Z: ";
                    cin >> points[i][2];

                }
            }

            Cetin(points, noqte, secim3);
        }

        else {

            cout << "Noqte sayi duzgun deyil!";
        }
    }

    else {

        cout << "Yalnis Feza Secdiniz!";
    }

    cout<<endl <<endl;


    cout<<"Diqqetiniz ucun tesekkurler"<<endl<<endl;

    cout<<"Mujgan mellim INSALLAH 10 bal yazar "<<endl<<endl;



    cout<<"--------------------------------------------------"<<endl;



    return 0;




}
