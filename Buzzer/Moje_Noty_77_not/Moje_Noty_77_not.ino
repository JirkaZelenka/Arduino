/*************************************************
 * Public Constants
 *************************************************/
#define C0   16.35
#define Cis0 17.32
#define D0   18.35
#define Dis0 19.45
#define E0   20.6
#define F0   21.83
#define Fis0 23.12
#define G0   24.5  
#define Gis0 25.96
#define A0   27.5
#define Ais0 29.14
#define H0   30.87
#define C1   32.7
#define Cis1 34.65
#define D1   36.71
#define Dis1 38.89
#define E1   41.20
#define F1   43.65
#define Fis1 46.25
#define G1   49
#define Gis1 51.91
#define A1   55
#define Ais1 58.27
#define H1   61.74
#define C2   65.41
#define Cis2 69.3
#define D2   73.42
#define Dis2 77.78
#define E2   82.41
#define F2   87.31
#define Fis2 92.5
#define G2   98
#define Gis2 103.83
#define A2   110
#define Ais2 116.54
#define H2   123.47
#define C3   130.81
#define Cis3 138.59
#define D3   146.83
#define Dis3 155.56
#define E3   164.81
#define F3   174.61
#define Fis3 185
#define G3   196
#define Gis3 207.65
#define A3   220
#define Ais3 233.08
#define H3   246.94
#define C4   261.63
#define Cis4 277.18
#define D4   293.66
#define Dis4 311.13
#define E4   329.63
#define F4   349.23
#define Fis4 369.99
#define G4   392
#define Gis4 415.3
#define A4   440
#define Ais4 466.16
#define H4   493.88
#define C5   523.25
#define Cis5 554.37
#define D5   587.33
#define Dis5 622.25
#define E5   659.25
#define F5   698.46
#define Fis5 739.99
#define G5   783.99
#define Gis5 830.61
#define A5   880
#define Ais5 932.33
#define H5   987.77
#define C6   1046.5
#define Cis6 1108.73
#define D6   1174.66
#define Dis6 1244.51
#define E6   1318.51
#define F6   1396.91
#define Fis6 1479.98
#define G6   1567.98
#define Gis6 1661.22
#define A6   1760
#define Ais6 1864.66
#define H6   1975.53
#define C7   2093
#define Cis7 2217.46
#define D7   2349.32
#define Dis7 2489.02
#define E7   2637.02
#define F7   2793.83
#define Fis7 2959.96
#define G7   3135.96
#define Gis7 3322.44
#define A7   3520
#define Ais7 3729.31
#define H7   3951.07
#define C8   4186.01
#define Cis8 4434.92
#define D8   4698.63
#define Dis8 4978.03
#define E8   5274.04
#define F8   5587.65
#define Fis8 5919.91
#define G8   6271.93
#define Gis8 6644.88
#define A8   7040
#define Ais8 7458.62
#define H8   7902.13


const int buzzer = 10;
const int songspeed = 1.5;
//Change to 2 for a slower version of the song, the bigger the number the slower the song


int notes[] = {       //Note of the song, 0 is a rest/pulse

 H1  ,
 C2  ,
 Cis2 ,
 D2  ,
 Dis2 ,
 E2  ,
 F2  ,
 Fis2 ,
 G2  ,
 Gis2 ,
 A2  ,
 Ais2 ,
 H2  ,
 C3  ,
 Cis3 ,
 D3  ,
 Dis3 ,
 E3  ,
 F3  ,
 Fis3 ,
 G3  ,
 Gis3 ,
 A3  ,
 Ais3 ,
 H3,
  C4  ,
 Cis4 ,
 D4  ,
 Dis4 ,
 E4  ,
 F4  ,
 Fis4 ,
 G4  ,
 Gis4 ,
 A4  ,
 Ais4 ,
 H4  ,
 C5  ,
 Cis5 ,
 D5  ,
 Dis5 ,
 E5  ,
 F5  ,
 Fis5 ,
 G5  ,
 Gis5 ,
 A5  ,
 Ais5 ,
 H5  ,
 C6  ,
 Cis6 ,
 D6  ,
 Dis6 ,
 E6  ,
 F6  ,
 Fis6 ,
 G6  ,
 Gis6 ,
 A6  ,
 Ais6 ,
 H6  ,
 C7  ,
 Cis7 ,
 D7  ,
 Dis7 ,
 E7  ,
 F7  ,
 Fis7 ,
 G7  ,
 Gis7 ,
 A7  ,
 Ais7 ,
 H7  ,
 C8  ,
 Cis8 ,
 D8  ,
 Dis8   

};
int duration[] = {   


  
  250, 250, 250, 250,  250, 250,250,
  
  250, 250, 250, 250,  250, 250,250,  
  250, 250, 250, 250,  250, 250,250,  
  250, 250, 250, 250,  250, 250,250,
    250, 250, 250, 250,  250, 250,250,
      250, 250, 250, 250,  250, 250,250,
        250, 250, 250, 250,  250, 250,250,
          250, 250, 250, 250,  250, 250,250,
            250, 250, 250, 250,  250, 250,250,
              250, 250, 250, 250,  250, 250,250,
                250, 250, 250, 250,  250, 250,250
};

void setup() {
  for (int i=0;i<77;i++){              //203 is the total number of music notes in the song
  int wait = duration[i] * songspeed;
  tone(buzzer,notes[i],wait);          
  delay(wait);}                       
}
void loop() {}
