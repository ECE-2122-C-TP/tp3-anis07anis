int main() {
    //Exercice 1
    /*int a = 0, b = 0;
    printf("entrez la première valeur :\n");
    scanf("%d", &a);
    printf("entrez la seconde valeur :\n");
    scanf("%d", &b);
    if (a > b) {
        printf("La plus grande valeur est %d", a);
    }
    else if (b > a) {
        printf("Le plus grande valeur est %d", b);
    }
    else {
        printf("Les deux valeurs sont égales");
    }*/


    //Exercice 2
    /*int l = 0, L = 0, P, A;
    printf("Saisir une valeur pour l:\n");
    scanf("%d", &l);
    printf("Saisir une valeur pour L:\n");
    scanf("%d", &L);
    P = (l+L)*2;
    A = L*l;
    printf("Les valeurs correspondantes au perimètre et a l'aire sont %d" , P, A);*/


    //Exercice 3
    /*int a = 0;
    printf("Saisir une valeur pour a:\n");
    scanf("%d" , a);
    if (a%3 == 0) {
        printf("L'entier est un multiple de 3");
    }
    else {
        printf("L'entier n'est pas un multiple de 3");
    }
    if (a>= 10) {
        printf("L'entier est supérieur ou égal à 10");
    }
    else {
        printf("l'entier est strictement inférieur à 10");*/


    //Exercice 4
    /*int age, e;
    printf("Saisir votre age:\n");
    scanf("%d", &age);
    printf("Saisissez 1 si age étudiant inférieur à 27 sinon saisissez 0:\n");
    scanf("%d", &e);
    if (age < 12) {
        printf("Vous beneficiez du tarif enfant, 4 euros");
    }
    if (age >= 12, age <= 17 II e ==1) {
        printf("Vous beneficiez du tarif jeune, 6 euros");
    }
    if (age >= 65) {
        printf("Vous beneficiez du tarif senior, 6 euros");
    }
    else {
        printf("Vous devez payer le plein tarif");
    }*/


    //Exercice 5
    /*int n;
    printf("Saisissez la valeur pour n correspondant à votre boisson:\n");
    scanf("%d", &n);
    if (n == 1) {
        printf("Vous avez selectionné la boisson suivante : Sprite");
    }
    if (n == 2) {
        printf("Vous avez selectionné la boisson suivante : Hawai");
    }
    if (n == 3) {
        printf("Vous avez selectionné la boisson suivante : Orangina");
    }
    if (n == 10) {
        printf("Vous avez selectionné la boisson suivante : Chocolat chaud");
    }
    if (n == 11) {
        printf("Vous avez selectionné la boisson suivante : Cafe");
    }
    if (n != 1 && n != 2 && n != 3 && n != 10 && n != 11) {
        printf ("Erreur numero correspondant à aucune boisson");
    }*/


    //Exerccie 6
    /*float a, b, c, m;
    printf("Saisissez la note a:\n");
    scanf("%f", &a);
    while(a<0 II a>20) {
        printf("La note saisie n'est pas comprise entre 0 et 20");
        scanf("%f", &a);
    }
    printf("Saisissez la note b:\n");
    scanf("%f", &b);
    while(b<0 II b>20) {
        printf("La note saisie n'est pas comprise entre 0 et 20");
        scanf("%f", &b);
    }
    printf("Saisissez la note c:\n");
    scanf("%f", &c);
    while(c<0 II c>20) {
        printf("La note saisie n'est pas comprise entre 0 et 20");
        scanf("%f", &c);
    }
    m = (a + b + c) / 3
    printf("La moyenne des trois notes saisies est de %f", m);*/


    //Exercice 7
    /*int i = 1, nbclasses, nbeleves, total =0;
    printf("Saisissez le nombre de classes:\n");
    scanf("%d", &nbclasse);
    while(i <= nbclasses) {
        printf("Saisissez le nombre d'éléves dans la classe : %d", i);
        scanf("%d", nbeleves);
        total = total + nbeleves
        i = i + 1
    }
    printf("Le nombre total d'éléves est %d", total);*/


    //Exercice 8
    /*int n;
    printf("Saisissez une valeur entière pour n");
    scanf("%d", n);
    while (a % 7 != 0 && a % 2 != 0) {
        printf("La valeur saisie n'est ni un multiple de 7, ni de 2");
        scanf("%d", n);
    }
    printf("Le nombre saisie est un multiple de 7 ou de 2");*/


    //Exercice 9
    /*int pierre, s=0, i=1, e;
    printf("Saisissez le nombre de pierres");
    scanf("%d", pierre);
    if (pierre == 0) {
        printf("Vous ne pouvez pas faire le moindre étage");
    }
    else {
        while(pierre > (i * i) + s) {
            i = i + 1;
            s = s + (i * i);
        }
        e = i - 1
        printf("La pyramide comporte %d étages", e)
    }*/


    //Exercice 10
    /*float n, i=0, s=0, m;
    if(n<0) {
    printf("Erreur veuillez saisir une valeur valide")
    else {
        do {
        printf("Saisissez une note");
        scanf("%f, n");
        i = i + 1;
        s = s + n;
        } while(n>0);
    }
    m = s / i;
    printf("La moyenne est de %f", m);*/

    return 0;
}


