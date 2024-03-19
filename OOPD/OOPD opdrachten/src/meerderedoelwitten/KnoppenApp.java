package meerderedoelwitten;

import java.util.ArrayList;
import processing.core.PApplet;

public class KnoppenApp extends PApplet {
	
	public static void main(String[] args) {
		PApplet.main(new String[] {"meerderedoelwitten.KnoppenApp"});
	}
	
	private ArrayList<Knop> knoppen = new ArrayList<>();
	private ArrayList<Knop> knopps = new ArrayList<>();


	private IDoelwit licht;
	private IDoelwit tekstraam;
	
	public void settings(){
		size(400, 400);	
	}
	
	public void setup() {

		licht = new Licht(this);
		tekstraam = new Tekstraam(this,"OOPD",250,250);
		
		Switch eenSwitch=new Switch(this,100,20,50,50);
		Switch tweeSwitch=new Switch(this,100,200,50,50);


		eenSwitch.voegDoelwitToe(licht);
		eenSwitch.voegDoelwitToe(tekstraam);

		knoppen.add(eenSwitch);


		tweeSwitch.voegDoelwitToe(licht);
		knopps.add(tweeSwitch);



		//TO DO: een 2de switch toevoegen
		
	}
	
	public void draw() {
		licht.teken();
		tekstraam.teken();
		for (Knop k : knoppen) {
			k.tekenKnop();
		}
		for (Knop k : knopps) {
			k.tekenKnop();
		}
	}
	
	public void mousePressed() {

		for (Knop k : knoppen) {
			if (k.isMuisOverKnop()) {
				k.handelInteractieAf();
				tekstraam.schakel();
			}
		}
		for (Knop k : knopps) {
			if (k.isMuisOverKnop()) {
				k.handelInteractieAf();
				licht.schakel();
			}
		}
	}
}
