// Einbinden der Standard-Bibliothek
#include <stdio.h>

// Deklaration aller Variablen, um später die Umfrage machen zu können
int g = 0;
int a = 0;
int w = 0;
int h = 0;
int k = 0;
int p = 0;

// Deklaration der Funktionen, um sie leichter einzubinden
void Geschlecht(void);
void Alter(void);
void Gewicht(void);
void Groesse(void);
void Koerper(void);
void Psyche(void);

//Hauptprogramm
int main(void) {

// Aufruf der ersten Funktion
Geschlecht();

// muss am Ende jedes Programms sein
return 0;
}

// erste Funktion
void Geschlecht(void) {
  // Anzeige der Frage nach dem Geschlecht
  printf("Sind Sie männlich(1), weiblich(2) oder divers(3)? \n");
  // Eingabe des/der Nutzer:in
  scanf("%d", &g);
  // Antworten, je nachdem welchem Fall man angehört
  if (g==1) {
    printf("Sie sind ein Mann? Super! Dann entsprechen Sie dem einzigen Geschlecht auf dem unsere Studien an dem Medikament basieren! \n\n");
    // Aufruf der zweiten Funktion
    Alter();
  }
  else if (g==2 || g==3) {
    printf("Leider war es uns nicht möglich alle anderen Geschlechter in unsere Studien mit aufzunehmen, da es einfach zeitaufwändig, sowie auch zu teuer gewesen wäre und insbesondere der Zyklus der Frau uns zu kompliziert ist, da Unterschiede in der Auswirkungen des Medikaments in den verschiedenen Stadien des Zyklus zu erwarten sind. Gerne nehmen Sie diese Pille trotzdem und hoffen, dass Sie mit der Nebenwirkungen der Überdosierung klarkommen!\n");
  }
  else{
    printf("Tut mir leid, fangen Sie nochmal an!\n");
  }
}

// zweite Funktion
void Alter(void) {
  // Anzeige der Frage nach dem Alter
  printf("Wie alt sind Sie?\n");
  // Eingabe des/der Nutzer:in
  scanf("%d", &a);
  // Antworten, je nachdem welchem Fall man angehört
  if(a<18){
    printf("Tut uns leid, Kinder sind nicht Teil unserer Studien! Gerne nehmen Sie diese Pille trotzdem und hoffen, dass Sie mit der Nebenwirkungen der Überdosierung klarkommen!\n");
  }
  else if(a>=18 && a<=60){
    printf("Perfekt! Auf diesen Daten basieren unsere Forschungstests!\n\n");
    // Aufruf der dritten Funktion
    Gewicht();
  }
  else{
    printf("Viel zu alt! Sie bräuchten wahrscheinlich eine individuelle Dosierung. Doch an alten Menschen haben wir nicht getestet. Sorry! Gerne nehmen Sie diese Pille trotzdem und hoffen, dass Sie mit der Nebenwirkungen der Überdosierung klarkommen!\n");
  }
}

// dritte Funktion
void Gewicht(void) {
  // Anzeige der Frage nach dem Gewicht
  printf("Wie schwer sind Sie?\n");
  // Eingabe des/der Nutzer:in
  scanf("%d", &w);
  // Antworten, je nachdem welchem Fall man angehört
  if(w<63 || w>85){
    printf("Leider können unsere Forschungsdaten nur angemessen etwas über das Standardgewicht des Mannes etwas aussagen. Das ist leider Ihr Problem. Gerne nehmen Sie diese Pille trotzdem und hoffen, dass Sie mit der Nebenwirkungen der Überdosierung klarkommen!\n");
  }
  else if(w>=63 && w<=85){
    printf("Super, Sie entsprechen unseren Standards!\n\n");
    // Aufruf der vierten Funktion
    Groesse();
  }
}

// vierte Funktion
void Groesse(void) {
  // Anzeige der Frage nach dem Groesse
  printf("Wie groß sind Sie? (in cm)\n");
  // Eingabe des/der Nutzer:in
  scanf("%d", &h);
  // Antworten, je nachdem welchem Fall man angehört
  if(h<175 || h>185){
    printf("Unsere Forschungsdaten sind nicht am Aussagekräftigsten für Männer unter oder über der Standardgröße. Da haben Sie leider Pech. Gerne nehmen Sie diese Pille trotzdem und hoffen, dass Sie mit der Nebenwirkungen der Überdosierung klarkommen!\n");
  }
  else if(h>=175 && h<=185){
    printf("Super, Sie entsprechen unseren Standards!\n\n");
    // Aufruf der fuenften Funktion
    Koerper();
  }
}

// fuenfte Funktion
void Koerper(void) {
  // Anzeige der Frage nach der körperlichen Gesundheit
  printf("Haben Sie irgendwelche physischen Einschränkungen? Ja(1), Nein(2)\n");
  // Eingabe des/der Nutzer:in
  scanf("%d", &k);
  // Antworten, je nachdem welchem Fall man angehört
  if(k==1){
    printf("Keine Forschungsdaten vorliegend. Es ist uns einfach zu teuer und aufwendig unser Probandenspektrum divers zu gestalten. Gerne nehmen Sie diese Pille trotzdem und hoffen, dass Sie mit der Nebenwirkungen der Überdosierung klarkommen!\n");
  }
  else if(k==2){
    printf("Super, weiter geht's!\n\n");
    // Aufruf der sechsten Funktion
    Psyche();
  }
  else{
    printf("Tut mir leid, fangen Sie nochmal an!\n\n");
  }
}

//sechste Funktion
void Psyche(void) {
  // Anzeige der Frage nach dem mentalen Gesundheit
  printf("Haben Sie irgendwelche psychischen Einschränkungen? Ja(1), Nein(2)\n");
  // Eingabe des/der Nutzer:in
  scanf("%d", &p);
  // Antworten, je nachdem welchem Fall man angehört
  if(p==1){
    printf("Keine Forschungsdaten vorliegend. Es ist uns einfach zu teuer und aufwendig unser Probandenspektrum divers zu gestalten. Gerne nehmen Sie diese Pille trotzdem und hoffen, dass Sie mit der Nebenwirkungen der Überdosierung klarkommen!\n");
  }
  else if(p==2){
    printf("Sie entsprechen dem Standard eines typischen Mannes! Perfekt! Dann können Sie dieses Medikament ohne Probleme nehmen, denn wir haben in unseren Studien ausschließlich an Männern mit diesem Standard getestet.\n");
  }
  else{
    printf("Tut mir leid, fangen Sie nochmal an!\n");
  }
}
