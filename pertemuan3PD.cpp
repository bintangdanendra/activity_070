#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status (double c){
    if (c >= 60)
    return "lulus";
    else
    return "gagal";
}

string status2 (double r, double n){
    if (r >= 60 && n >= 70)
    return "lulus";
    else
    return "gagal";
}

string status3 (double r, double n, double m){
    if (r >= 60 || n >= 70 && m >= 60)
    return "lulus";
    else
    return "gagal";
}

int main(){
    double nilM,nilB;

    cout << "Masukan Nilai Matematika = ";
    cin >> nilM;
    cout << "Masukan Nilai Bahasa = ";
    cin >> nilB;

    //rata = (nilM+nilB)/2;
    //rata = rerata(nilM,nilB);
    //st = status(rerata(nilM,nilB));
    // if (rata >= 60)
    // status = "lulus";
    // else
    // status = "gagal";

    //cout<< "Status Kelulusan : " << st;
    cout<< "Status Kelulusan : " << status(rerata(nilM,nilB));
    cout<< "\nStatus Kelulusan ke 2 : " << status2(rerata(nilM,nilB) ,nilM);
    cout<< "\nStatus Kelulusan ke 3 : " << status3(rerata(nilM,nilB) ,nilM,nilB);
    return 0;
}