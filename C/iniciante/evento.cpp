#include <iostream>
#include <string>

#define DIA_SEG 86400
#define HORA_SEG 3600
#define MIN_SEG 60

using namespace std;

int main() {
    string entrada_dia_inicio, entrada_hora_inicio, entrada_dia_fim, entrada_hora_fim;
    int dia_inicio, dia_fim, hora_inicio, min_inicio, seg_inicio, hora_fim, min_fim, seg_fim; 
    int segs_total_dia_1, segs_total_dia_final, segs_interval;
    
    int dias; 
    int horas; 
    int min;
    int segs;

    getline(cin, entrada_dia_inicio);
    getline(cin, entrada_hora_inicio);
    getline(cin, entrada_dia_fim);
    getline(cin, entrada_hora_fim);

    entrada_dia_inicio.replace(entrada_dia_inicio.begin(), entrada_dia_inicio.begin()+4, "");
    entrada_dia_fim.replace(entrada_dia_fim.begin(), entrada_dia_fim.begin()+4, "");
    
    dia_inicio = stoi(entrada_dia_inicio);
    dia_fim = stoi(entrada_dia_fim);
    
    hora_inicio = stoi(entrada_hora_inicio.substr(0, 2));
    min_inicio = stoi(entrada_hora_inicio.substr(5, 2));
    seg_inicio = stoi(entrada_hora_inicio.substr(10, 2));

    hora_fim = stoi(entrada_hora_fim.substr(0, 2));
    min_fim = stoi(entrada_hora_fim.substr(5, 2));
    seg_fim = stoi(entrada_hora_fim.substr(10, 2));

    segs_total_dia_1 = (dia_inicio * DIA_SEG) + (hora_inicio * HORA_SEG) + (min_inicio * MIN_SEG) + seg_inicio;
    segs_total_dia_final = (dia_fim * DIA_SEG) + (hora_fim * HORA_SEG) + (min_fim * MIN_SEG) + (seg_fim);

    segs_interval = segs_total_dia_final - segs_total_dia_1;
    //calculando o tempo do evento:
    dias = segs_interval/DIA_SEG;
    segs_interval = segs_interval%DIA_SEG;
    horas = segs_interval/HORA_SEG;
    segs_interval = segs_interval%HORA_SEG;
    min = segs_interval/60; 
    segs_interval = segs_interval%60; 
    segs = segs_interval; 

    cout << dias << " dia(s)" << "\n";
    cout << horas << " hora(s)" << "\n";
    cout << min << " minuto(s)" << "\n";
    cout << segs << " segundo(s)" << "\n";

    return 0;
}