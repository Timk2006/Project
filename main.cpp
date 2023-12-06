//
//  main.cpp
//  Test
//
//  Created by Tim Koops on 14/11/2023.
//
// test applicatie gemaakt door Tim Koops

#include <iostream>
#include <array>
#include <numeric>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

void opgave1() {
    cout << "c"  << endl << "+"<< endl << "+" << endl;
}

void opgave2() {
    array<int, 5> students; // aantal broodjes per student

    for(auto &s : students) {
        std::cout << "Hoeveel broodjes neem je mee naar school: ";
        std::cin >> s;
    }

    auto total = accumulate(students.begin(), students.end(), 0, std::plus<int>());
    cout << "Er zijn in totaal " << total << " aantal broodjes meegenomen naar school" << endl;
}

void opgave3() {
    array<double, 5> cijfers; // cijfer per student
  
    for(auto &antwoord : cijfers) {
        std::cout << "Wat is je cijfer van de laatste toets: ";
        std::cin >> antwoord;
    }

    auto totalCijfer = accumulate(cijfers.begin(), cijfers.end(), 0.0, std::plus<double>()) / cijfers.size();
    cout << "Het gemiddelde cijfer is: " << totalCijfer << endl;
}

void opgave5() {
    double saldo = 0.0;
    double bedrag = 0.0;
    
    cout << "Welkom bij uw rekening van de Tim bank" << endl;
    cout << "Wat is saldo: " << endl;
    cin >> saldo;
    for(int c; (c = getchar()) != 'x';) {
        cout << "Wat wilt u doen. Druk op [s]torten, [o]pnemen of e[x]it" << endl;
        cout << "Uw huidige saldo is: " << saldo << " euro" << endl;
        switch (c) {
            case 's':
                cout << "Hoeveel wilt u storten: " << endl;
                cin >> bedrag;
                saldo += bedrag;
                break;
            case 'o':
                cout << "Hoeveel wilt u opnemen: " << endl;
                cin >> bedrag;
                saldo -= bedrag;
                break;
            default:
                break;
        }
        
    }
        
}

    
    void opgave7()  {
    int a =0;
    int b =0;
    cin >> a;
    cin >> b;
    if(a>b)
        
    {
        cout << "a is groter";
    } else if (b>a){
        cout <<"b is groter";
    }

    }

void opgave8() {
    int droppot = 20;
    int u =0;
    do{
        
        cin >> u;
        if(droppot-u>=0){
            droppot -= u;
            
            }
        cout << droppot;
    }while(droppot>0);
    
    cout << droppot;
    
}

void opgave9() {
    
    int aantalLeerlingen, i;
    float num[100], sum = 0.0, average;
    
    cout << "Geef aantal leerlingen op: ";
    cin >> aantalLeerlingen;
    cout << "\n\n";
    
    if (aantalLeerlingen > 0 && aantalLeerlingen < 100) {
        for (i = 0; i < aantalLeerlingen; i++) {
            cout << i + 1 << "Geef cijfer van leerling op: ";
            cin >> num[i];
            sum += num[i];
        }
        
        average = sum / aantalLeerlingen;
        cout << "\nGemiddelde cijfer is: " << average;
    } else {
        cout << "Ongeldig aantal leerlingen opgegeven";
    }
}

void opgave9papa() {
    vector<float> cijfers = {};
    float cijfer;
    
    cin >> cijfer;
    while(!isnan(cijfer)) {
        cout << cijfer;
        cin >> cijfer;
        
    }
}

void opgave11() {
    int keuze;
    cout << "Welkom bij tims koffie automaat!"<<endl;
    cout << " 1. koffie" <<endl;
    cout <<" 2. cappucino" <<endl;
    cout <<" 3. chocolade melk" <<endl;
    cout <<" 4. exspresso" <<endl;
    cout <<" 5. latte caramel" <<endl;
    cout <<" 6. ijskoffie" <<endl;
    
    cout << "kies een optie (1-6): ";
    cin >> keuze;
    
    switch(keuze) {
        case 1:
            cout << " Je hebt koffie gekozen. Geniet ervan!" <<endl;
            break;
        case 2:
            cout << " Je hebt cappucino gekozen. Geniet ervan!" <<endl;
            break;
        case 3:
            cout << " Je hebt chocolade melk gekozen. Geniet ervan!" <<endl;
            break;
        case 4:
            cout << " Je hebt exspresso gekozen. Geniet ervan!" <<endl;
            break;
        case 5:
            cout << " Je hebt latte caramel gekozen. Geniet ervan!" <<endl;
            break;
        case 6:
            cout << " Je hebt ijskoffie gekozen. Geniet ervan!" <<endl;
            break;
        default:
            cout << " Ongeldige keuze. Probeer opnieuw met een getal tussen 1 en 6." <<endl;
            break;
    

            int main() {
                opgave11();
                return 0;
            }
        
    
    

            
            
            
            
    

            void opgave10() {
    int Homealone =0;
    int it =0;
    int grinch = 0;
    int ted1 = 0;
    int lionking = 0;
    cout << "vul je film in de gene met de meeste stemmen wint";
    cout << "Had niet verwacht dat deze film had gewonnen";
    std::cout << "hoeveel films wil je invoeren";
    int studenten =0;
    cin >> studenten;
    for (int i=0; i <studenten; i++) {
        cout<<"welke film vind jij het leukst";
        int nummer;
        cin >> nummer;
        switch (nummer) {
            case 1:
                Homealone += 1;
                break;
            case 2:
                it += 1;
                break;
            case 3:
                grinch += 1;
                break;
            case 4:
                ted1 += 1;
                break;
            case 5:
                lionking += 1;
                break;
                
            default:
                cout << "Je hebt het verkeerde nummer ingevuld";
                break;
        }
        
    }
    
    if (Homealone > it && Homealone > grinch && Homealone > ted1 && Homealone > lionking) {
        cout << "HomeAlone";
    }
    if (it > Homealone && it > grinch && it > ted1 && it > lionking) {
        cout << "It";
    }
    if (grinch > Homealone && grinch > it && grinch > ted1 && grinch > lionking) {
        cout << "Grinch";
    }
    if (ted1 > Homealone && ted1 > it && ted1 > grinch && ted1 > lionking) {
        cout << "Ted1";
    }
    if (lionking > Homealone && lionking > it && lionking > grinch && lionking > ted1) {
        cout << "Lionking";
    }

        
    // int zijn de aantal films3
    //alleen nog input tonen op het scherm
    
}

    int main() {
        opgave10();
        return 0;
    }
    
    
    
    
    
    
    
    

