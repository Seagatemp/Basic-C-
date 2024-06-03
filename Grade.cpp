#include <iostream>

using namespace std;

int main(){
    
    double nilaiTugas,nilaiKuis,nilaiETS,nilaiEAS;
    
    double bobotTugas,bobotKuis,bobotETS,bobotEAS;

        cout << "Masukkan nilai tugas (0-100) : ";
                cin >> nilaiTugas;
            cout << "Masukkan bobot tugas (dalam %) : ";
                cin >> bobotTugas;

        cout << "Masukkan nilai kuis (0-100) : ";
                cin >> nilaiKuis;
            cout<<"Masukkan bobot kuis (dalam %) : ";
                cin >> bobotKuis;

        cout << "Masukkan nilai ETS (0-100) : ";
                cin >> nilaiETS;
            cout<<"Masukkan bobot ETS (dalam %) : ";
                cin >> bobotETS;

        cout << "Masukkan nilai EAS (0-100) : ";
                cin >> nilaiEAS;
            cout<<"Masukkan bobot UAS (dalam %) : ";
                cin >> bobotEAS;


        cout << endl;

    double nilaiAkhir= (nilaiTugas * bobotTugas/ 100)+ (nilaiKuis * bobotKuis/ 100)+
                       (nilaiETS * bobotETS/ 100)+ (nilaiEAS * bobotEAS/ 100);

                if(nilaiAkhir >= 90){
                    cout<<" Grade A "; cout<<endl;
                }
                else if(nilaiAkhir >=80){
                    cout<<" Grade B "; cout<<endl; 
                }
                else if (nilaiAkhir >=70){
                    cout<<" Grade C "; cout<<endl;
                }
                else if (nilaiAkhir >=60){
                    cout<<" Grade D "; cout<<endl;
                }
                else if (nilaiAkhir >=50){
                    cout<<" Grade E "; cout<<endl;
                }
                else{
                    cout<<" Grade F "; cout<<endl;
                }
                cout<<endl;


    return 0;
}
