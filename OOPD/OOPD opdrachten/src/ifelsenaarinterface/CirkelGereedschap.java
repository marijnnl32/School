package ifelsenaarinterface;

public class CirkelGereedschap implements IGereedschap{
    @Override
    public void pasGereedschaptoe(TekenApp app){
        Cirkel c = new Cirkel(app.mouseX, app.mouseY, 50);
        app.figurenLijst.add(c);
    }

}

