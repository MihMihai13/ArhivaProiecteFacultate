package lesson9;

public class Lesson9Exercise1 {

	public static void main(String[] args) {
		int i;
		for (i = 1; i <= 100; i++) {
			if (i % 2 != 0) {	//daca (i/2) are rest atunci i nu este par
				continue;		//daca i nu este par, atunci trecem la urmatoarea iteratie
			}
			System.out.println("Numar par: " + i);	//afisam valoare curenta a lui i care va fi numai numere pare
		}
	}

}