package radioknopStartcode;
import java.util.ArrayList;
import processing.core.PApplet;

public class KnoppenApp extends PApplet {

	public static void main(String[] args) {
		PApplet.main(new String[]{"radioknopStartcode.KnoppenApp"});
	}

	private ArrayList<Radioknop> knoppen = new ArrayList<>();

	public void settings() {
		size(400, 400);
	}

	public void setup() {
		Radioknop radio1 = new Radioknop(this, width / 2 - 55, height / 2, 50, 50);
		Radioknop radio2 = new Radioknop(this, width / 2, height / 2, 50, 50);
		Radioknop radio3 = new Radioknop(this, width / 2 + 55, height / 2, 50, 50);

		// afhankelijk welke radiobutton gekozen is wordt er een tekst
		// in de console geprint, hiervoor heb ik een nieuw doelwit gemaakt
		// Keuzeoptie die de IDoelwit implementeert. Staat dus niet in het 
		// klassediagram
		radio1.voegDoelwitToe(new Keuzeoptie("Optie 1"));
		radio2.voegDoelwitToe(new Keuzeoptie("Optie 2"));
		radio3.voegDoelwitToe(new Keuzeoptie("Optie 3"));

		//TODO code die de radioknoppen met elkaar koppelt

// zodat er maar 1 aan kan staan


		knoppen.add(radio1);
		knoppen.add(radio2);
		knoppen.add(radio3);

	}

	public void draw() {
		for (Knop k : knoppen) {
			k.tekenKnop();

		}
	}

	public void mousePressed() {
		for (Radioknop k : knoppen) {
			if (k.isMuisOverKnop()) {
				for (Radioknop k2 : knoppen) {
					k2.isAan = false;
				}

				k.handelInteractieAf();

			}
		}
	}
}
