#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int liczba, strzal, ile_prob=0;


int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe 1...100.  " << endl;
    srand(time(NULL));
    liczba = rand ()%100+1;   //usunelam cout<< liczba<<endl; bo pokazywalo na poczatku wynik


    while(strzal!=liczba)
    {
        ile_prob++;
       cout<< "Zgadnij jaka: to Twoja "<<ile_prob<<" proba:";
       cin>>strzal ;
       cout<<endl;

       if(strzal==liczba)
        cout<< "Udalo sie! Wygrywasz!"<< ile_prob<< " w probie:"<< endl;


       else if(strzal<liczba)
        cout<< "Niestety, nie udalo sie. To za malo"<< endl;

        else if(strzal>liczba)
        cout<< "Niestety nie udalo sie. To za duzo"<< endl;

    }
    system("pause"); //mo¿e byc getchar(); getchar();   ale uprzednio dodaæ biblioteke       #include <stdio.h>


    return 0;
}
